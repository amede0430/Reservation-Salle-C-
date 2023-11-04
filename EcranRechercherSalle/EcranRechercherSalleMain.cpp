/***************************************************************
 * Name:      EcranRechercherSalleMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Fadel Sewade (fadelsew@gmail.com)
 * Created:   2023-01-23
 * Copyright: Fadel Sewade ()
 * License:
 **************************************************************/

#include "EcranRechercherSalleMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(EcranRechercherSalleFrame)
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

//(*IdInit(EcranRechercherSalleFrame)
const long EcranRechercherSalleFrame::ID_STATICTEXT1 = wxNewId();
const long EcranRechercherSalleFrame::ID_BUTTON1 = wxNewId();
const long EcranRechercherSalleFrame::ID_STATICTEXT3 = wxNewId();
const long EcranRechercherSalleFrame::ID_STATICTEXT4 = wxNewId();
const long EcranRechercherSalleFrame::ID_STATICTEXT5 = wxNewId();
const long EcranRechercherSalleFrame::ID_STATICTEXT6 = wxNewId();
const long EcranRechercherSalleFrame::ID_RADIOBOX1 = wxNewId();
const long EcranRechercherSalleFrame::ID_BUTTON2 = wxNewId();
const long EcranRechercherSalleFrame::ID_TEXTCTRL2 = wxNewId();
const long EcranRechercherSalleFrame::ID_TEXTCTRL3 = wxNewId();
const long EcranRechercherSalleFrame::ID_TEXTCTRL4 = wxNewId();
const long EcranRechercherSalleFrame::ID_TEXTCTRL5 = wxNewId();
const long EcranRechercherSalleFrame::ID_RADIOBOX2 = wxNewId();
const long EcranRechercherSalleFrame::ID_RADIOBOX3 = wxNewId();
const long EcranRechercherSalleFrame::ID_STATICTEXT2 = wxNewId();
const long EcranRechercherSalleFrame::ID_TEXTCTRL1 = wxNewId();
const long EcranRechercherSalleFrame::ID_BUTTON3 = wxNewId();
const long EcranRechercherSalleFrame::ID_PANEL1 = wxNewId();
const long EcranRechercherSalleFrame::idMenuQuit = wxNewId();
const long EcranRechercherSalleFrame::idMenuAbout = wxNewId();
const long EcranRechercherSalleFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(EcranRechercherSalleFrame,wxFrame)
    //(*EventTable(EcranRechercherSalleFrame)
    //*)
END_EVENT_TABLE()

