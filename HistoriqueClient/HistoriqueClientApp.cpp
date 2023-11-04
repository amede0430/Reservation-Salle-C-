/***************************************************************
 * Name:      HistoriqueClientApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Fadel Sewade (fadelsew@gmail.com)
 * Created:   2023-01-24
 * Copyright: Fadel Sewade ()
 * License:
 **************************************************************/

#include "HistoriqueClientApp.h"

//(*AppHeaders
#include "HistoriqueClientMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(HistoriqueClientApp);

bool HistoriqueClientApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	HistoriqueClientFrame* Frame = new HistoriqueClientFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
