/***************************************************************
 * Name:      UpdateSalleApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Fadel Sewade (fadelsew@gmail.com)
 * Created:   2023-01-23
 * Copyright: Fadel Sewade ()
 * License:
 **************************************************************/

#include "UpdateSalleApp.h"

//(*AppHeaders
#include "UpdateSalleMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(UpdateSalleApp);

bool UpdateSalleApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	UpdateSalleFrame* Frame = new UpdateSalleFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
