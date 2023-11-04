/***************************************************************
 * Name:      EcranFactureMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Fadel Sewade (fadelsew@gmail.com)
 * Created:   2023-01-23
 * Copyright: Fadel Sewade ()
 * License:
 **************************************************************/

#include "EcranFactureMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(EcranFactureFrame)
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

//(*IdInit(EcranFactureFrame)
const long EcranFactureFrame::ID_STATICTEXT1 = wxNewId();
const long EcranFactureFrame::ID_STATICTEXT2 = wxNewId();
const long EcranFactureFrame::ID_TEXTCTRL1 = wxNewId();
const long EcranFactureFrame::ID_STATICTEXT3 = wxNewId();
const long EcranFactureFrame::ID_TEXTCTRL2 = wxNewId();
const long EcranFactureFrame::ID_TEXTCTRL4 = wxNewId();
const long EcranFactureFrame::ID_TEXTCTRL5 = wxNewId();
const long EcranFactureFrame::ID_TEXTCTRL6 = wxNewId();
const long EcranFactureFrame::ID_BUTTON1 = wxNewId();
const long EcranFactureFrame::ID_STATICTEXT6 = wxNewId();
const long EcranFactureFrame::ID_STATICTEXT7 = wxNewId();
const long EcranFactureFrame::ID_STATICTEXT4 = wxNewId();
const long EcranFactureFrame::ID_STATICTEXT5 = wxNewId();
const long EcranFactureFrame::ID_STATICBITMAP1 = wxNewId();
const long EcranFactureFrame::ID_PANEL1 = wxNewId();
const long EcranFactureFrame::idMenuQuit = wxNewId();
const long EcranFactureFrame::idMenuAbout = wxNewId();
const long EcranFactureFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(EcranFactureFrame,wxFrame)
    //(*EventTable(EcranFactureFrame)
    //*)
END_EVENT_TABLE()

EcranFactureFrame::EcranFactureFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(EcranFactureFrame)
    wxBoxSizer* BoxSizer1;
    wxMenu* Menu1;
    wxMenu* Menu2;
    wxMenuBar* MenuBar1;
    wxMenuItem* MenuItem1;
    wxMenuItem* MenuItem2;

    Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    SetClientSize(wxSize(680,350));
    BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
    Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxSize(650,300), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    Panel1->SetBackgroundColour(wxColour(173,90,109));
    StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("Facture"), wxPoint(152,24), wxSize(120,32), 0, _T("ID_STATICTEXT1"));
    StaticText1->SetForegroundColour(wxColour(80,172,167));
    wxFont StaticText1Font(25,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText1->SetFont(StaticText1Font);
    StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, _("Date"), wxPoint(360,24), wxSize(72,32), 0, _T("ID_STATICTEXT2"));
    StaticText2->SetForegroundColour(wxColour(105,190,191));
    wxFont StaticText2Font(25,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText2->SetFont(StaticText2Font);
    TextCtrl1 = new wxTextCtrl(Panel1, ID_TEXTCTRL1, wxEmptyString, wxPoint(440,24), wxSize(152,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    TextCtrl1->SetBackgroundColour(wxColour(173,91,108));
    StaticText3 = new wxStaticText(Panel1, ID_STATICTEXT3, _("Nom: "), wxPoint(16,88), wxSize(64,32), 0, _T("ID_STATICTEXT3"));
    wxFont StaticText3Font(19,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText3->SetFont(StaticText3Font);
    TextCtrl2 = new wxTextCtrl(Panel1, ID_TEXTCTRL2, wxEmptyString, wxPoint(224,192), wxSize(256,36), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
    TextCtrl4 = new wxTextCtrl(Panel1, ID_TEXTCTRL4, wxEmptyString, wxPoint(104,88), wxSize(200,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
    TextCtrl5 = new wxTextCtrl(Panel1, ID_TEXTCTRL5, wxEmptyString, wxPoint(104,136), wxSize(200,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
    TextCtrl6 = new wxTextCtrl(Panel1, ID_TEXTCTRL6, wxEmptyString, wxPoint(496,80), wxSize(136,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL6"));
    Button1 = new wxButton(Panel1, ID_BUTTON1, _("Envoyer"), wxPoint(512,248), wxSize(104,32), 0, wxDefaultValidator, _T("ID_BUTTON1"));
    wxFont Button1Font(10,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    Button1->SetFont(Button1Font);
    StaticText6 = new wxStaticText(Panel1, ID_STATICTEXT6, _("Montant à payer"), wxPoint(48,200), wxSize(176,24), 0, _T("ID_STATICTEXT6"));
    wxFont StaticText6Font(19,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText6->SetFont(StaticText6Font);
    StaticText7 = new wxStaticText(Panel1, ID_STATICTEXT7, _("Le gérant"), wxPoint(40,256), wxDefaultSize, 0, _T("ID_STATICTEXT7"));
    wxFont StaticText7Font(14,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText7->SetFont(StaticText7Font);
    StaticText4 = new wxStaticText(Panel1, ID_STATICTEXT4, _("Prénoms: "), wxPoint(8,136), wxSize(88,19), 0, _T("ID_STATICTEXT4"));
    wxFont StaticText4Font(19,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText4->SetFont(StaticText4Font);
    StaticText5 = new wxStaticText(Panel1, ID_STATICTEXT5, _("Salle réservée"), wxPoint(352,80), wxSize(128,19), 0, _T("ID_STATICTEXT5"));
    wxFont StaticText5Font(19,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText5->SetFont(StaticText5Font);
    StaticBitmap1 = new wxStaticBitmap(Panel1, ID_STATICBITMAP1, wxBitmap(wxImage(_T("/home/fadelsew02/Desktop/Programmation/Exercices C++/ProjetC++2/logo/logo.jpg")).Rescale(wxSize(60,60).GetWidth(),wxSize(60,60).GetHeight())), wxPoint(8,8), wxSize(60,60), 0, _T("ID_STATICBITMAP1"));
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
    SetSizer(BoxSizer1);
    Layout();

    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&EcranFactureFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&EcranFactureFrame::OnAbout);
    //*)
}

EcranFactureFrame::~EcranFactureFrame()
{
    //(*Destroy(EcranFactureFrame)
    //*)
}

void EcranFactureFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void EcranFactureFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}
