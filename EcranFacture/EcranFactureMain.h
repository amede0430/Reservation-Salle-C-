/***************************************************************
 * Name:      EcranFactureMain.h
 * Purpose:   Defines Application Frame
 * Author:    Fadel Sewade (fadelsew@gmail.com)
 * Created:   2023-01-23
 * Copyright: Fadel Sewade ()
 * License:
 **************************************************************/

#ifndef ECRANFACTUREMAIN_H
#define ECRANFACTUREMAIN_H

//(*Headers(EcranFactureFrame)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/panel.h>
#include <wx/sizer.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
#include <wx/statusbr.h>
#include <wx/textctrl.h>
//*)

class EcranFactureFrame: public wxFrame
{
    public:

        EcranFactureFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~EcranFactureFrame();

    private:

        //(*Handlers(EcranFactureFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        //*)

        //(*Identifiers(EcranFactureFrame)
        static const long ID_STATICTEXT1;
        static const long ID_STATICTEXT2;
        static const long ID_TEXTCTRL1;
        static const long ID_STATICTEXT3;
        static const long ID_TEXTCTRL2;
        static const long ID_TEXTCTRL4;
        static const long ID_TEXTCTRL5;
        static const long ID_TEXTCTRL6;
        static const long ID_BUTTON1;
        static const long ID_STATICTEXT6;
        static const long ID_STATICTEXT7;
        static const long ID_STATICTEXT4;
        static const long ID_STATICTEXT5;
        static const long ID_STATICBITMAP1;
        static const long ID_PANEL1;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(EcranFactureFrame)
        wxButton* Button1;
        wxPanel* Panel1;
        wxStaticBitmap* StaticBitmap1;
        wxStaticText* StaticText1;
        wxStaticText* StaticText2;
        wxStaticText* StaticText3;
        wxStaticText* StaticText4;
        wxStaticText* StaticText5;
        wxStaticText* StaticText6;
        wxStaticText* StaticText7;
        wxStatusBar* StatusBar1;
        wxTextCtrl* TextCtrl1;
        wxTextCtrl* TextCtrl2;
        wxTextCtrl* TextCtrl4;
        wxTextCtrl* TextCtrl5;
        wxTextCtrl* TextCtrl6;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // ECRANFACTUREMAIN_H
