/***************************************************************
 * Name:      EcranAccueilApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Fadel Sewade (fadelsew@gmail.com)
 * Created:   2023-01-21
 * Copyright: Fadel Sewade ()
 * License:
 **************************************************************/

#include "EcranAccueilApp.h"

//(*AppHeaders
#include "EcranAccueilMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(EcranAccueilApp);

bool EcranAccueilApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	EcranAccueilFrame* Frame = new EcranAccueilFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
