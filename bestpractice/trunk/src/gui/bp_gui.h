///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Feb 17 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __bp_gui__
#define __bp_gui__

#include <wx/intl.h>

#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/listctrl.h>
#include <wx/slider.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/bmpbuttn.h>
#include <wx/button.h>
#include <wx/statline.h>
#include <wx/panel.h>
#include <wx/checkbox.h>
#include <wx/notebook.h>
#include <wx/gbsizer.h>
#include <wx/spinctrl.h>
#include <wx/menu.h>
#include <wx/frame.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////

namespace bestpractice
{
	///////////////////////////////////////////////////////////////////////////////
	/// Class BpMainFrameBase
	///////////////////////////////////////////////////////////////////////////////
	class BpMainFrameBase : public wxFrame 
	{
		private:
		
		protected:
			enum
			{
				ID_OPEN_FILE = 1000,
				ID_OPEN_DISC,
				ID_SAVE_AS,
				ID_SAVE_LOOP_POINTS,
				ID_CHECK_CDDB_DATABASE,
				ID_ABOUT,
			};
			
			wxPanel* m_panel4;
			wxStaticText* m_staticText1;
			wxStaticText* m_staticText11;
			wxListCtrl* songListCtrl;
			wxNotebook* m_notebook2;
			wxPanel* m_panel2;
			wxStaticText* m_staticText16;
			wxSlider* pitchSlider;
			wxBitmapButton* pitchResetBtn;
			wxStaticText* semitonesNumber;
			wxStaticText* semitonesText;
			wxStaticLine* m_staticline2;
			wxStaticText* m_staticText161;
			wxSlider* finePitchSlider;
			wxBitmapButton* finePitchResetBtn;
			wxStaticText* centsNumber;
			wxStaticText* centsText;
			wxStaticLine* m_staticline3;
			wxStaticText* m_staticText162;
			wxSlider* speedSlider;
			wxBitmapButton* speedResetBtn;
			wxStaticText* m_staticText192;
			wxPanel* m_equalizerpanel;
			wxStaticText* m_staticText221;
			wxStaticText* m_staticText231;
			wxSlider* voiceSuppressionSlider1;
			wxStaticText* m_staticText2411;
			wxStaticLine* m_staticline311;
			wxSlider* m_slider12;
			wxSlider* m_slider13;
			wxSlider* m_slider131;
			wxSlider* m_slider132;
			wxSlider* m_slider133;
			wxStaticText* m_staticText35;
			wxStaticText* m_staticText36;
			wxButton* m_flatbtn;
			wxPanel* m_karaokepanel;
			wxCheckBox* karaokeBox;
			wxStaticText* m_staticText22;
			wxStaticText* m_staticText23;
			wxSlider* voiceSuppressionSlider;
			wxStaticText* m_staticText241;
			wxStaticLine* m_staticline31;
			wxStaticText* m_staticText25;
			wxSlider* bassPassThroughSlider;
			wxStaticText* m_staticText26;
			wxStaticLine* m_staticline4;
			wxStaticText* m_staticText27;
			wxSlider* treblePassThroughSlider;
			wxStaticText* m_staticText28;
			wxStaticText* m_staticText18;
			wxSlider* timeSlider;
			wxStaticText* timeText;
			wxStaticText* m_staticText193;
			wxSlider* volumeSlider;
			wxStaticText* volumeText;
			wxBitmapButton* prevButton;
			wxBitmapButton* playpauseButton;
			wxBitmapButton* nextButton;
			wxCheckBox* LoopOnCheckBox;
			
			wxStaticText* m_staticText3;
			
			
			wxStaticText* m_staticText4;
			
			
			wxStaticText* m_staticText5;
			
			wxStaticText* m_staticText6;
			wxSpinCtrl* minLoopStart;
			wxStaticText* m_staticText7;
			
			wxSpinCtrl* secLoopStart;
			wxStaticText* m_staticText8;
			
			wxSpinCtrl* subsecLoopStart;
			wxButton* loopStartNowButton;
			wxStaticText* m_staticText12;
			wxSpinCtrl* minLoopEnd;
			wxStaticText* m_staticText14;
			
			wxSpinCtrl* secLoopEnd;
			wxStaticText* m_staticText15;
			
			wxSpinCtrl* subsecLoopEnd;
			wxButton* loopEndNowButton;
			
			wxMenuBar* main_menubar;
			wxMenu* actionsMenu;
			wxMenu* languageMenu;
			wxMenu* helpMenu;
			
			// Virtual event handlers, overide them in your derived class
			virtual void pitchResetClick( wxCommandEvent& event ) { event.Skip(); }
			virtual void finePitchResetClick( wxCommandEvent& event ) { event.Skip(); }
			virtual void speedResetClick( wxCommandEvent& event ) { event.Skip(); }
			virtual void FlatBtnClick( wxCommandEvent& event ) { event.Skip(); }
			virtual void prevClick( wxCommandEvent& event ) { event.Skip(); }
			virtual void playClick( wxCommandEvent& event ) { event.Skip(); }
			virtual void nextClick( wxCommandEvent& event ) { event.Skip(); }
			virtual void loopStartNowClick( wxCommandEvent& event ) { event.Skip(); }
			virtual void loopEndNowClick( wxCommandEvent& event ) { event.Skip(); }
			virtual void OpenFile( wxCommandEvent& event ) { event.Skip(); }
			virtual void OpenDisc( wxCommandEvent& event ) { event.Skip(); }
			virtual void SaveAs( wxCommandEvent& event ) { event.Skip(); }
			virtual void SaveLoopPoints( wxCommandEvent& event ) { event.Skip(); }
			virtual void CheckCDDB( wxCommandEvent& event ) { event.Skip(); }
			virtual void AboutMenu( wxCommandEvent& event ) { event.Skip(); }
			
		
		public:
			
			BpMainFrameBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("BestPractice"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 552,480 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
			~BpMainFrameBase();
		
	};
	
	///////////////////////////////////////////////////////////////////////////////
	/// Class BpAboutDlgBase
	///////////////////////////////////////////////////////////////////////////////
	class BpAboutDlgBase : public wxDialog 
	{
		private:
		
		protected:
		
		public:
			
			BpAboutDlgBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("About"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE );
			~BpAboutDlgBase();
		
	};
	
} // namespace bestpractice

#endif //__bp_gui__
