#include <wx/log.h>
#include <wx/filedlg.h>

#include "bpmainframe.h"
#include "portaudio.h"
#include "mpg123.h"
#include <io.h>

mpg123_handle *mh = NULL;
static float buffer[65536*2];

// Could have used the macro, but I find them confusing.
const wxEventType wxEVT_STOP_FSM = wxNewEventType();

namespace bestpractice
{

/* This routine will be called by the PortAudio engine when audio is needed.
** It may called at interrupt level on some machines so don't do anything
** that could mess up the system like calling malloc() or free().
*/
static int portaudioCallback( const void *inputBuffer, void *outputBuffer,
                              unsigned long framesPerBuffer,
                              const PaStreamCallbackTimeInfo* timeInfo,
                              PaStreamCallbackFlags statusFlags,
                              void *userData )
{
    float * floatOutputBuffer = (float *) outputBuffer;
    size_t got;
    const int numchannels = 2;

    //memset( (unsigned char*) buffer, 0, sizeof(buffer) );

    int mpgerr = mpg123_read( mh, (unsigned char*) buffer, numchannels*framesPerBuffer*sizeof(float), &got );

    int numframesgotten = got/(numchannels*sizeof(float) );

    for (int i = 0;i < numframesgotten; ++i )
    {
//        if ( (buffer [2*i] > 1.0) )
//        {
//            wxLogDebug( L"%f" ,  buffer [2*i]);
//        }
        floatOutputBuffer[ 2*i ] = buffer [2*i];
        floatOutputBuffer[ 2*i + 1 ] = buffer [2*i + 1 ];

    }

    return ( mpgerr == MPG123_OK ) ? paContinue : paComplete;
}

void portaudioStreamFinished(void* userdata )
{
    wxLogDebug( L"%hs reached.", __FUNCTION__ );

    BpMainFrame* bpmain = static_cast<BpMainFrame*>( userdata );

    // The actual state of the stream (stopped/active)
    // isn't available until after this callback finishes
    // Therefore, post an event and let the event handler check
    // the actual status of the stream.

    wxCommandEvent event( wxEVT_STOP_FSM, 0 ) ;
    event.StopPropagation();

    bpmain->GetEventHandler()->AddPendingEvent(event);
}

BpMainFrame::BpMainFrame( wxWindow* parent )
        :
        BpMainFrameBase( parent ), stream( NULL ), bp_state( *this )
{

    this->Connect( wxEVT_STOP_FSM, wxCommandEventHandler( BpMainFrame::EventStopFSM ) );

    PaError err = Pa_Initialize();
    if ( err != paNoError )
    {
        wxLogFatalError( _( "I'm sorry, I cannot initialize the audio layer (portaudio). "
                            "This application cannot continue and needs to be closed." ) );
    }

}

BpMainFrame::~BpMainFrame( )
{
    PaError err = Pa_Terminate();
    if ( err != paNoError )
    {
        wxLogFatalError( _( "Terminating the audio layer has failed. Weird, but we were "
                            "closing shop anyway." ) );
    }

}

void BpMainFrame::pitchResetClick( wxCommandEvent& event )
{

}

void BpMainFrame::finePitchResetClick( wxCommandEvent& event )
{
    // TODO: Implement finePitchResetClick
}

void BpMainFrame::speedResetClick( wxCommandEvent& event )
{
    // TODO: Implement speedResetClick
}

void BpMainFrame::FlatBtnClick( wxCommandEvent& event )
{
    // TODO: Implement FlatBtnClick
}

void BpMainFrame::prevClick( wxCommandEvent& event )
{
    bp_state.Previous();
}

void BpMainFrame::playClick( wxCommandEvent& event )
{
    bp_state.PlayPause();
}

void BpMainFrame::pauseClick( wxCommandEvent& event )
{
    // TODO: Implement pauseClick
}

void BpMainFrame::nextClick( wxCommandEvent& event )
{
   bp_state.Next();
}

void BpMainFrame::loopStartNowClick( wxCommandEvent& event )
{
    // TODO: Implement loopStartNowClick
}

void BpMainFrame::loopEndNowClick( wxCommandEvent& event )
{
    // TODO: Implement loopEndNowClick
}

void BpMainFrame::OpenFile( wxCommandEvent& event )
{
   wxFileDialog filedialog(this);

   if (filedialog.ShowModal() )
   {
       bp_state.NewFile( filedialog.GetPath() );
   }
}

void BpMainFrame::OpenDisc( wxCommandEvent& event )
{
    // TODO: Implement OpenDisc
}

void BpMainFrame::SaveAs( wxCommandEvent& event )
{
    // TODO: Implement SaveAs
}

void BpMainFrame::SaveLoopPoints( wxCommandEvent& event )
{
    // TODO: Implement SaveLoopPoints
}

void BpMainFrame::CheckCDDB( wxCommandEvent& event )
{
    // TODO: Implement CheckCDDB
}

void BpMainFrame::AboutMenu( wxCommandEvent& event )
{
    // TODO: Implement AboutMenu
}

/// Open a new PaStream, parameters based on a file
bool BpMainFrame::InitializeAudioStreamFromFile( const wxString& filename )
{

    if ( Pa_IsStreamActive( stream ) )
    {
        UninitializeAudioStream();
    }


    int channels, encoding;
    long int rate;

    fd = _topen( filename.c_str(), _O_RDONLY|_O_BINARY | _O_RANDOM );

    if ( fd == -1 )
    {
       wxLogError ( L"Error opening file" );
       wxLogError ( L"errno: %d", errno );

       return false;
    }

    int err = mpg123_init();

    if ( err != MPG123_OK )
    {
        wxLogError ( L"Error initializing libmpg123" );
    }

    if ( (mh = mpg123_new(NULL, &err) ) == NULL )
    {
        wxLogError( L"Error getting new mpg123 handle" );
    }


    mpg123_param(mh,MPG123_FLAGS,MPG123_FORCE_FLOAT|MPG123_FORCE_STEREO|MPG123_GAPLESS,0);

    // Let mpg123 work with the file, that excludes MPG123_NEED_MORE messages.
    // Moreover, mpg123 knows how to seek a MP3 file. I choked many times on
    // stupid issues (non-conformant files)

    if ( mpg123_open_fd(mh,fd  ) != MPG123_OK)
    {
        wxLogError( L"Error opening mp3 file with mpg123_open_fd()" );
        wxLogError( _( "Trouble with mpg123: %hs\n" ) ,
                    mh==NULL ? mpg123_plain_strerror(err) : mpg123_strerror(mh) );
        return false;
    }

    if ( mpg123_scan( mh ) != MPG123_OK )
    {
        wxLogError( _( "Trouble with mpg123: %hs\n" ) ,
                    mh==NULL ? mpg123_plain_strerror(err) : mpg123_strerror(mh) );
    }

            /* Peek into track and get first output format. */
    if( mpg123_getformat(mh, &rate, &channels, &encoding) != MPG123_OK )
    {
        wxLogError( _( "Trouble with mpg123: %hs\n" ) ,
                    mh==NULL ? mpg123_plain_strerror(err) : mpg123_strerror(mh) );

        return false;
    }


    wxLogDebug( L"rate: %d. channels: %d. encoding: %d", rate, channels, encoding );

    PaStreamParameters outputParameters;
    outputParameters.device = Pa_GetDefaultOutputDevice(); /* default output device */
    outputParameters.channelCount = 2;       /* stereo output */
    outputParameters.sampleFormat = paFloat32; /* 32 bit floating point output */
    outputParameters.suggestedLatency = Pa_GetDeviceInfo( outputParameters.device )->defaultLowOutputLatency;
    outputParameters.hostApiSpecificStreamInfo = NULL;

    err = Pa_OpenStream(
              &stream,
              NULL, /* no input */
              &outputParameters,
              rate,
              paFramesPerBufferUnspecified,
              0,
              portaudioCallback,
              static_cast<void*>( this ) );

    if ( err != paNoError )
    {
        wxLogError( L"Failure opening audio device. Stopping" );

        return false;
    }

    Pa_SetStreamFinishedCallback( stream, portaudioStreamFinished );

    // Note that we do *not* start the stream here. This is taken care of by the state machine
    // when necessary
    return true;
}

bool BpMainFrame::NextAudioFileAvailable()
{
    return false;
}

bool BpMainFrame::PreviousAudioFileAvailable()
{
    return false;
}

bool BpMainFrame::UninitializeAudioStream()
{
    if (!stream) return false;

    if ( Pa_IsStreamActive( stream ) )
    {
        Pa_AbortStream( stream );
    }

    PaError err = Pa_CloseStream( stream );

    if ( err != paNoError )
    {
        wxLogFatalError( L"Fatal error on stopping stream: error code %d", err );
    }


    stream = NULL;

    return true;
}

void BpMainFrame::ContinueStream()
{
    Pa_StartStream( stream );
}

void BpMainFrame::PauseStream()
{
    PaError err = Pa_StopStream( stream );
    if ( err != paNoError )
    {
        wxLogFatalError( L"Cannot pause stream: err = %d ", err );
    }
}

const wxString BpMainFrame::GetNextAudioFileName()
{
    //
}

const wxString BpMainFrame::GetPreviousAudioFileName()
{
    //
}

void BpMainFrame::EventStopFSM( wxCommandEvent& event )
{
    // If the stream is stopped, we're simply pausing
    PaError isstopped = Pa_IsStreamStopped( stream );

    wxLogDebug( L"Pa_IsStreamStopped( bpmain->stream ) returns %d", isstopped );

    if ( isstopped )
    {
        return;
    }

    bp_state.Stop();
    wxLogMessage( L" EventStopFSM reached" );
}

} //namespace
