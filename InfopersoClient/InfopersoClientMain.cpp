/***************************************************************
 * Name:      InfopersoClientMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Fadel Sewade (fadelsew@gmail.com)
 * Created:   2023-01-24
 * Copyright: Fadel Sewade ()
 * License:
 **************************************************************/

#include "InfopersoClientMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(InfopersoClientFrame)
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

//(*IdInit(InfopersoClientFrame)
const long InfopersoClientFrame::ID_STATICBOX1 = wxNewId();
const long InfopersoClientFrame::ID_STATICTEXT1 = wxNewId();
const long InfopersoClientFrame::ID_STATICTEXT2 = wxNewId();
const long InfopersoClientFrame::ID_STATICTEXT3 = wxNewId();
const long InfopersoClientFrame::ID_STATICTEXT4 = wxNewId();
const long InfopersoClientFrame::ID_STATICTEXT5 = wxNewId();
const long InfopersoClientFrame::ID_STATICTEXT6 = wxNewId();
const long InfopersoClientFrame::ID_BUTTON1 = wxNewId();
const long InfopersoClientFrame::ID_BUTTON2 = wxNewId();
const long InfopersoClientFrame::ID_TEXTCTRL1 = wxNewId();
const long InfopersoClientFrame::ID_TEXTCTRL2 = wxNewId();
const long InfopersoClientFrame::ID_TEXTCTRL3 = wxNewId();
const long InfopersoClientFrame::ID_TEXTCTRL4 = wxNewId();
const long InfopersoClientFrame::ID_TEXTCTRL5 = wxNewId();
const long InfopersoClientFrame::ID_TEXTCTRL6 = wxNewId();
const long InfopersoClientFrame::ID_PANEL1 = wxNewId();
const long InfopersoClientFrame::idMenuQuit = wxNewId();
const long InfopersoClientFrame::idMenuAbout = wxNewId();
const long InfopersoClientFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(InfopersoClientFrame,wxFrame)
    //(*EventTable(InfopersoClientFrame)
    //*)
END_EVENT_TABLE()

InfopersoClientFrame::InfopersoClientFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(InfopersoClientFrame)
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
    StaticBox1 = new wxStaticBox(Panel1, ID_STATICBOX1, _("Information Client   "), wxPoint(8,8), wxSize(480,390), 0, _T("ID_STATICBOX1"));
    wxFont StaticBox1Font(20,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticBox1->SetFont(StaticBox1Font);
    StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("Nom"), wxPoint(112,72), wxSize(48,19), 0, _T("ID_STATICTEXT1"));
    wxFont StaticText1Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText1->SetFont(StaticText1Font);
    StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, _("Prénom"), wxPoint(88,120), wxSize(64,19), 0, _T("ID_STATICTEXT2"));
    wxFont StaticText2Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText2->SetFont(StaticText2Font);
    StaticText3 = new wxStaticText(Panel1, ID_STATICTEXT3, _("Username"), wxPoint(72,168), wxSize(88,24), 0, _T("ID_STATICTEXT3"));
    wxFont StaticText3Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText3->SetFont(StaticText3Font);
    StaticText4 = new wxStaticText(Panel1, ID_STATICTEXT4, _("Password"), wxPoint(72,224), wxSize(88,19), 0, _T("ID_STATICTEXT4"));
    wxFont StaticText4Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText4->SetFont(StaticText4Font);
    StaticText5 = new wxStaticText(Panel1, ID_STATICTEXT5, _("Address"), wxPoint(88,280), wxSize(80,19), 0, _T("ID_STATICTEXT5"));
    wxFont StaticText5Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText5->SetFont(StaticText5Font);
    StaticText6 = new wxStaticText(Panel1, ID_STATICTEXT6, _("Cel"), wxPoint(120,328), wxDefaultSize, 0, _T("ID_STATICTEXT6"));
    wxFont StaticText6Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText6->SetFont(StaticText6Font);
    Button1 = new wxButton(Panel1, ID_BUTTON1, _("Close"), wxPoint(24,352), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    Button2 = new wxButton(Panel1, ID_BUTTON2, _("Save"), wxPoint(384,360), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
    TextCtrl1 = new wxTextCtrl(Panel1, ID_TEXTCTRL1, wxEmptyString, wxPoint(168,320), wxSize(137,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    TextCtrl1->SetBackgroundColour(wxColour(229,229,229));
    TextCtrl2 = new wxTextCtrl(Panel1, ID_TEXTCTRL2, wxEmptyString, wxPoint(168,272), wxSize(137,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
    TextCtrl2->SetBackgroundColour(wxColour(229,229,229));
    TextCtrl3 = new wxTextCtrl(Panel1, ID_TEXTCTRL3, wxEmptyString, wxPoint(168,216), wxSize(136,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
    TextCtrl3->SetBackgroundColour(wxColour(229,229,229));
    TextCtrl4 = new wxTextCtrl(Panel1, ID_TEXTCTRL4, wxEmptyString, wxPoint(168,160), wxSize(136,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
    TextCtrl4->SetBackgroundColour(wxColour(229,229,229));
    TextCtrl5 = new wxTextCtrl(Panel1, ID_TEXTCTRL5, wxEmptyString, wxPoint(168,112), wxSize(136,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
    TextCtrl5->SetBackgroundColour(wxColour(229,229,229));
    TextCtrl6 = new wxTextCtrl(Panel1, ID_TEXTCTRL6, wxEmptyString, wxPoint(168,64), wxSize(136,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL6"));
    TextCtrl6->SetBackgroundColour(wxColour(229,229,229));
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

    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&InfopersoClientFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&InfopersoClientFrame::OnAbout);
    //*)
}

InfopersoClientFrame::~InfopersoClientFrame()
{
    //(*Destroy(InfopersoClientFrame)
    //*)
}

void InfopersoClientFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void InfopersoClientFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}
