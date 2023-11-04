/***************************************************************
 * Name:      EcranGerantApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Fadel Sewade (fadelsew@gmail.com)
 * Created:   2023-01-23
 * Copyright: Fadel Sewade ()
 * License:
 **************************************************************/

#include "EcranGerantApp.h"

//(*AppHeaders
#include "EcranGerantMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(EcranGerantApp);

bool EcranGerantApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	EcranGerantFrame* Frame = new EcranGerantFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
