/***************************************************************
 * Name:      EcranGerantMain.h
 * Purpose:   Defines Application Frame
 * Author:    Fadel Sewade (fadelsew@gmail.com)
 * Created:   2023-01-23
 * Copyright: Fadel Sewade ()
 * License:
 **************************************************************/

#ifndef ECRANGERANTMAIN_H
#define ECRANGERANTMAIN_H

//(*Headers(EcranGerantFrame)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/panel.h>
#include <wx/sizer.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
#include <wx/statusbr.h>
//*)

class EcranGerantFrame: public wxFrame
{
    public:

        EcranGerantFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~EcranGerantFrame();

    private:

        //(*Handlers(EcranGerantFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        //*)

        //(*Identifiers(EcranGerantFrame)
        static const long ID_STATICBITMAP1;
        static const long ID_STATICTEXT1;
        static const long ID_BUTTON1;
        static const long ID_BUTTON2;
        static const long ID_BUTTON3;
        static const long ID_BUTTON4;
        static const long ID_BUTTON5;
        static const long ID_BUTTON6;
        static const long ID_BUTTON7;
        static const long ID_BUTTON11;
        static const long ID_BUTTON8;
        static const long ID_BUTTON12;
        static const long ID_PANEL1;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(EcranGerantFrame)
        wxButton* Button11;
        wxButton* Button12;
        wxButton* Button1;
        wxButton* Button2;
        wxButton* Button3;
        wxButton* Button4;
        wxButton* Button5;
        wxButton* Button6;
        wxButton* Button7;
        wxButton* Button8;
        wxPanel* Panel1;
        wxStaticBitmap* StaticBitmap1;
        wxStaticText* StaticText1;
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // ECRANGERANTMAIN_H
