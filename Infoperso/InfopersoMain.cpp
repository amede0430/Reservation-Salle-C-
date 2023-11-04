/***************************************************************
 * Name:      InfopersoMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Fadel Sewade (fadelsew@gmail.com)
 * Created:   2023-01-24
 * Copyright: Fadel Sewade ()
 * License:
 **************************************************************/

#include "InfopersoMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(InfopersoFrame)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/settings.h>
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

//(*IdInit(InfopersoFrame)
const long InfopersoFrame::ID_STATICBOX1 = wxNewId();
const long InfopersoFrame::ID_STATICBOX2 = wxNewId();
const long InfopersoFrame::ID_STATICBOX3 = wxNewId();
const long InfopersoFrame::ID_STATICTEXT1 = wxNewId();
const long InfopersoFrame::ID_STATICTEXT2 = wxNewId();
const long InfopersoFrame::ID_STATICTEXT3 = wxNewId();
const long InfopersoFrame::ID_STATICTEXT4 = wxNewId();
const long InfopersoFrame::ID_STATICTEXT5 = wxNewId();
const long InfopersoFrame::ID_STATICTEXT6 = wxNewId();
const long InfopersoFrame::ID_TEXTCTRL1 = wxNewId();
const long InfopersoFrame::ID_BUTTON1 = wxNewId();
const long InfopersoFrame::ID_TEXTCTRL2 = wxNewId();
const long InfopersoFrame::ID_TEXTCTRL3 = wxNewId();
const long InfopersoFrame::ID_TEXTCTRL4 = wxNewId();
const long InfopersoFrame::ID_TEXTCTRL5 = wxNewId();
const long InfopersoFrame::ID_TEXTCTRL6 = wxNewId();
const long InfopersoFrame::ID_STATICTEXT7 = wxNewId();
const long InfopersoFrame::ID_STATICTEXT8 = wxNewId();
const long InfopersoFrame::ID_STATICTEXT9 = wxNewId();
const long InfopersoFrame::ID_STATICTEXT10 = wxNewId();
const long InfopersoFrame::ID_TEXTCTRL7 = wxNewId();
const long InfopersoFrame::ID_TEXTCTRL8 = wxNewId();
const long InfopersoFrame::ID_TEXTCTRL9 = wxNewId();
const long InfopersoFrame::ID_TEXTCTRL10 = wxNewId();
const long InfopersoFrame::ID_STATICTEXT11 = wxNewId();
const long InfopersoFrame::ID_TEXTCTRL11 = wxNewId();
const long InfopersoFrame::ID_BUTTON2 = wxNewId();
const long InfopersoFrame::ID_BUTTON4 = wxNewId();
const long InfopersoFrame::ID_BUTTON5 = wxNewId();
const long InfopersoFrame::ID_STATICTEXT12 = wxNewId();
const long InfopersoFrame::ID_TEXTCTRL12 = wxNewId();
const long InfopersoFrame::ID_STATICTEXT13 = wxNewId();
const long InfopersoFrame::ID_TEXTCTRL13 = wxNewId();
const long InfopersoFrame::ID_BUTTON3 = wxNewId();
const long InfopersoFrame::ID_PANEL1 = wxNewId();
const long InfopersoFrame::idMenuQuit = wxNewId();
const long InfopersoFrame::idMenuAbout = wxNewId();
const long InfopersoFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(InfopersoFrame,wxFrame)
    //(*EventTable(InfopersoFrame)
    //*)
END_EVENT_TABLE()

