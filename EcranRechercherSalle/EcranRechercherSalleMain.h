/***************************************************************
 * Name:      EcranRechercherSalleMain.h
 * Purpose:   Defines Application Frame
 * Author:    Fadel Sewade (fadelsew@gmail.com)
 * Created:   2023-01-23
 * Copyright: Fadel Sewade ()
 * License:
 **************************************************************/

#ifndef ECRANRECHERCHERSALLEMAIN_H
#define ECRANRECHERCHERSALLEMAIN_H

//(*Headers(EcranRechercherSalleFrame)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/panel.h>
#include <wx/radiobox.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/statusbr.h>
#include <wx/textctrl.h>
//*)

class EcranRechercherSalleFrame: public wxFrame
{
    public:

        EcranRechercherSalleFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~EcranRechercherSalleFrame();

    private:

        //(*Handlers(EcranRechercherSalleFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        //*)

        //(*Identifiers(EcranRechercherSalleFrame)
        static const long ID_STATICTEXT1;
        static const long ID_BUTTON1;
        static const long ID_STATICTEXT3;
        static const long ID_STATICTEXT4;
        static const long ID_STATICTEXT5;
        static const long ID_STATICTEXT6;
        static const long ID_RADIOBOX1;
        static const long ID_BUTTON2;
        static const long ID_TEXTCTRL2;
        static const long ID_TEXTCTRL3;
        static const long ID_TEXTCTRL4;
        static const long ID_TEXTCTRL5;
        static const long ID_RADIOBOX2;
        static const long ID_RADIOBOX3;
        static const long ID_STATICTEXT2;
        static const long ID_TEXTCTRL1;
        static const long ID_BUTTON3;
        static const long ID_PANEL1;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(EcranRechercherSalleFrame)
        wxButton* Button1;
        wxButton* Button2;
        wxButton* Button3;
        wxPanel* Panel1;
        wxRadioBox* RadioBox1;
        wxRadioBox* RadioBox2;
        wxRadioBox* RadioBox3;
        wxStaticText* StaticText1;
        wxStaticText* StaticText2;
        wxStaticText* StaticText3;
        wxStaticText* StaticText4;
        wxStaticText* StaticText5;
        wxStaticText* StaticText6;
        wxStatusBar* StatusBar1;
        wxTextCtrl* TextCtrl1;
        wxTextCtrl* TextCtrl2;
        wxTextCtrl* TextCtrl3;
        wxTextCtrl* TextCtrl4;
        wxTextCtrl* TextCtrl5;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // ECRANRECHERCHERSALLEMAIN_H
