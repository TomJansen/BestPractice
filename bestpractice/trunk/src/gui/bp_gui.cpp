///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Aug 25 2009)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "bp_gui.h"

///////////////////////////////////////////////////////////////////////////
using namespace bestpractice;

BpMainFrameBase::BpMainFrameBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 552,480 ), wxDefaultSize );
	
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );
	
	m_panel4 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer1;
	fgSizer1 = new wxFlexGridSizer( 2, 2, 0, 0 );
	fgSizer1->AddGrowableCol( 0 );
	fgSizer1->AddGrowableRow( 0 );
	fgSizer1->SetFlexibleDirection( wxBOTH );
	fgSizer1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	wxFlexGridSizer* fgSizer9;
	fgSizer9 = new wxFlexGridSizer( 2, 1, 0, 0 );
	fgSizer9->AddGrowableCol( 0 );
	fgSizer9->AddGrowableRow( 1 );
	fgSizer9->SetFlexibleDirection( wxBOTH );
	fgSizer9->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText1 = new wxStaticText( m_panel4, wxID_ANY, _("Title"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	m_staticText1->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), 70, 90, 92, false, wxEmptyString ) );
	
	bSizer1->Add( m_staticText1, 0, wxALL, 5 );
	
	m_staticText11 = new wxStaticText( m_panel4, wxID_ANY, _("a title"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	bSizer1->Add( m_staticText11, 1, wxALL, 5 );
	
	fgSizer9->Add( bSizer1, 1, wxEXPAND, 5 );
	
	songListCtrl = new wxListCtrl( m_panel4, wxID_ANY, wxDefaultPosition, wxSize( 100,100 ), wxLC_REPORT );
	songListCtrl->SetMinSize( wxSize( 100,100 ) );
	
	fgSizer9->Add( songListCtrl, 1, wxALL|wxEXPAND, 5 );
	
	fgSizer1->Add( fgSizer9, 1, wxEXPAND|wxTOP|wxLEFT, 5 );
	
	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxVERTICAL );
	
	
	bSizer14->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_notebook2 = new wxNotebook( m_panel4, wxID_ANY, wxDefaultPosition, wxSize( -1,-1 ), 0 );
	m_panel2 = new wxPanel( m_notebook2, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer121;
	bSizer121 = new wxBoxSizer( wxVERTICAL );
	
	wxFlexGridSizer* fgSizer5;
	fgSizer5 = new wxFlexGridSizer( 4, 1, 0, 0 );
	fgSizer5->AddGrowableCol( 0 );
	fgSizer5->SetFlexibleDirection( wxBOTH );
	fgSizer5->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText16 = new wxStaticText( m_panel2, wxID_ANY, _("Playing Pitch"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText16->Wrap( -1 );
	fgSizer5->Add( m_staticText16, 0, wxEXPAND|wxRIGHT|wxLEFT, 5 );
	
	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );
	
	pitchSlider = new wxSlider( m_panel2, wxID_ANY, 0, -12, 12, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer9->Add( pitchSlider, 1, wxALL, 5 );
	
	m_bpButton5 = new wxBitmapButton( m_panel2, wxID_ANY, wxBitmap( wxT("resetbmp"), wxBITMAP_TYPE_RESOURCE ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	bSizer9->Add( m_bpButton5, 0, wxALL, 5 );
	
	fgSizer5->Add( bSizer9, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxHORIZONTAL );
	
	semitonesNumber = new wxStaticText( m_panel2, wxID_ANY, _("0"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT );
	semitonesNumber->Wrap( -1 );
	bSizer4->Add( semitonesNumber, 1, wxLEFT, 5 );
	
	semitonesText = new wxStaticText( m_panel2, wxID_ANY, _("semitones"), wxDefaultPosition, wxDefaultSize, 0 );
	semitonesText->Wrap( -1 );
	bSizer4->Add( semitonesText, 0, wxALIGN_RIGHT|wxRIGHT|wxLEFT, 5 );
	
	fgSizer5->Add( bSizer4, 1, wxEXPAND|wxBOTTOM, 5 );
	
	m_staticline2 = new wxStaticLine( m_panel2, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	fgSizer5->Add( m_staticline2, 0, wxEXPAND | wxALL, 5 );
	
	bSizer121->Add( fgSizer5, 0, wxEXPAND|wxTOP|wxRIGHT|wxLEFT, 5 );
	
	wxFlexGridSizer* fgSizer51;
	fgSizer51 = new wxFlexGridSizer( 4, 1, 0, 0 );
	fgSizer51->AddGrowableCol( 0 );
	fgSizer51->SetFlexibleDirection( wxBOTH );
	fgSizer51->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText161 = new wxStaticText( m_panel2, wxID_ANY, _("Pitch fine adjust"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText161->Wrap( -1 );
	fgSizer51->Add( m_staticText161, 0, wxEXPAND|wxRIGHT|wxLEFT, 5 );
	
	wxBoxSizer* bSizer91;
	bSizer91 = new wxBoxSizer( wxHORIZONTAL );
	
	finePitchSlider = new wxSlider( m_panel2, wxID_ANY, 0, -50, 50, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer91->Add( finePitchSlider, 1, wxALL, 5 );
	
	m_bpButton51 = new wxBitmapButton( m_panel2, wxID_ANY, wxBitmap( wxT("resetbmp"), wxBITMAP_TYPE_RESOURCE ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	bSizer91->Add( m_bpButton51, 0, wxALL, 5 );
	
	fgSizer51->Add( bSizer91, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxHORIZONTAL );
	
	centsNumber = new wxStaticText( m_panel2, wxID_ANY, _("0"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT );
	centsNumber->Wrap( -1 );
	bSizer5->Add( centsNumber, 1, wxLEFT, 5 );
	
	centsText = new wxStaticText( m_panel2, wxID_ANY, _("cents"), wxDefaultPosition, wxDefaultSize, 0 );
	centsText->Wrap( -1 );
	bSizer5->Add( centsText, 0, wxALIGN_RIGHT|wxRIGHT|wxLEFT, 5 );
	
	fgSizer51->Add( bSizer5, 1, wxEXPAND|wxBOTTOM, 5 );
	
	m_staticline3 = new wxStaticLine( m_panel2, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	fgSizer51->Add( m_staticline3, 0, wxEXPAND | wxALL, 5 );
	
	bSizer121->Add( fgSizer51, 0, wxEXPAND|wxTOP|wxRIGHT|wxLEFT, 5 );
	
	wxFlexGridSizer* fgSizer52;
	fgSizer52 = new wxFlexGridSizer( 3, 1, 0, 0 );
	fgSizer52->AddGrowableCol( 0 );
	fgSizer52->SetFlexibleDirection( wxBOTH );
	fgSizer52->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText162 = new wxStaticText( m_panel2, wxID_ANY, _("Playing speed"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText162->Wrap( -1 );
	fgSizer52->Add( m_staticText162, 0, wxEXPAND|wxRIGHT|wxLEFT, 5 );
	
	wxBoxSizer* bSizer92;
	bSizer92 = new wxBoxSizer( wxHORIZONTAL );
	
	speedSlider = new wxSlider( m_panel2, wxID_ANY, 100, 50, 200, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer92->Add( speedSlider, 1, wxALL, 5 );
	
	m_bpButton52 = new wxBitmapButton( m_panel2, wxID_ANY, wxBitmap( wxT("resetbmp"), wxBITMAP_TYPE_RESOURCE ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	bSizer92->Add( m_bpButton52, 0, wxALL, 5 );
	
	fgSizer52->Add( bSizer92, 1, wxEXPAND, 5 );
	
	m_staticText192 = new wxStaticText( m_panel2, wxID_ANY, _("100%"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText192->Wrap( -1 );
	fgSizer52->Add( m_staticText192, 0, wxALIGN_RIGHT|wxBOTTOM|wxRIGHT|wxLEFT, 5 );
	
	bSizer121->Add( fgSizer52, 1, wxEXPAND|wxRIGHT|wxLEFT, 5 );
	
	m_panel2->SetSizer( bSizer121 );
	m_panel2->Layout();
	bSizer121->Fit( m_panel2 );
	m_notebook2->AddPage( m_panel2, _("Time && Pitch"), true );
	m_panel3 = new wxPanel( m_notebook2, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxVERTICAL );
	
	wxFlexGridSizer* fgSizer91;
	fgSizer91 = new wxFlexGridSizer( 4, 1, 0, 0 );
	fgSizer91->AddGrowableCol( 0 );
	fgSizer91->SetFlexibleDirection( wxBOTH );
	fgSizer91->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	karaokeBox = new wxCheckBox( m_panel3, wxID_ANY, _("Karaoke mode"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer91->Add( karaokeBox, 1, wxALL, 5 );
	
	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText22 = new wxStaticText( m_panel3, wxID_ANY, _("Slide for optimal vocal suppression"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText22->Wrap( -1 );
	bSizer11->Add( m_staticText22, 0, wxTOP|wxRIGHT|wxLEFT, 5 );
	
	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText23 = new wxStaticText( m_panel3, wxID_ANY, _("Left"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText23->Wrap( -1 );
	bSizer7->Add( m_staticText23, 0, wxALL, 5 );
	
	voiceSuppressionSlider = new wxSlider( m_panel3, wxID_ANY, 50, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer7->Add( voiceSuppressionSlider, 1, wxALL, 5 );
	
	m_staticText241 = new wxStaticText( m_panel3, wxID_ANY, _("Right"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText241->Wrap( -1 );
	bSizer7->Add( m_staticText241, 0, wxALL, 5 );
	
	bSizer11->Add( bSizer7, 1, wxEXPAND, 5 );
	
	fgSizer91->Add( bSizer11, 1, wxEXPAND, 5 );
	
	m_staticline31 = new wxStaticLine( m_panel3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	fgSizer91->Add( m_staticline31, 0, wxALL|wxEXPAND, 5 );
	
	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText25 = new wxStaticText( m_panel3, wxID_ANY, _("Bass pass-through frequency range"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText25->Wrap( -1 );
	bSizer12->Add( m_staticText25, 0, wxTOP|wxRIGHT|wxLEFT, 5 );
	
	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxHORIZONTAL );
	
	bassPassThroughSlider = new wxSlider( m_panel3, wxID_ANY, 50, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer8->Add( bassPassThroughSlider, 1, wxALL, 5 );
	
	m_staticText26 = new wxStaticText( m_panel3, wxID_ANY, _("0 Hz"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText26->Wrap( -1 );
	bSizer8->Add( m_staticText26, 0, wxALL, 5 );
	
	bSizer12->Add( bSizer8, 1, wxEXPAND, 5 );
	
	fgSizer91->Add( bSizer12, 1, wxEXPAND, 5 );
	
	m_staticline4 = new wxStaticLine( m_panel3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	fgSizer91->Add( m_staticline4, 0, wxEXPAND | wxALL, 5 );
	
	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText27 = new wxStaticText( m_panel3, wxID_ANY, _("Treble pass-through frequency range"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText27->Wrap( -1 );
	bSizer13->Add( m_staticText27, 0, wxTOP|wxRIGHT|wxLEFT, 5 );
	
	wxBoxSizer* bSizer93;
	bSizer93 = new wxBoxSizer( wxHORIZONTAL );
	
	treblePassThroughSlider = new wxSlider( m_panel3, wxID_ANY, 50, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer93->Add( treblePassThroughSlider, 1, wxALL, 5 );
	
	m_staticText28 = new wxStaticText( m_panel3, wxID_ANY, _("0 Hz"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText28->Wrap( -1 );
	bSizer93->Add( m_staticText28, 0, wxALL, 5 );
	
	bSizer13->Add( bSizer93, 1, wxEXPAND, 5 );
	
	fgSizer91->Add( bSizer13, 1, wxEXPAND, 5 );
	
	bSizer10->Add( fgSizer91, 1, wxEXPAND|wxALL, 5 );
	
	m_panel3->SetSizer( bSizer10 );
	m_panel3->Layout();
	bSizer10->Fit( m_panel3 );
	m_notebook2->AddPage( m_panel3, _("Karaoke"), false );
	
	bSizer14->Add( m_notebook2, 0, wxALL|wxEXPAND, 5 );
	
	fgSizer1->Add( bSizer14, 1, wxEXPAND|wxTOP|wxRIGHT, 5 );
	
	wxGridBagSizer* gbSizer1;
	gbSizer1 = new wxGridBagSizer( 0, 0 );
	gbSizer1->AddGrowableCol( 1 );
	gbSizer1->SetFlexibleDirection( wxBOTH );
	gbSizer1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText18 = new wxStaticText( m_panel4, wxID_ANY, _("Time"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText18->Wrap( -1 );
	m_staticText18->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), 70, 90, 92, false, wxEmptyString ) );
	
	gbSizer1->Add( m_staticText18, wxGBPosition( 0, 0 ), wxGBSpan( 1, 1 ), wxALL, 5 );
	
	timeSlider = new wxSlider( m_panel4, wxID_ANY, 0, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	gbSizer1->Add( timeSlider, wxGBPosition( 0, 1 ), wxGBSpan( 1, 1 ), wxALL|wxEXPAND, 5 );
	
	timeText = new wxStaticText( m_panel4, wxID_ANY, _("0:00:00"), wxDefaultPosition, wxDefaultSize, 0 );
	timeText->Wrap( -1 );
	timeText->SetFont( wxFont( 10, 70, 90, 90, false, wxEmptyString ) );
	
	gbSizer1->Add( timeText, wxGBPosition( 0, 2 ), wxGBSpan( 1, 1 ), wxALL, 5 );
	
	m_staticText193 = new wxStaticText( m_panel4, wxID_ANY, _("Volume"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText193->Wrap( -1 );
	m_staticText193->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), 70, 90, 92, false, wxEmptyString ) );
	
	gbSizer1->Add( m_staticText193, wxGBPosition( 1, 0 ), wxGBSpan( 1, 1 ), wxALL, 5 );
	
	volumeSlider = new wxSlider( m_panel4, wxID_ANY, 0, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	gbSizer1->Add( volumeSlider, wxGBPosition( 1, 1 ), wxGBSpan( 1, 1 ), wxALL|wxEXPAND, 5 );
	
	volumeText = new wxStaticText( m_panel4, wxID_ANY, _("100"), wxDefaultPosition, wxDefaultSize, 0 );
	volumeText->Wrap( -1 );
	volumeText->SetFont( wxFont( 10, 70, 90, 90, false, wxEmptyString ) );
	
	gbSizer1->Add( volumeText, wxGBPosition( 1, 2 ), wxGBSpan( 1, 1 ), wxALL, 5 );
	
	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxHORIZONTAL );
	
	prevButton = new wxBitmapButton( m_panel4, wxID_ANY, wxBitmap( wxT("prevbmp"), wxBITMAP_TYPE_RESOURCE ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	prevButton->SetMinSize( wxSize( 40,20 ) );
	
	prevButton->SetMinSize( wxSize( 40,20 ) );
	
	bSizer3->Add( prevButton, 0, wxALL|wxEXPAND, 5 );
	
	rewindButton = new wxBitmapButton( m_panel4, wxID_ANY, wxBitmap( wxT("rewindbmp"), wxBITMAP_TYPE_RESOURCE ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	rewindButton->SetMinSize( wxSize( 40,20 ) );
	
	rewindButton->SetMinSize( wxSize( 40,20 ) );
	
	bSizer3->Add( rewindButton, 0, wxALL|wxEXPAND, 5 );
	
	playButton = new wxBitmapButton( m_panel4, wxID_ANY, wxBitmap( wxT("playbmp"), wxBITMAP_TYPE_RESOURCE ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	playButton->SetMinSize( wxSize( 40,-1 ) );
	
	playButton->SetMinSize( wxSize( 40,-1 ) );
	
	bSizer3->Add( playButton, 0, wxALL|wxEXPAND, 5 );
	
	pauseButton = new wxBitmapButton( m_panel4, wxID_ANY, wxBitmap( wxT("pausebmp"), wxBITMAP_TYPE_RESOURCE ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	pauseButton->SetMinSize( wxSize( 40,-1 ) );
	
	pauseButton->SetMinSize( wxSize( 40,-1 ) );
	
	bSizer3->Add( pauseButton, 0, wxALL|wxEXPAND, 5 );
	
	forwardButton = new wxBitmapButton( m_panel4, wxID_ANY, wxBitmap( wxT("forwardbmp"), wxBITMAP_TYPE_RESOURCE ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	forwardButton->SetMinSize( wxSize( 40,20 ) );
	
	forwardButton->SetMinSize( wxSize( 40,20 ) );
	
	bSizer3->Add( forwardButton, 0, wxALL|wxEXPAND, 5 );
	
	nextButton = new wxBitmapButton( m_panel4, wxID_ANY, wxBitmap( wxT("playbmp"), wxBITMAP_TYPE_RESOURCE ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	nextButton->SetMinSize( wxSize( 40,-1 ) );
	
	nextButton->SetMinSize( wxSize( 40,-1 ) );
	
	bSizer3->Add( nextButton, 0, wxALL|wxEXPAND, 5 );
	
	gbSizer1->Add( bSizer3, wxGBPosition( 2, 0 ), wxGBSpan( 1, 3 ), wxEXPAND, 5 );
	
	fgSizer1->Add( gbSizer1, 0, wxEXPAND|wxBOTTOM|wxLEFT, 5 );
	
	wxFlexGridSizer* fgSizer8;
	fgSizer8 = new wxFlexGridSizer( 2, 1, 0, 0 );
	fgSizer8->AddGrowableCol( 0 );
	fgSizer8->AddGrowableRow( 1 );
	fgSizer8->SetFlexibleDirection( wxBOTH );
	fgSizer8->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText24 = new wxStaticText( m_panel4, wxID_ANY, _("Loop Controls"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText24->Wrap( -1 );
	m_staticText24->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), 70, 90, 92, false, wxEmptyString ) );
	
	fgSizer8->Add( m_staticText24, 0, wxTOP|wxBOTTOM|wxRIGHT, 5 );
	
	wxFlexGridSizer* fgSizer3;
	fgSizer3 = new wxFlexGridSizer( 3, 9, 0, 0 );
	fgSizer3->AddGrowableCol( 0 );
	fgSizer3->AddGrowableCol( 1 );
	fgSizer3->AddGrowableCol( 2 );
	fgSizer3->AddGrowableCol( 3 );
	fgSizer3->AddGrowableCol( 4 );
	fgSizer3->AddGrowableCol( 5 );
	fgSizer3->AddGrowableCol( 6 );
	fgSizer3->AddGrowableCol( 7 );
	fgSizer3->AddGrowableCol( 8 );
	fgSizer3->SetFlexibleDirection( wxBOTH );
	fgSizer3->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	
	fgSizer3->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_staticText3 = new wxStaticText( m_panel4, wxID_ANY, _("min"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT );
	m_staticText3->Wrap( -1 );
	fgSizer3->Add( m_staticText3, 0, wxEXPAND|wxTOP|wxBOTTOM|wxRIGHT, 5 );
	
	
	fgSizer3->Add( 0, 0, 1, wxEXPAND, 5 );
	
	
	fgSizer3->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_staticText4 = new wxStaticText( m_panel4, wxID_ANY, _("sec"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT );
	m_staticText4->Wrap( -1 );
	fgSizer3->Add( m_staticText4, 0, wxEXPAND|wxTOP|wxBOTTOM|wxRIGHT, 5 );
	
	
	fgSizer3->Add( 0, 0, 1, wxEXPAND, 5 );
	
	
	fgSizer3->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_staticText5 = new wxStaticText( m_panel4, wxID_ANY, _("1/100 s"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT );
	m_staticText5->Wrap( -1 );
	fgSizer3->Add( m_staticText5, 0, wxEXPAND|wxTOP|wxBOTTOM|wxRIGHT, 5 );
	
	
	fgSizer3->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_staticText6 = new wxStaticText( m_panel4, wxID_ANY, _("Start"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	fgSizer3->Add( m_staticText6, 0, wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM|wxRIGHT, 5 );
	
	minLoopStart = new wxSpinCtrl( m_panel4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 40,-1 ), wxSP_ARROW_KEYS, 0, 59, 0 );
	fgSizer3->Add( minLoopStart, 0, wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM|wxLEFT, 5 );
	
	m_staticText7 = new wxStaticText( m_panel4, wxID_ANY, _(":"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	fgSizer3->Add( m_staticText7, 0, wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM, 5 );
	
	
	fgSizer3->Add( 0, 0, 1, wxEXPAND, 5 );
	
	secLoopStart = new wxSpinCtrl( m_panel4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 40,-1 ), wxSP_ARROW_KEYS, 0, 59, 1 );
	fgSizer3->Add( secLoopStart, 0, wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM, 5 );
	
	m_staticText8 = new wxStaticText( m_panel4, wxID_ANY, _(":"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText8->Wrap( -1 );
	fgSizer3->Add( m_staticText8, 0, wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM, 5 );
	
	
	fgSizer3->Add( 0, 0, 1, wxEXPAND, 5 );
	
	subsecLoopStart = new wxSpinCtrl( m_panel4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 40,-1 ), wxSP_ARROW_KEYS, 0, 99, 0 );
	fgSizer3->Add( subsecLoopStart, 0, wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM|wxRIGHT, 5 );
	
	loopStartNowButton = new wxButton( m_panel4, wxID_ANY, _("Now"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	fgSizer3->Add( loopStartNowButton, 0, wxTOP|wxBOTTOM|wxRIGHT, 5 );
	
	m_staticText12 = new wxStaticText( m_panel4, wxID_ANY, _("End"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText12->Wrap( -1 );
	fgSizer3->Add( m_staticText12, 0, wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM|wxRIGHT, 5 );
	
	minLoopEnd = new wxSpinCtrl( m_panel4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 40,-1 ), wxSP_ARROW_KEYS, 0, 59, 0 );
	fgSizer3->Add( minLoopEnd, 0, wxTOP|wxBOTTOM|wxLEFT, 5 );
	
	m_staticText14 = new wxStaticText( m_panel4, wxID_ANY, _(":"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText14->Wrap( -1 );
	fgSizer3->Add( m_staticText14, 0, wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	fgSizer3->Add( 0, 0, 1, wxEXPAND, 5 );
	
	secLoopEnd = new wxSpinCtrl( m_panel4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 40,-1 ), wxSP_ARROW_KEYS, 0, 59, 0 );
	fgSizer3->Add( secLoopEnd, 0, wxTOP|wxBOTTOM, 5 );
	
	m_staticText15 = new wxStaticText( m_panel4, wxID_ANY, _(":"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText15->Wrap( -1 );
	fgSizer3->Add( m_staticText15, 0, wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	fgSizer3->Add( 0, 0, 1, wxEXPAND, 5 );
	
	subsecLoopEnd = new wxSpinCtrl( m_panel4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 40,-1 ), wxSP_ARROW_KEYS, 0, 99, 0 );
	fgSizer3->Add( subsecLoopEnd, 0, wxTOP|wxBOTTOM, 5 );
	
	loopEndNowButton = new wxButton( m_panel4, wxID_ANY, _("Now"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	fgSizer3->Add( loopEndNowButton, 0, wxTOP|wxBOTTOM|wxRIGHT, 5 );
	
	
	fgSizer3->Add( 0, 0, 1, wxEXPAND, 5 );
	
	fgSizer8->Add( fgSizer3, 1, wxEXPAND|wxBOTTOM|wxLEFT, 5 );
	
	fgSizer1->Add( fgSizer8, 1, wxBOTTOM|wxRIGHT|wxLEFT, 5 );
	
	m_panel4->SetSizer( fgSizer1 );
	m_panel4->Layout();
	fgSizer1->Fit( m_panel4 );
	bSizer2->Add( m_panel4, 1, wxEXPAND, 5 );
	
	this->SetSizer( bSizer2 );
	this->Layout();
	main_menubar = new wxMenuBar( 0 );
	actionsMenu = new wxMenu();
	wxMenuItem* openFileMenu;
	openFileMenu = new wxMenuItem( actionsMenu, ID_OPEN_FILE, wxString( _("Open File...") ) , wxEmptyString, wxITEM_NORMAL );
	actionsMenu->Append( openFileMenu );
	
	wxMenuItem* openDiscMenu;
	openDiscMenu = new wxMenuItem( actionsMenu, ID_OPEN_DISC, wxString( _("Open Disc...") ) , wxEmptyString, wxITEM_NORMAL );
	actionsMenu->Append( openDiscMenu );
	
	wxMenuItem* m_separator1;
	m_separator1 = actionsMenu->AppendSeparator();
	
	wxMenuItem* saveAsMenu;
	saveAsMenu = new wxMenuItem( actionsMenu, ID_SAVE_AS, wxString( _("Save As...") ) , wxEmptyString, wxITEM_NORMAL );
	actionsMenu->Append( saveAsMenu );
	
	wxMenuItem* saveLoopPointsMenu;
	saveLoopPointsMenu = new wxMenuItem( actionsMenu, ID_SAVE_LOOP_POINTS, wxString( _("Save Loop Points") ) , wxEmptyString, wxITEM_NORMAL );
	actionsMenu->Append( saveLoopPointsMenu );
	
	wxMenuItem* m_separator2;
	m_separator2 = actionsMenu->AppendSeparator();
	
	wxMenuItem* checkCddbDatabaseMenu;
	checkCddbDatabaseMenu = new wxMenuItem( actionsMenu, ID_CHECK_CDDB_DATABASE, wxString( _("Check CDDB Database") ) , wxEmptyString, wxITEM_CHECK );
	actionsMenu->Append( checkCddbDatabaseMenu );
	
	main_menubar->Append( actionsMenu, _("Actions") );
	
	languageMenu = new wxMenu();
	main_menubar->Append( languageMenu, _("Language") );
	
	helpMenu = new wxMenu();
	wxMenuItem* aboutMenu;
	aboutMenu = new wxMenuItem( helpMenu, ID_ABOUT, wxString( _("About") ) , wxEmptyString, wxITEM_NORMAL );
	helpMenu->Append( aboutMenu );
	
	main_menubar->Append( helpMenu, _("Help") );
	
	this->SetMenuBar( main_menubar );
	
}

BpMainFrameBase::~BpMainFrameBase()
{
}

BpAboutDlgBase::BpAboutDlgBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
}

BpAboutDlgBase::~BpAboutDlgBase()
{
}
