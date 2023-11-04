/***************************************************************
 * Name:      UpdateSalleMain.h
 * Purpose:   Defines Application Frame
 * Author:    Fadel Sewade (fadelsew@gmail.com)
 * Created:   2023-01-23
 * Copyright: Fadel Sewade ()
 * License:
 **************************************************************/

#ifndef UPDATESALLEMAIN_H
#define UPDATESALLEMAIN_H

//(*Headers(UpdateSalleFrame)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/panel.h>
#include <wx/radiobox.h>
#include <wx/sizer.h>
#include <wx/statbox.h>
#include <wx/stattext.h>
#include <wx/statusbr.h>
#include <wx/textctrl.h>
//*)

class UpdateSalleFrame: public wxFrame
{
    public:

        UpdateSalleFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~UpdateSalleFrame();

    private:

        //(*Handlers(UpdateSalleFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        //*)

        //(*Identifiers(UpdateSalleFrame)
        static const long ID_STATICBOX1;
        static const long ID_STATICBOX2;
        static const long ID_BUTTON1;
        static const long ID_BUTTON2;
        static const long ID_STATICBOX3;
        static const long ID_STATICTEXT1;
        static const long ID_TEXTCTRL1;
        static const long ID_BUTTON3;
        static const long ID_STATICTEXT2;
        static const long ID_STATICTEXT3;
        static const long ID_STATICTEXT4;
        static const long ID_TEXTCTRL2;
        static const long ID_TEXTCTRL3;
        static const long ID_TEXTCTRL4;
        static const long ID_RADIOBOX1;
        static const long ID_RADIOBOX2;
        static const long ID_STATICTEXT5;
        static const long ID_TEXTCTRL5;
        static const long ID_BUTTON4;
        static const long ID_BUTTON5;
        static const long ID_PANEL2;
        static const long ID_PANEL1;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(UpdateSalleFrame)
        wxButton* Button1;
        wxButton* Button2;
        wxButton* Button3;
        wxButton* Button4;
        wxButton* Button5;
        wxPanel* Panel1;
        wxPanel* Panel2;
        wxRadioBox* RadioBox1;
        wxRadioBox* RadioBox2;
        wxStaticBox* StaticBox1;
        wxStaticBox* StaticBox2;
        wxStaticBox* StaticBox3;
        wxStaticText* StaticText1;
        wxStaticText* StaticText2;
        wxStaticText* StaticText3;
        wxStaticText* StaticText4;
        wxStaticText* StaticText5;
        wxStatusBar* StatusBar1;
        wxTextCtrl* TextCtrl1;
        wxTextCtrl* TextCtrl2;
        wxTextCtrl* TextCtrl3;
        wxTextCtrl* TextCtrl4;
        wxTextCtrl* TextCtrl5;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // UPDATESALLEMAIN_H