EcranRechercherSalleFrame::EcranRechercherSalleFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(EcranRechercherSalleFrame)
    wxBoxSizer* BoxSizer1;
    wxMenu* Menu1;
    wxMenu* Menu2;
    wxMenuBar* MenuBar1;
    wxMenuItem* MenuItem1;
    wxMenuItem* MenuItem2;

    Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
    Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxSize(400,500), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    Panel1->SetBackgroundColour(wxColour(255,255,255));
    StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("RECHERCHE"), wxPoint(128,16), wxSize(152,32), 0, _T("ID_STATICTEXT1"));
    StaticText1->SetForegroundColour(wxColour(0,0,0));
    wxFont StaticText1Font(20,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText1->SetFont(StaticText1Font);
    Button1 = new wxButton(Panel1, ID_BUTTON1, _("Rechercher"), wxPoint(264,56), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    StaticText3 = new wxStaticText(Panel1, ID_STATICTEXT3, _("Nom: "), wxPoint(176,120), wxDefaultSize, 0, _T("ID_STATICTEXT3"));
    StaticText3->SetForegroundColour(wxColour(0,0,0));
    wxFont StaticText3Font(13,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText3->SetFont(StaticText3Font);
    StaticText4 = new wxStaticText(Panel1, ID_STATICTEXT4, _("Superficie :"), wxPoint(144,168), wxDefaultSize, 0, _T("ID_STATICTEXT4"));
    StaticText4->SetForegroundColour(wxColour(0,0,0));
    wxFont StaticText4Font(13,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText4->SetFont(StaticText4Font);
    StaticText5 = new wxStaticText(Panel1, ID_STATICTEXT5, _("Prix :"), wxPoint(176,216), wxDefaultSize, 0, _T("ID_STATICTEXT5"));
    StaticText5->SetForegroundColour(wxColour(0,0,0));
    wxFont StaticText5Font(13,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText5->SetFont(StaticText5Font);
    StaticText6 = new wxStaticText(Panel1, ID_STATICTEXT6, _("Nbre de places :"), wxPoint(120,264), wxDefaultSize, 0, _T("ID_STATICTEXT6"));
    StaticText6->SetForegroundColour(wxColour(0,0,0));
    wxFont StaticText6Font(13,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText6->SetFont(StaticText6Font);
    wxString __wxRadioBoxChoices_1[2] =
    {
    	_("Non Réservée"),
    	_("Réservée")
    };
    RadioBox1 = new wxRadioBox(Panel1, ID_RADIOBOX1, _("Statut"), wxPoint(32,376), wxDefaultSize, 2, __wxRadioBoxChoices_1, 1, 0, wxDefaultValidator, _T("ID_RADIOBOX1"));
    RadioBox1->SetForegroundColour(wxColour(0,0,0));
    Button2 = new wxButton(Panel1, ID_BUTTON2, _("OK"), wxPoint(296,448), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
    TextCtrl2 = new wxTextCtrl(Panel1, ID_TEXTCTRL2, wxEmptyString, wxPoint(248,112), wxSize(112,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
    TextCtrl3 = new wxTextCtrl(Panel1, ID_TEXTCTRL3, wxEmptyString, wxPoint(248,160), wxSize(112,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
    TextCtrl4 = new wxTextCtrl(Panel1, ID_TEXTCTRL4, wxEmptyString, wxPoint(248,208), wxSize(112,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
    TextCtrl5 = new wxTextCtrl(Panel1, ID_TEXTCTRL5, wxEmptyString, wxPoint(248,256), wxSize(112,24), 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
    wxString __wxRadioBoxChoices_2[2] =
    {
    	_("Y"),
    	_("N")
    };
    RadioBox2 = new wxRadioBox(Panel1, ID_RADIOBOX2, _("Wifi"), wxPoint(136,304), wxSize(120,46), 2, __wxRadioBoxChoices_2, 1, 0, wxDefaultValidator, _T("ID_RADIOBOX2"));
    RadioBox2->SetForegroundColour(wxColour(0,0,0));
    wxString __wxRadioBoxChoices_3[2] =
    {
    	_("Y"),
    	_("N")
    };
    RadioBox3 = new wxRadioBox(Panel1, ID_RADIOBOX3, _("Ecran"), wxPoint(32,304), wxDefaultSize, 2, __wxRadioBoxChoices_3, 1, 0, wxDefaultValidator, _T("ID_RADIOBOX3"));
    RadioBox3->SetSelection(0);
    RadioBox3->SetForegroundColour(wxColour(0,0,0));
    StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, _("Salle n° "), wxPoint(16,88), wxSize(72,19), 0, _T("ID_STATICTEXT2"));
    StaticText2->SetForegroundColour(wxColour(0,0,0));
    wxFont StaticText2Font(14,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText2->SetFont(StaticText2Font);
    TextCtrl1 = new wxTextCtrl(Panel1, ID_TEXTCTRL1, wxEmptyString, wxPoint(80,80), wxSize(40,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    Button3 = new wxButton(Panel1, ID_BUTTON3, _("Plus d\'infos"), wxPoint(40,440), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
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

    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&EcranRechercherSalleFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&EcranRechercherSalleFrame::OnAbout);
    //*)
}

EcranRechercherSalleFrame::~EcranRechercherSalleFrame()
{
    //(*Destroy(EcranRechercherSalleFrame)
    //*)
}

void EcranRechercherSalleFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void EcranRechercherSalleFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}
