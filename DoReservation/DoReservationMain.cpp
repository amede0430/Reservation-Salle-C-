/***************************************************************
 * Name:      DoReservationMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Fadel Sewade (fadelsew@gmail.com)
 * Created:   2023-01-23
 * Copyright: Fadel Sewade ()
 * License:
 **************************************************************/

#include "DoReservationMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(DoReservationFrame)
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

//(*IdInit(DoReservationFrame)
const long DoReservationFrame::ID_STATICTEXT1 = wxNewId();
const long DoReservationFrame::ID_TEXTCTRL1 = wxNewId();
const long DoReservationFrame::ID_STATICBOX1 = wxNewId();
const long DoReservationFrame::ID_STATICTEXT2 = wxNewId();
const long DoReservationFrame::ID_STATICTEXT3 = wxNewId();
const long DoReservationFrame::ID_TEXTCTRL2 = wxNewId();
const long DoReservationFrame::ID_BUTTON1 = wxNewId();
const long DoReservationFrame::ID_TEXTCTRL3 = wxNewId();
const long DoReservationFrame::ID_STATICTEXT4 = wxNewId();
const long DoReservationFrame::ID_TEXTCTRL4 = wxNewId();
const long DoReservationFrame::ID_STATICTEXT5 = wxNewId();
const long DoReservationFrame::ID_STATICTEXT6 = wxNewId();
const long DoReservationFrame::ID_TEXTCTRL5 = wxNewId();
const long DoReservationFrame::ID_STATICTEXT7 = wxNewId();
const long DoReservationFrame::ID_TEXTCTRL6 = wxNewId();
const long DoReservationFrame::ID_RADIOBOX1 = wxNewId();
const long DoReservationFrame::ID_RADIOBOX2 = wxNewId();
const long DoReservationFrame::ID_TEXTCTRL7 = wxNewId();
const long DoReservationFrame::ID_BUTTON2 = wxNewId();
const long DoReservationFrame::ID_BUTTON3 = wxNewId();
const long DoReservationFrame::ID_PANEL1 = wxNewId();
const long DoReservationFrame::idMenuQuit = wxNewId();
const long DoReservationFrame::idMenuAbout = wxNewId();
const long DoReservationFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(DoReservationFrame,wxFrame)
    //(*EventTable(DoReservationFrame)
    //*)
END_EVENT_TABLE()

