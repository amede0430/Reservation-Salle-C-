/***************************************************************
 * Name:      InfopersoApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Fadel Sewade (fadelsew@gmail.com)
 * Created:   2023-01-24
 * Copyright: Fadel Sewade ()
 * License:
 **************************************************************/

#include "InfopersoApp.h"

//(*AppHeaders
#include "InfopersoMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(InfopersoApp);

bool InfopersoApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	InfopersoFrame* Frame = new InfopersoFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
