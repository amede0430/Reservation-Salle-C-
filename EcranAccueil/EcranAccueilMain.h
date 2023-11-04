/***************************************************************
 * Name:      EcranAccueilMain.h
 * Purpose:   Defines Application Frame
 * Author:    Fadel Sewade (fadelsew@gmail.com)
 * Created:   2023-01-21
 * Copyright: Fadel Sewade ()
 * License:
 **************************************************************/

#ifndef ECRANACCUEILMAIN_H
#define ECRANACCUEILMAIN_H

//(*Headers(EcranAccueilFrame)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/panel.h>
#include <wx/sizer.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
#include <wx/statusbr.h>
//*)

class EcranAccueilFrame: public wxFrame
{
    public:

        EcranAccueilFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~EcranAccueilFrame();

    private:

        //(*Handlers(EcranAccueilFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        //*)

        //(*Identifiers(EcranAccueilFrame)
        static const long ID_STATICTEXT1;
        static const long ID_STATICBITMAP1;
        static const long ID_BUTTON1;
        static const long ID_STATICTEXT2;
        static const long ID_PANEL2;
        static const long ID_PANEL1;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(EcranAccueilFrame)
        wxButton* Button1;
        wxPanel* Panel1;
        wxPanel* Panel2;
        wxStaticBitmap* StaticBitmap1;
        wxStaticText* StaticText1;
        wxStaticText* StaticText2;
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // ECRANACCUEILMAIN_H