InfopersoFrame::InfopersoFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(InfopersoFrame)
    wxBoxSizer* BoxSizer1;
    wxMenu* Menu1;
    wxMenu* Menu2;
    wxMenuBar* MenuBar1;
    wxMenuItem* MenuItem1;
    wxMenuItem* MenuItem2;

    Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
    Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxSize(500,727), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    Panel1->SetForegroundColour(wxColour(0,0,0));
    Panel1->SetBackgroundColour(wxColour(255,255,255));
    StaticBox1 = new wxStaticBox(Panel1, ID_STATICBOX1, _("Informations Personnelles"), wxPoint(8,8), wxSize(480,712), 0, _T("ID_STATICBOX1"));
    StaticBox1->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    wxFont StaticBox1Font(25,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticBox1->SetFont(StaticBox1Font);
    StaticBox2 = new wxStaticBox(Panel1, ID_STATICBOX2, _("Gérant    "), wxPoint(16,72), wxSize(460,284), 0, _T("ID_STATICBOX2"));
    wxFont StaticBox2Font(20,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticBox2->SetFont(StaticBox2Font);
    StaticBox3 = new wxStaticBox(Panel1, ID_STATICBOX3, _("Client    "), wxPoint(16,392), wxSize(460,300), 0, _T("ID_STATICBOX3"));
    wxFont StaticBox3Font(20,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticBox3->SetFont(StaticBox3Font);
    StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("Nom"), wxPoint(56,128), wxSize(40,19), 0, _T("ID_STATICTEXT1"));
    wxFont StaticText1Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText1->SetFont(StaticText1Font);
    StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, _("Prénom"), wxPoint(40,176), wxSize(64,19), 0, _T("ID_STATICTEXT2"));
    wxFont StaticText2Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText2->SetFont(StaticText2Font);
    StaticText3 = new wxStaticText(Panel1, ID_STATICTEXT3, _("Username"), wxPoint(32,224), wxSize(80,19), 0, _T("ID_STATICTEXT3"));
    wxFont StaticText3Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText3->SetFont(StaticText3Font);
    StaticText4 = new wxStaticText(Panel1, ID_STATICTEXT4, _("Password"), wxPoint(32,272), wxSize(80,19), 0, _T("ID_STATICTEXT4"));
    wxFont StaticText4Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText4->SetFont(StaticText4Font);
    StaticText5 = new wxStaticText(Panel1, ID_STATICTEXT5, _("Adresse"), wxPoint(280,176), wxSize(63,19), 0, _T("ID_STATICTEXT5"));
    wxFont StaticText5Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText5->SetFont(StaticText5Font);
    StaticText6 = new wxStaticText(Panel1, ID_STATICTEXT6, _("Birthday"), wxPoint(40,320), wxSize(72,19), 0, _T("ID_STATICTEXT6"));
    wxFont StaticText6Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText6->SetFont(StaticText6Font);
    TextCtrl1 = new wxTextCtrl(Panel1, ID_TEXTCTRL1, _("Text"), wxPoint(120,312), wxSize(128,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    TextCtrl1->SetBackgroundColour(wxColour(229,229,229));
    Button1 = new wxButton(Panel1, ID_BUTTON1, _("Save"), wxPoint(384,312), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    TextCtrl2 = new wxTextCtrl(Panel1, ID_TEXTCTRL2, _("Text"), wxPoint(344,168), wxSize(120,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
    TextCtrl2->SetBackgroundColour(wxColour(229,229,229));
    TextCtrl3 = new wxTextCtrl(Panel1, ID_TEXTCTRL3, _("Text"), wxPoint(120,264), wxSize(128,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
    TextCtrl3->SetBackgroundColour(wxColour(229,229,229));
    TextCtrl4 = new wxTextCtrl(Panel1, ID_TEXTCTRL4, _("Text"), wxPoint(120,216), wxSize(128,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
    TextCtrl4->SetBackgroundColour(wxColour(229,229,229));
    TextCtrl5 = new wxTextCtrl(Panel1, ID_TEXTCTRL5, wxEmptyString, wxPoint(120,168), wxSize(128,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
    TextCtrl5->SetBackgroundColour(wxColour(229,229,229));
    TextCtrl6 = new wxTextCtrl(Panel1, ID_TEXTCTRL6, wxEmptyString, wxPoint(120,120), wxSize(128,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL6"));
    TextCtrl6->SetBackgroundColour(wxColour(229,229,229));
    StaticText7 = new wxStaticText(Panel1, ID_STATICTEXT7, _("Nom"), wxPoint(48,456), wxSize(48,19), 0, _T("ID_STATICTEXT7"));
    wxFont StaticText7Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText7->SetFont(StaticText7Font);
    StaticText8 = new wxStaticText(Panel1, ID_STATICTEXT8, _("Prénom"), wxPoint(40,512), wxSize(64,19), 0, _T("ID_STATICTEXT8"));
    wxFont StaticText8Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText8->SetFont(StaticText8Font);
    StaticText9 = new wxStaticText(Panel1, ID_STATICTEXT9, _("Address"), wxPoint(32,568), wxSize(72,19), 0, _T("ID_STATICTEXT9"));
    wxFont StaticText9Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText9->SetFont(StaticText9Font);
    StaticText10 = new wxStaticText(Panel1, ID_STATICTEXT10, _("Birthday"), wxPoint(32,616), wxSize(80,19), 0, _T("ID_STATICTEXT10"));
    wxFont StaticText10Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText10->SetFont(StaticText10Font);
    TextCtrl7 = new wxTextCtrl(Panel1, ID_TEXTCTRL7, _("Text"), wxPoint(112,448), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL7"));
    TextCtrl7->SetBackgroundColour(wxColour(229,229,229));
    TextCtrl8 = new wxTextCtrl(Panel1, ID_TEXTCTRL8, _("Text"), wxPoint(112,504), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL8"));
    TextCtrl8->SetBackgroundColour(wxColour(229,229,229));
    TextCtrl9 = new wxTextCtrl(Panel1, ID_TEXTCTRL9, _("Text"), wxPoint(112,560), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL9"));
    TextCtrl9->SetBackgroundColour(wxColour(229,229,229));
    TextCtrl10 = new wxTextCtrl(Panel1, ID_TEXTCTRL10, _("Text"), wxPoint(336,560), wxSize(128,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL10"));
    TextCtrl10->SetBackgroundColour(wxColour(229,229,229));
    StaticText11 = new wxStaticText(Panel1, ID_STATICTEXT11, _("Username"), wxPoint(240,472), wxSize(88,19), 0, _T("ID_STATICTEXT11"));
    wxFont StaticText11Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText11->SetFont(StaticText11Font);
    TextCtrl11 = new wxTextCtrl(Panel1, ID_TEXTCTRL11, _("Text"), wxPoint(336,464), wxSize(128,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL11"));
    TextCtrl11->SetBackgroundColour(wxColour(229,229,229));
    Button2 = new wxButton(Panel1, ID_BUTTON2, _("OK"), wxPoint(376,648), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
    Button4 = new wxButton(Panel1, ID_BUTTON4, _("Retirer"), wxPoint(280,648), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON4"));
    Button5 = new wxButton(Panel1, ID_BUTTON5, _("Close"), wxPoint(288,312), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON5"));
    StaticText12 = new wxStaticText(Panel1, ID_STATICTEXT12, _("Cel"), wxPoint(312,224), wxDefaultSize, 0, _T("ID_STATICTEXT12"));
    wxFont StaticText12Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText12->SetFont(StaticText12Font);
    TextCtrl12 = new wxTextCtrl(Panel1, ID_TEXTCTRL12, _("Text"), wxPoint(352,216), wxSize(105,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL12"));
    TextCtrl12->SetBackgroundColour(wxColour(229,229,229));
    StaticText13 = new wxStaticText(Panel1, ID_STATICTEXT13, _("Cel"), wxPoint(280,568), wxSize(40,19), 0, _T("ID_STATICTEXT13"));
    wxFont StaticText13Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText13->SetFont(StaticText13Font);
    TextCtrl13 = new wxTextCtrl(Panel1, ID_TEXTCTRL13, _("Text"), wxPoint(112,608), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL13"));
    TextCtrl13->SetBackgroundColour(wxColour(229,229,229));
    Button3 = new wxButton(Panel1, ID_BUTTON3, _("Valider"), wxPoint(384,504), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
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

    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&InfopersoFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&InfopersoFrame::OnAbout);
    //*)
}

InfopersoFrame::~InfopersoFrame()
{
    //(*Destroy(InfopersoFrame)
    //*)
}

void InfopersoFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void InfopersoFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}
