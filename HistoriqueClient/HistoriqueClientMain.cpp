/***************************************************************
 * Name:      HistoriqueClientMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Fadel Sewade (fadelsew@gmail.com)
 * Created:   2023-01-24
 * Copyright: Fadel Sewade ()
 * License:
 **************************************************************/

#include "HistoriqueClientMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(HistoriqueClientFrame)
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

//(*IdInit(HistoriqueClientFrame)
const long HistoriqueClientFrame::ID_STATICTEXT1 = wxNewId();
const long HistoriqueClientFrame::ID_STATICTEXT2 = wxNewId();
const long HistoriqueClientFrame::ID_STATICTEXT3 = wxNewId();
const long HistoriqueClientFrame::ID_STATICTEXT4 = wxNewId();
const long HistoriqueClientFrame::ID_TEXTCTRL1 = wxNewId();
const long HistoriqueClientFrame::ID_TEXTCTRL2 = wxNewId();
const long HistoriqueClientFrame::ID_TEXTCTRL3 = wxNewId();
const long HistoriqueClientFrame::ID_TEXTCTRL4 = wxNewId();
const long HistoriqueClientFrame::ID_TEXTCTRL5 = wxNewId();
const long HistoriqueClientFrame::ID_BUTTON1 = wxNewId();
const long HistoriqueClientFrame::ID_BUTTON2 = wxNewId();
const long HistoriqueClientFrame::ID_BUTTON3 = wxNewId();
const long HistoriqueClientFrame::ID_PANEL1 = wxNewId();
const long HistoriqueClientFrame::idMenuQuit = wxNewId();
const long HistoriqueClientFrame::idMenuAbout = wxNewId();
const long HistoriqueClientFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(HistoriqueClientFrame,wxFrame)
    //(*EventTable(HistoriqueClientFrame)
    //*)
END_EVENT_TABLE()

HistoriqueClientFrame::HistoriqueClientFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(HistoriqueClientFrame)
    wxBoxSizer* BoxSizer1;
    wxMenu* Menu1;
    wxMenu* Menu2;
    wxMenuBar* MenuBar1;
    wxMenuItem* MenuItem1;
    wxMenuItem* MenuItem2;

    Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
    Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxSize(500,400), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    Panel1->SetForegroundColour(wxColour(0,0,0));
    Panel1->SetBackgroundColour(wxColour(255,255,255));
    StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("Historiques des réservations"), wxPoint(80,16), wxSize(368,40), 0, _T("ID_STATICTEXT1"));
    wxFont StaticText1Font(25,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText1->SetFont(StaticText1Font);
    StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, _("Salle"), wxPoint(48,128), wxSize(96,19), 0, _T("ID_STATICTEXT2"));
    wxFont StaticText2Font(18,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText2->SetFont(StaticText2Font);
    StaticText3 = new wxStaticText(Panel1, ID_STATICTEXT3, _("Facturé"), wxPoint(216,128), wxSize(72,19), 0, _T("ID_STATICTEXT3"));
    wxFont StaticText3Font(18,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText3->SetFont(StaticText3Font);
    StaticText4 = new wxStaticText(Panel1, ID_STATICTEXT4, _("Date"), wxPoint(392,128), wxSize(88,19), 0, _T("ID_STATICTEXT4"));
    wxFont StaticText4Font(18,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText4->SetFont(StaticText4Font);
    TextCtrl1 = new wxTextCtrl(Panel1, ID_TEXTCTRL1, wxEmptyString, wxPoint(24,168), wxSize(456,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    TextCtrl1->SetBackgroundColour(wxColour(229,229,229));
    TextCtrl2 = new wxTextCtrl(Panel1, ID_TEXTCTRL2, wxEmptyString, wxPoint(24,216), wxSize(456,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
    TextCtrl2->SetBackgroundColour(wxColour(229,229,229));
    TextCtrl3 = new wxTextCtrl(Panel1, ID_TEXTCTRL3, wxEmptyString, wxPoint(24,264), wxSize(456,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
    TextCtrl3->SetBackgroundColour(wxColour(229,229,229));
    TextCtrl4 = new wxTextCtrl(Panel1, ID_TEXTCTRL4, wxEmptyString, wxPoint(24,312), wxSize(456,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
    TextCtrl4->SetBackgroundColour(wxColour(229,229,229));
    TextCtrl5 = new wxTextCtrl(Panel1, ID_TEXTCTRL5, wxEmptyString, wxPoint(24,360), wxSize(456,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
    TextCtrl5->SetBackgroundColour(wxColour(229,229,229));
    Button1 = new wxButton(Panel1, ID_BUTTON1, _("<< Previous"), wxPoint(24,48), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    Button2 = new wxButton(Panel1, ID_BUTTON2, _("Next >>"), wxPoint(24,88), wxSize(104,28), 0, wxDefaultValidator, _T("ID_BUTTON2"));
    Button3 = new wxButton(Panel1, ID_BUTTON3, _("OK"), wxPoint(408,72), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
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

    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&HistoriqueClientFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&HistoriqueClientFrame::OnAbout);
    //*)
}

HistoriqueClientFrame::~HistoriqueClientFrame()
{
    //(*Destroy(HistoriqueClientFrame)
    //*)
}

void HistoriqueClientFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void HistoriqueClientFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}
