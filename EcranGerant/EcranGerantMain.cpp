/***************************************************************
 * Name:      EcranGerantMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Fadel Sewade (fadelsew@gmail.com)
 * Created:   2023-01-23
 * Copyright: Fadel Sewade ()
 * License:
 **************************************************************/

#include "EcranGerantMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(EcranGerantFrame)
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

//(*IdInit(EcranGerantFrame)
const long EcranGerantFrame::ID_STATICBITMAP1 = wxNewId();
const long EcranGerantFrame::ID_STATICTEXT1 = wxNewId();
const long EcranGerantFrame::ID_BUTTON1 = wxNewId();
const long EcranGerantFrame::ID_BUTTON2 = wxNewId();
const long EcranGerantFrame::ID_BUTTON3 = wxNewId();
const long EcranGerantFrame::ID_BUTTON4 = wxNewId();
const long EcranGerantFrame::ID_BUTTON5 = wxNewId();
const long EcranGerantFrame::ID_BUTTON6 = wxNewId();
const long EcranGerantFrame::ID_BUTTON7 = wxNewId();
const long EcranGerantFrame::ID_BUTTON11 = wxNewId();
const long EcranGerantFrame::ID_BUTTON8 = wxNewId();
const long EcranGerantFrame::ID_BUTTON12 = wxNewId();
const long EcranGerantFrame::ID_PANEL1 = wxNewId();
const long EcranGerantFrame::idMenuQuit = wxNewId();
const long EcranGerantFrame::idMenuAbout = wxNewId();
const long EcranGerantFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(EcranGerantFrame,wxFrame)
    //(*EventTable(EcranGerantFrame)
    //*)
END_EVENT_TABLE()

EcranGerantFrame::EcranGerantFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(EcranGerantFrame)
    wxBoxSizer* BoxSizer1;
    wxMenu* Menu1;
    wxMenu* Menu2;
    wxMenuBar* MenuBar1;
    wxMenuItem* MenuItem1;
    wxMenuItem* MenuItem2;

    Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
    Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxSize(550,600), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    StaticBitmap1 = new wxStaticBitmap(Panel1, ID_STATICBITMAP1, wxBitmap(wxImage(_T("/home/fadelsew02/Desktop/Programmation/Exercices C++/ProjetC++2/logo/gérant-majoritaire-sarl.jpg")).Rescale(wxSize(550,600).GetWidth(),wxSize(550,600).GetHeight())), wxDefaultPosition, wxSize(550,600), 0, _T("ID_STATICBITMAP1"));
    StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("Gérant"), wxPoint(216,40), wxSize(175,70), 0, _T("ID_STATICTEXT1"));
    StaticText1->SetForegroundColour(wxColour(0,0,0));
    wxFont StaticText1Font(30,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText1->SetFont(StaticText1Font);
    Button1 = new wxButton(Panel1, ID_BUTTON1, _("Faire une nouvelle\n\tréservation\n"), wxPoint(24,104), wxSize(200,50), 0, wxDefaultValidator, _T("ID_BUTTON1"));
    wxFont Button1Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    Button1->SetFont(Button1Font);
    Button2 = new wxButton(Panel1, ID_BUTTON2, _("Annuler une réservation \n\t    en cours"), wxPoint(312,104), wxSize(200,50), 0, wxDefaultValidator, _T("ID_BUTTON2"));
    wxFont Button2Font(17,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    Button2->SetFont(Button2Font);
    Button3 = new wxButton(Panel1, ID_BUTTON3, _("Rechercher une salle"), wxPoint(24,192), wxSize(200,50), 0, wxDefaultValidator, _T("ID_BUTTON3"));
    wxFont Button3Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    Button3->SetFont(Button3Font);
    Button4 = new wxButton(Panel1, ID_BUTTON4, _("Voir les salles"), wxPoint(24,280), wxSize(200,50), 0, wxDefaultValidator, _T("ID_BUTTON4"));
    wxFont Button4Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    Button4->SetFont(Button4Font);
    Button5 = new wxButton(Panel1, ID_BUTTON5, _("Historique"), wxPoint(312,192), wxSize(200,50), 0, wxDefaultValidator, _T("ID_BUTTON5"));
    wxFont Button5Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    Button5->SetFont(Button5Font);
    Button6 = new wxButton(Panel1, ID_BUTTON6, _("Informations Personnelles"), wxPoint(312,280), wxSize(200,50), 0, wxDefaultValidator, _T("ID_BUTTON6"));
    wxFont Button6Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    Button6->SetFont(Button6Font);
    Button7 = new wxButton(Panel1, ID_BUTTON7, _("Facturer"), wxPoint(24,368), wxSize(200,50), 0, wxDefaultValidator, _T("ID_BUTTON7"));
    wxFont Button7Font(20,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    Button7->SetFont(Button7Font);
    Button11 = new wxButton(Panel1, ID_BUTTON11, _("Log out"), wxPoint(440,552), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON11"));
    wxFont Button11Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    Button11->SetFont(Button11Font);
    Button8 = new wxButton(Panel1, ID_BUTTON8, _("Retirer Client"), wxPoint(24,456), wxSize(200,50), 0, wxDefaultValidator, _T("ID_BUTTON8"));
    wxFont Button8Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    Button8->SetFont(Button8Font);
    Button12 = new wxButton(Panel1, ID_BUTTON12, _("Mise à jour Salle"), wxPoint(312,368), wxSize(200,50), 0, wxDefaultValidator, _T("ID_BUTTON12"));
    wxFont Button12Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    Button12->SetFont(Button12Font);
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

    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&EcranGerantFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&EcranGerantFrame::OnAbout);
    //*)
}

EcranGerantFrame::~EcranGerantFrame()
{
    //(*Destroy(EcranGerantFrame)
    //*)
}

void EcranGerantFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void EcranGerantFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}
