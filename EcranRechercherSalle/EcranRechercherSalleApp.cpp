/***************************************************************
 * Name:      EcranRechercherSalleApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Fadel Sewade (fadelsew@gmail.com)
 * Created:   2023-01-23
 * Copyright: Fadel Sewade ()
 * License:
 **************************************************************/

#include "EcranRechercherSalleApp.h"

//(*AppHeaders
#include "EcranRechercherSalleMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(EcranRechercherSalleApp);

bool EcranRechercherSalleApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	EcranRechercherSalleFrame* Frame = new EcranRechercherSalleFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
