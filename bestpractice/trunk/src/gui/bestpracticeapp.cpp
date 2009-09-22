/***************************************************************
 * Name:      BestPracticeApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Robert Moerland
 * Created:   2009-09-22
 * Copyright: Robert Moerland ()
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "bestpracticeapp.h"
#include "bpmainframe.h"

IMPLEMENT_APP(BestPracticeApp);

using namespace bestpractice;

bool BestPracticeApp::OnInit()
{
    BpMainFrame* frame = new BpMainFrame(0L);
    frame->SetIcon(wxICON(aaaa)); // To Set App Icon
    frame->Show();

    return true;
}
