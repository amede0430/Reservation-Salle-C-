/***************************************************************
 * Name:      HistoriqueApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Fadel Sewade (fadelsew@gmail.com)
 * Created:   2023-01-24
 * Copyright: Fadel Sewade ()
 * License:
 **************************************************************/

#include "HistoriqueApp.h"

//(*AppHeaders
#include "HistoriqueMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(HistoriqueApp);

bool HistoriqueApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	HistoriqueFrame* Frame = new HistoriqueFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
