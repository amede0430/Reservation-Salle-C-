/***************************************************************
 * Name:      EcranClientMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Fadel Sewade (fadelsew@gmail.com)
 * Created:   2023-01-23
 * Copyright: Fadel Sewade ()
 * License:
 **************************************************************/

#include "EcranClientMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(EcranClientFrame)
#include <wx/bitmap.h>
#include <wx/font.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(EcranClientFrame)
const long EcranClientFrame::ID_STATICBITMAP1 = wxNewId();
const long EcranClientFrame::ID_STATICTEXT1 = wxNewId();
const long EcranClientFrame::ID_BUTTON2 = wxNewId();
const long EcranClientFrame::ID_BUTTON3 = wxNewId();
const long EcranClientFrame::ID_BUTTON4 = wxNewId();
const long EcranClientFrame::ID_BUTTON5 = wxNewId();
const long EcranClientFrame::ID_BUTTON6 = wxNewId();
const long EcranClientFrame::ID_BUTTON7 = wxNewId();
const long EcranClientFrame::ID_BUTTON1 = wxNewId();
const long EcranClientFrame::ID_PANEL1 = wxNewId();
const long EcranClientFrame::idMenuQuit = wxNewId();
const long EcranClientFrame::idMenuAbout = wxNewId();
const long EcranClientFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(EcranClientFrame,wxFrame)
    //(*EventTable(EcranClientFrame)
    //*)
END_EVENT_TABLE()

EcranClientFrame::EcranClientFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(EcranClientFrame)
    wxBoxSizer* BoxSizer1;
    wxMenu* Menu1;
    wxMenu* Menu2;
    wxMenuBar* MenuBar1;
    wxMenuItem* MenuItem1;
    wxMenuItem* MenuItem2;

    Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
    Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxSize(600,550), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    StaticBitmap1 = new wxStaticBitmap(Panel1, ID_STATICBITMAP1, wxBitmap(wxImage(_T("/home/fadelsew02/Desktop/Programmation/Exercices C++/ProjetC++2/logo/creer-une-entreprise-de-service-aux-entreprises.jpg")).Rescale(wxSize(600,600).GetWidth(),wxSize(600,600).GetHeight())), wxPoint(0,0), wxSize(600,600), 0, _T("ID_STATICBITMAP1"));
    StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("Options Disponibles"), wxPoint(32,32), wxSize(304,88), 0, _T("ID_STATICTEXT1"));
    StaticText1->SetForegroundColour(wxColour(0,0,0));
    wxFont StaticText1Font(30,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText1->SetFont(StaticText1Font);
    Button2 = new wxButton(Panel1, ID_BUTTON2, _("Annuler une réservation \n\t     en cours"), wxPoint(320,144), wxSize(241,60), 0, wxDefaultValidator, _T("ID_BUTTON2"));
    wxFont Button2Font(20,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    Button2->SetFont(Button2Font);
    Button3 = new wxButton(Panel1, ID_BUTTON3, _("Informations Personnelles"), wxPoint(40,256), wxSize(225,60), 0, wxDefaultValidator, _T("ID_BUTTON3"));
    wxFont Button3Font(17,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    Button3->SetFont(Button3Font);
    Button4 = new wxButton(Panel1, ID_BUTTON4, _("Voir les salles"), wxPoint(336,256), wxSize(225,60), 0, wxDefaultValidator, _T("ID_BUTTON4"));
    wxFont Button4Font(20,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    Button4->SetFont(Button4Font);
    Button5 = new wxButton(Panel1, ID_BUTTON5, _("Log out"), wxPoint(480,472), wxSize(75,30), 0, wxDefaultValidator, _T("ID_BUTTON5"));
    wxFont Button5Font(12,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    Button5->SetFont(Button5Font);
    Button6 = new wxButton(Panel1, ID_BUTTON6, _("Rechercher une salle"), wxPoint(40,360), wxSize(225,60), 0, wxDefaultValidator, _T("ID_BUTTON6"));
    wxFont Button6Font(20,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    Button6->SetFont(Button6Font);
    Button7 = new wxButton(Panel1, ID_BUTTON7, _("Faire une nouvelle \n\tréservation"), wxPoint(48,144), wxSize(224,64), 0, wxDefaultValidator, _T("ID_BUTTON7"));
    wxFont Button7Font(20,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    Button7->SetFont(Button7Font);
    Button1 = new wxButton(Panel1, ID_BUTTON1, _("Historique"), wxPoint(344,360), wxSize(220,60), 0, wxDefaultValidator, _T("ID_BUTTON1"));
    wxFont Button1Font(20,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    Button1->SetFont(Button1Font);
    BoxSizer1->Add(Panel1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    SetSizer(BoxSizer1);
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);
    BoxSizer1->Fit(this);
    BoxSizer1->SetSizeHints(this);

    Connect(ID_BUTTON7,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EcranClientFrame::OnButton7Click);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&EcranClientFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&EcranClientFrame::OnAbout);
    //*)
}

EcranClientFrame::~EcranClientFrame()
{
    //(*Destroy(EcranClientFrame)
    //*)
}

void EcranClientFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void EcranClientFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void EcranClientFrame::OnSearchCtrl1Text(wxCommandEvent& event)
{
}

void EcranClientFrame::OnButton7Click(wxCommandEvent& event)
{
}
