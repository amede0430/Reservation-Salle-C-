/***************************************************************
 * Name:      EcranConnexionMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Fadel Sewade (fadelsew@gmail.com)
 * Created:   2023-01-21
 * Copyright: Fadel Sewade ()
 * License:
 **************************************************************/

#include "EcranConnexionMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(EcranConnexionFrame)
#include <wx/bitmap.h>
#include <wx/font.h>
#include <wx/image.h>
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

//(*IdInit(EcranConnexionFrame)
const long EcranConnexionFrame::ID_STATICBITMAP1 = wxNewId();
const long EcranConnexionFrame::ID_STATICTEXT1 = wxNewId();
const long EcranConnexionFrame::ID_STATICTEXT2 = wxNewId();
const long EcranConnexionFrame::ID_TEXTCTRL1 = wxNewId();
const long EcranConnexionFrame::ID_TEXTCTRL2 = wxNewId();
const long EcranConnexionFrame::ID_BUTTON1 = wxNewId();
const long EcranConnexionFrame::ID_BUTTON2 = wxNewId();
const long EcranConnexionFrame::ID_PANEL2 = wxNewId();
const long EcranConnexionFrame::ID_PANEL1 = wxNewId();
const long EcranConnexionFrame::idMenuQuit = wxNewId();
const long EcranConnexionFrame::idMenuAbout = wxNewId();
const long EcranConnexionFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(EcranConnexionFrame,wxFrame)
    //(*EventTable(EcranConnexionFrame)
    //*)
END_EVENT_TABLE()

EcranConnexionFrame::EcranConnexionFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(EcranConnexionFrame)
    wxBoxSizer* BoxSizer1;
    wxBoxSizer* BoxSizer2;
    wxMenu* Menu1;
    wxMenu* Menu2;
    wxMenuBar* MenuBar1;
    wxMenuItem* MenuItem1;
    wxMenuItem* MenuItem2;

    Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    SetClientSize(wxSize(450,550));
    SetMinSize(wxSize(-1,-1));
    BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
    Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
    Panel2 = new wxPanel(Panel1, ID_PANEL2, wxDefaultPosition, wxSize(450,450), wxTAB_TRAVERSAL, _T("ID_PANEL2"));
    StaticBitmap1 = new wxStaticBitmap(Panel2, ID_STATICBITMAP1, wxBitmap(wxImage(_T("/home/fadelsew02/Desktop/Programmation/Exercices C++/ProjetC++2/logo/logo.png")).Rescale(wxSize(450,450).GetWidth(),wxSize(450,450).GetHeight())), wxPoint(0,0), wxSize(450,450), 0, _T("ID_STATICBITMAP1"));
    StaticText1 = new wxStaticText(Panel2, ID_STATICTEXT1, _("Username:"), wxPoint(96,296), wxSize(120,32), 0, _T("ID_STATICTEXT1"));
    StaticText1->SetForegroundColour(wxColour(0,0,0));
    wxFont StaticText1Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("TeX Gyre Termes"),wxFONTENCODING_DEFAULT);
    StaticText1->SetFont(StaticText1Font);
    StaticText2 = new wxStaticText(Panel2, ID_STATICTEXT2, _("Password: "), wxPoint(96,336), wxSize(88,32), 0, _T("ID_STATICTEXT2"));
    StaticText2->SetForegroundColour(wxColour(0,0,0));
    wxFont StaticText2Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("TeX Gyre Termes"),wxFONTENCODING_DEFAULT);
    StaticText2->SetFont(StaticText2Font);
    TextCtrl1 = new wxTextCtrl(Panel2, ID_TEXTCTRL1, wxEmptyString, wxPoint(200,296), wxSize(136,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    TextCtrl1->SetForegroundColour(wxColour(0,0,0));
    TextCtrl1->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_CAPTIONTEXT));
    TextCtrl2 = new wxTextCtrl(Panel2, ID_TEXTCTRL2, wxEmptyString, wxPoint(200,336), wxSize(136,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
    TextCtrl2->SetBackgroundColour(wxColour(229,229,229));
    Button1 = new wxButton(Panel2, ID_BUTTON1, _("New \?     Create a Account"), wxPoint(128,416), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    Button1->SetForegroundColour(wxColour(30,90,231));
    Button1->SetBackgroundColour(wxColour(229,229,229));
    Button2 = new wxButton(Panel2, ID_BUTTON2, _("Submit"), wxPoint(184,376), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
    Button2->SetForegroundColour(wxColour(0,0,0));
    Button2->SetBackgroundColour(wxColour(229,229,229));
    BoxSizer2->Add(Panel2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel1->SetSizer(BoxSizer2);
    BoxSizer2->Fit(Panel1);
    BoxSizer2->SetSizeHints(Panel1);
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

    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EcranConnexionFrame::OnButton1Click);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&EcranConnexionFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&EcranConnexionFrame::OnAbout);
    //*)
}

EcranConnexionFrame::~EcranConnexionFrame()
{
    //(*Destroy(EcranConnexionFrame)
    //*)
}

void EcranConnexionFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void EcranConnexionFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void EcranConnexionFrame::OnButton1Click(wxCommandEvent& event)
{
}
