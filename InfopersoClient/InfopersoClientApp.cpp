/***************************************************************
 * Name:      InfopersoClientApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Fadel Sewade (fadelsew@gmail.com)
 * Created:   2023-01-24
 * Copyright: Fadel Sewade ()
 * License:
 **************************************************************/

#include "InfopersoClientApp.h"

//(*AppHeaders
#include "InfopersoClientMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(InfopersoClientApp);

bool InfopersoClientApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	InfopersoClientFrame* Frame = new InfopersoClientFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
