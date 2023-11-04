/***************************************************************
 * Name:      DoReservationApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Fadel Sewade (fadelsew@gmail.com)
 * Created:   2023-01-23
 * Copyright: Fadel Sewade ()
 * License:
 **************************************************************/

#include "DoReservationApp.h"

//(*AppHeaders
#include "DoReservationMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(DoReservationApp);

bool DoReservationApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	DoReservationFrame* Frame = new DoReservationFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
