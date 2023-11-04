/***************************************************************
 * Name:      HistoriqueMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Fadel Sewade (fadelsew@gmail.com)
 * Created:   2023-01-24
 * Copyright: Fadel Sewade ()
 * License:
 **************************************************************/

#include "HistoriqueMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(HistoriqueFrame)
#include <wx/font.h>
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

//(*IdInit(HistoriqueFrame)
const long HistoriqueFrame::ID_STATICTEXT2 = wxNewId();
const long HistoriqueFrame::ID_BUTTON1 = wxNewId();
const long HistoriqueFrame::ID_BUTTON2 = wxNewId();
const long HistoriqueFrame::ID_STATICTEXT1 = wxNewId();
const long HistoriqueFrame::ID_STATICTEXT3 = wxNewId();
const long HistoriqueFrame::ID_STATICTEXT4 = wxNewId();
const long HistoriqueFrame::ID_STATICTEXT5 = wxNewId();
const long HistoriqueFrame::ID_STATICTEXT6 = wxNewId();
const long HistoriqueFrame::ID_STATICTEXT7 = wxNewId();
const long HistoriqueFrame::ID_TEXTCTRL1 = wxNewId();
const long HistoriqueFrame::ID_TEXTCTRL2 = wxNewId();
const long HistoriqueFrame::ID_TEXTCTRL3 = wxNewId();
const long HistoriqueFrame::ID_TEXTCTRL4 = wxNewId();
const long HistoriqueFrame::ID_TEXTCTRL5 = wxNewId();
const long HistoriqueFrame::ID_BUTTON3 = wxNewId();
const long HistoriqueFrame::ID_PANEL1 = wxNewId();
const long HistoriqueFrame::idMenuQuit = wxNewId();
const long HistoriqueFrame::idMenuAbout = wxNewId();
const long HistoriqueFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(HistoriqueFrame,wxFrame)
    //(*EventTable(HistoriqueFrame)
    //*)
END_EVENT_TABLE()

HistoriqueFrame::HistoriqueFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(HistoriqueFrame)
    wxBoxSizer* BoxSizer1;
    wxMenu* Menu1;
    wxMenu* Menu2;
    wxMenuBar* MenuBar1;
    wxMenuItem* MenuItem1;
    wxMenuItem* MenuItem2;

    Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
    Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxSize(1000,450), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    Panel1->SetBackgroundColour(wxColour(255,255,255));
    StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, _("Historique des réservations"), wxPoint(48,56), wxSize(344,40), 0, _T("ID_STATICTEXT2"));
    StaticText2->SetForegroundColour(wxColour(0,0,0));
    wxFont StaticText2Font(25,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText2->SetFont(StaticText2Font);
    Button1 = new wxButton(Panel1, ID_BUTTON1, _("<< Previous"), wxPoint(744,56), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    Button2 = new wxButton(Panel1, ID_BUTTON2, _("Next >>"), wxPoint(888,56), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
    StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("Nom"), wxPoint(24,120), wxSize(56,19), 0, _T("ID_STATICTEXT1"));
    StaticText1->SetForegroundColour(wxColour(0,0,0));
    wxFont StaticText1Font(17,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText1->SetFont(StaticText1Font);
    StaticText3 = new wxStaticText(Panel1, ID_STATICTEXT3, _("Prenom"), wxPoint(176,120), wxSize(72,19), 0, _T("ID_STATICTEXT3"));
    StaticText3->SetForegroundColour(wxColour(0,0,0));
    wxFont StaticText3Font(17,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText3->SetFont(StaticText3Font);
    StaticText4 = new wxStaticText(Panel1, ID_STATICTEXT4, _("Username"), wxPoint(352,120), wxSize(96,19), 0, _T("ID_STATICTEXT4"));
    StaticText4->SetForegroundColour(wxColour(0,0,0));
    wxFont StaticText4Font(17,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText4->SetFont(StaticText4Font);
    StaticText5 = new wxStaticText(Panel1, ID_STATICTEXT5, _("Salle"), wxPoint(552,120), wxSize(56,19), 0, _T("ID_STATICTEXT5"));
    StaticText5->SetForegroundColour(wxColour(0,0,0));
    wxFont StaticText5Font(17,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText5->SetFont(StaticText5Font);
    StaticText6 = new wxStaticText(Panel1, ID_STATICTEXT6, _("Facturé"), wxPoint(696,120), wxSize(72,19), 0, _T("ID_STATICTEXT6"));
    StaticText6->SetForegroundColour(wxColour(0,0,0));
    wxFont StaticText6Font(17,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText6->SetFont(StaticText6Font);
    StaticText7 = new wxStaticText(Panel1, ID_STATICTEXT7, _("Date"), wxPoint(880,120), wxSize(56,19), 0, _T("ID_STATICTEXT7"));
    StaticText7->SetForegroundColour(wxColour(0,0,0));
    wxFont StaticText7Font(17,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText7->SetFont(StaticText7Font);
    TextCtrl1 = new wxTextCtrl(Panel1, ID_TEXTCTRL1, wxEmptyString, wxPoint(16,176), wxSize(968,32), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    TextCtrl2 = new wxTextCtrl(Panel1, ID_TEXTCTRL2, wxEmptyString, wxPoint(16,232), wxSize(968,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
    TextCtrl3 = new wxTextCtrl(Panel1, ID_TEXTCTRL3, wxEmptyString, wxPoint(16,280), wxSize(968,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
    TextCtrl4 = new wxTextCtrl(Panel1, ID_TEXTCTRL4, wxEmptyString, wxPoint(16,328), wxSize(968,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
    TextCtrl5 = new wxTextCtrl(Panel1, ID_TEXTCTRL5, wxEmptyString, wxPoint(16,376), wxSize(968,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
    Button3 = new wxButton(Panel1, ID_BUTTON3, _("<<  Return"), wxPoint(888,416), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
    wxFont Button3Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    Button3->SetFont(Button3Font);
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

    Connect(ID_TEXTCTRL5,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&HistoriqueFrame::OnTextCtrl5Text);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&HistoriqueFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&HistoriqueFrame::OnAbout);
    //*)
}

HistoriqueFrame::~HistoriqueFrame()
{
    //(*Destroy(HistoriqueFrame)
    //*)
}

void HistoriqueFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void HistoriqueFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void HistoriqueFrame::OnTextCtrl5Text(wxCommandEvent& event)
{
}