DoReservationFrame::DoReservationFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(DoReservationFrame)
    wxBoxSizer* BoxSizer1;
    wxMenu* Menu1;
    wxMenu* Menu2;
    wxMenuBar* MenuBar1;
    wxMenuItem* MenuItem1;
    wxMenuItem* MenuItem2;

    Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
    Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxSize(600,400), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    Panel1->SetBackgroundColour(wxColour(255,255,255));
    StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("Recherche Salle n° :"), wxPoint(24,24), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    StaticText1->SetForegroundColour(wxColour(0,0,0));
    wxFont StaticText1Font(17,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText1->SetFont(StaticText1Font);
    TextCtrl1 = new wxTextCtrl(Panel1, ID_TEXTCTRL1, _("Text"), wxPoint(160,24), wxSize(64,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    TextCtrl1->SetBackgroundColour(wxColour(229,229,229));
    StaticBox1 = new wxStaticBox(Panel1, ID_STATICBOX1, _("Salle "), wxPoint(16,88), wxSize(344,296), 0, _T("ID_STATICBOX1"));
    StaticBox1->SetForegroundColour(wxColour(0,0,0));
    StaticBox1->SetBackgroundColour(wxColour(255,255,255));
    StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, _("Par :"), wxPoint(368,216), wxSize(48,19), 0, _T("ID_STATICTEXT2"));
    StaticText2->SetForegroundColour(wxColour(0,0,0));
    wxFont StaticText2Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText2->SetFont(StaticText2Font);
    StaticText3 = new wxStaticText(Panel1, ID_STATICTEXT3, _("Pour le :"), wxPoint(368,136), wxSize(80,19), 0, _T("ID_STATICTEXT3"));
    StaticText3->SetForegroundColour(wxColour(0,0,0));
    wxFont StaticText3Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText3->SetFont(StaticText3Font);
    TextCtrl2 = new wxTextCtrl(Panel1, ID_TEXTCTRL2, _("Text"), wxPoint(408,160), wxSize(160,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
    TextCtrl2->SetBackgroundColour(wxColour(229,229,229));
    Button1 = new wxButton(Panel1, ID_BUTTON1, _("Réserver"), wxPoint(480,304), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    TextCtrl3 = new wxTextCtrl(Panel1, ID_TEXTCTRL3, _("Text"), wxPoint(408,248), wxSize(160,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
    TextCtrl3->SetBackgroundColour(wxColour(229,229,229));
    StaticText4 = new wxStaticText(Panel1, ID_STATICTEXT4, _("Surperficie :"), wxPoint(48,192), wxDefaultSize, 0, _T("ID_STATICTEXT4"));
    StaticText4->SetForegroundColour(wxColour(0,0,0));
    wxFont StaticText4Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText4->SetFont(StaticText4Font);
    TextCtrl4 = new wxTextCtrl(Panel1, ID_TEXTCTRL4, _("Text"), wxPoint(168,184), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
    TextCtrl4->SetBackgroundColour(wxColour(229,229,229));
    StaticText5 = new wxStaticText(Panel1, ID_STATICTEXT5, _("Nom :"), wxPoint(64,136), wxSize(56,19), 0, _T("ID_STATICTEXT5"));
    StaticText5->SetForegroundColour(wxColour(0,0,0));
    wxFont StaticText5Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText5->SetFont(StaticText5Font);
    StaticText6 = new wxStaticText(Panel1, ID_STATICTEXT6, _("Prix :"), wxPoint(48,240), wxDefaultSize, 0, _T("ID_STATICTEXT6"));
    StaticText6->SetForegroundColour(wxColour(0,0,0));
    wxFont StaticText6Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText6->SetFont(StaticText6Font);
    TextCtrl5 = new wxTextCtrl(Panel1, ID_TEXTCTRL5, _("Text"), wxPoint(168,232), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
    TextCtrl5->SetBackgroundColour(wxColour(229,229,229));
    StaticText7 = new wxStaticText(Panel1, ID_STATICTEXT7, _("Nbre de places :"), wxPoint(40,288), wxSize(128,19), 0, _T("ID_STATICTEXT7"));
    StaticText7->SetForegroundColour(wxColour(0,0,0));
    wxFont StaticText7Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText7->SetFont(StaticText7Font);
    TextCtrl6 = new wxTextCtrl(Panel1, ID_TEXTCTRL6, _("Text"), wxPoint(168,280), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL6"));
    TextCtrl6->SetBackgroundColour(wxColour(229,229,229));
    wxString __wxRadioBoxChoices_1[2] =
    {
    	_("Y"),
    	_("N")
    };
    RadioBox1 = new wxRadioBox(Panel1, ID_RADIOBOX1, _("Wifi"), wxPoint(40,328), wxDefaultSize, 2, __wxRadioBoxChoices_1, 1, 0, wxDefaultValidator, _T("ID_RADIOBOX1"));
    RadioBox1->SetForegroundColour(wxColour(0,0,0));
    wxString __wxRadioBoxChoices_2[2] =
    {
    	_("Y"),
    	_("N")
    };
    RadioBox2 = new wxRadioBox(Panel1, ID_RADIOBOX2, _("Ecran"), wxPoint(136,328), wxDefaultSize, 2, __wxRadioBoxChoices_2, 1, 0, wxDefaultValidator, _T("ID_RADIOBOX2"));
    RadioBox2->SetForegroundColour(wxColour(0,0,0));
    TextCtrl7 = new wxTextCtrl(Panel1, ID_TEXTCTRL7, _("Text"), wxPoint(168,128), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL7"));
    TextCtrl7->SetBackgroundColour(wxColour(229,229,229));
    Button2 = new wxButton(Panel1, ID_BUTTON2, _("Annuler"), wxPoint(368,304), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
    Button3 = new wxButton(Panel1, ID_BUTTON3, _("<< Return"), wxPoint(480,352), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
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

    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&DoReservationFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&DoReservationFrame::OnAbout);
    //*)
}

DoReservationFrame::~DoReservationFrame()
{
    //(*Destroy(DoReservationFrame)
    //*)
}

void DoReservationFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void DoReservationFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}
