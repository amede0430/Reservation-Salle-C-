/***************************************************************
 * Name:      EcranClientApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Fadel Sewade (fadelsew@gmail.com)
 * Created:   2023-01-23
 * Copyright: Fadel Sewade ()
 * License:
 **************************************************************/

#include "EcranClientApp.h"

//(*AppHeaders
#include "EcranClientMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(EcranClientApp);

bool EcranClientApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	EcranClientFrame* Frame = new EcranClientFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
