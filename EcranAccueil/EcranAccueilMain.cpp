/***************************************************************
 * Name:      EcranAccueilMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Fadel Sewade (fadelsew@gmail.com)
 * Created:   2023-01-21
 * Copyright: Fadel Sewade ()
 * License:
 **************************************************************/

#include "EcranAccueilMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(EcranAccueilFrame)
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

//(*IdInit(EcranAccueilFrame)
const long EcranAccueilFrame::ID_STATICTEXT1 = wxNewId();
const long EcranAccueilFrame::ID_STATICBITMAP1 = wxNewId();
const long EcranAccueilFrame::ID_BUTTON1 = wxNewId();
const long EcranAccueilFrame::ID_STATICTEXT2 = wxNewId();
const long EcranAccueilFrame::ID_PANEL2 = wxNewId();
const long EcranAccueilFrame::ID_PANEL1 = wxNewId();
const long EcranAccueilFrame::idMenuQuit = wxNewId();
const long EcranAccueilFrame::idMenuAbout = wxNewId();
const long EcranAccueilFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(EcranAccueilFrame,wxFrame)
    //(*EventTable(EcranAccueilFrame)
    //*)
END_EVENT_TABLE()

EcranAccueilFrame::EcranAccueilFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(EcranAccueilFrame)
    wxBoxSizer* BoxSizer1;
    wxBoxSizer* BoxSizer2;
    wxMenu* Menu1;
    wxMenu* Menu2;
    wxMenuBar* MenuBar1;
    wxMenuItem* MenuItem1;
    wxMenuItem* MenuItem2;

    Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    SetClientSize(wxSize(500,550));
    SetBackgroundColour(wxColour(191,243,69));
    BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
    Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxSize(450,550), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    Panel1->SetBackgroundColour(wxColour(255,255,255));
    BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
    Panel2 = new wxPanel(Panel1, ID_PANEL2, wxDefaultPosition, wxSize(400,550), wxTAB_TRAVERSAL, _T("ID_PANEL2"));
    Panel2->SetBackgroundColour(wxColour(150,150,168));
    StaticText1 = new wxStaticText(Panel2, ID_STATICTEXT1, _("Welcome !!!"), wxPoint(120,24), wxSize(157,40), wxALIGN_CENTRE, _T("ID_STATICTEXT1"));
    StaticText1->SetForegroundColour(wxColour(0,0,0));
    StaticText1->SetBackgroundColour(wxColour(211,218,227));
    wxFont StaticText1Font(25,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("TeX Gyre Chorus"),wxFONTENCODING_DEFAULT);
    StaticText1->SetFont(StaticText1Font);
    StaticBitmap1 = new wxStaticBitmap(Panel2, ID_STATICBITMAP1, wxBitmap(wxImage(_T("/home/fadelsew02/Desktop/Programmation/Exercices C++/ProjetC++2/logo/logo.jpg")).Rescale(wxSize(300,300).GetWidth(),wxSize(300,300).GetHeight())), wxPoint(48,88), wxSize(300,300), 0, _T("ID_STATICBITMAP1"));
    Button1 = new wxButton(Panel2, ID_BUTTON1, _("Next  >>>"), wxPoint(296,496), wxSize(75,30), wxBORDER_SIMPLE|wxBORDER_DOUBLE|wxBORDER_SUNKEN, wxDefaultValidator, _T("ID_BUTTON1"));
    Button1->SetForegroundColour(wxColour(16,16,16));
    Button1->SetBackgroundColour(wxColour(224,224,224));
    StaticText2 = new wxStaticText(Panel2, ID_STATICTEXT2, _("Reserve\tRoom"), wxPoint(112,272), wxSize(80,25), 0, _T("ID_STATICTEXT2"));
    StaticText2->SetMinSize(wxSize(180,25));
    StaticText2->SetForegroundColour(wxColour(16,16,16));
    wxFont StaticText2Font(20,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText2->SetFont(StaticText2Font);
    BoxSizer2->Add(Panel2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel1->SetSizer(BoxSizer2);
    SetSizer(BoxSizer2);
    Layout();
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

    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EcranAccueilFrame::OnButton1Click);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&EcranAccueilFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&EcranAccueilFrame::OnAbout);
    //*)
}

EcranAccueilFrame::~EcranAccueilFrame()
{
    //(*Destroy(EcranAccueilFrame)
    //*)
}

void EcranAccueilFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void EcranAccueilFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void EcranAccueilFrame::OnButton1Click(wxCommandEvent& event)
{
}
