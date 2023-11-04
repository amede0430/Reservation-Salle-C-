/***************************************************************
 * Name:      EcranFactureApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Fadel Sewade (fadelsew@gmail.com)
 * Created:   2023-01-23
 * Copyright: Fadel Sewade ()
 * License:
 **************************************************************/

#include "EcranFactureApp.h"

//(*AppHeaders
#include "EcranFactureMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(EcranFactureApp);

bool EcranFactureApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	EcranFactureFrame* Frame = new EcranFactureFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
