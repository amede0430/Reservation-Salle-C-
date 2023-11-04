/***************************************************************
 * Name:      UpdateSalleMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Fadel Sewade (fadelsew@gmail.com)
 * Created:   2023-01-23
 * Copyright: Fadel Sewade ()
 * License:
 **************************************************************/

#include "UpdateSalleMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(UpdateSalleFrame)
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

//(*IdInit(UpdateSalleFrame)
const long UpdateSalleFrame::ID_STATICBOX1 = wxNewId();
const long UpdateSalleFrame::ID_STATICBOX2 = wxNewId();
const long UpdateSalleFrame::ID_BUTTON1 = wxNewId();
const long UpdateSalleFrame::ID_BUTTON2 = wxNewId();
const long UpdateSalleFrame::ID_STATICBOX3 = wxNewId();
const long UpdateSalleFrame::ID_STATICTEXT1 = wxNewId();
const long UpdateSalleFrame::ID_TEXTCTRL1 = wxNewId();
const long UpdateSalleFrame::ID_BUTTON3 = wxNewId();
const long UpdateSalleFrame::ID_STATICTEXT2 = wxNewId();
const long UpdateSalleFrame::ID_STATICTEXT3 = wxNewId();
const long UpdateSalleFrame::ID_STATICTEXT4 = wxNewId();
const long UpdateSalleFrame::ID_TEXTCTRL2 = wxNewId();
const long UpdateSalleFrame::ID_TEXTCTRL3 = wxNewId();
const long UpdateSalleFrame::ID_TEXTCTRL4 = wxNewId();
const long UpdateSalleFrame::ID_RADIOBOX1 = wxNewId();
const long UpdateSalleFrame::ID_RADIOBOX2 = wxNewId();
const long UpdateSalleFrame::ID_STATICTEXT5 = wxNewId();
const long UpdateSalleFrame::ID_TEXTCTRL5 = wxNewId();
const long UpdateSalleFrame::ID_BUTTON4 = wxNewId();
const long UpdateSalleFrame::ID_BUTTON5 = wxNewId();
const long UpdateSalleFrame::ID_PANEL2 = wxNewId();
const long UpdateSalleFrame::ID_PANEL1 = wxNewId();
const long UpdateSalleFrame::idMenuQuit = wxNewId();
const long UpdateSalleFrame::idMenuAbout = wxNewId();
const long UpdateSalleFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(UpdateSalleFrame,wxFrame)
    //(*EventTable(UpdateSalleFrame)
    //*)
END_EVENT_TABLE()

UpdateSalleFrame::UpdateSalleFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(UpdateSalleFrame)
    wxBoxSizer* BoxSizer1;
    wxBoxSizer* BoxSizer2;
    wxMenu* Menu1;
    wxMenu* Menu2;
    wxMenuBar* MenuBar1;
    wxMenuItem* MenuItem1;
    wxMenuItem* MenuItem2;

    Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    SetClientSize(wxSize(600,600));
    BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
    Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxSize(600,600), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
    Panel2 = new wxPanel(Panel1, ID_PANEL2, wxDefaultPosition, wxSize(600,550), wxTAB_TRAVERSAL, _T("ID_PANEL2"));
    Panel2->SetBackgroundColour(wxColour(240,240,240));
    StaticBox1 = new wxStaticBox(Panel2, ID_STATICBOX1, _("Aperçu de la salle"), wxPoint(328,16), wxSize(256,250), 0, _T("ID_STATICBOX1"));
    StaticBox1->SetForegroundColour(wxColour(0,0,0));
    wxFont StaticBox1Font(20,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticBox1->SetFont(StaticBox1Font);
    StaticBox2 = new wxStaticBox(Panel2, ID_STATICBOX2, _("Actions requises"), wxPoint(344,280), wxSize(232,250), 0, _T("ID_STATICBOX2"));
    StaticBox2->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_SCROLLBAR));
    wxFont StaticBox2Font(18,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticBox2->SetFont(StaticBox2Font);
    Button1 = new wxButton(Panel2, ID_BUTTON1, _("Ajouter Salle"), wxPoint(384,336), wxSize(149,60), 0, wxDefaultValidator, _T("ID_BUTTON1"));
    wxFont Button1Font(20,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    Button1->SetFont(Button1Font);
    Button2 = new wxButton(Panel2, ID_BUTTON2, _("Retirer la salle"), wxPoint(384,432), wxSize(149,60), 0, wxDefaultValidator, _T("ID_BUTTON2"));
    wxFont Button2Font(20,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    Button2->SetFont(Button2Font);
    StaticBox3 = new wxStaticBox(Panel2, ID_STATICBOX3, _("Salle "), wxPoint(8,32), wxSize(296,328), 0, _T("ID_STATICBOX3"));
    StaticBox3->SetForegroundColour(wxColour(0,0,0));
    wxFont StaticBox3Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticBox3->SetFont(StaticBox3Font);
    StaticText1 = new wxStaticText(Panel2, ID_STATICTEXT1, _("N° de la salle: "), wxPoint(56,88), wxSize(112,19), 0, _T("ID_STATICTEXT1"));
    StaticText1->SetForegroundColour(wxColour(0,0,0));
    wxFont StaticText1Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText1->SetFont(StaticText1Font);
    TextCtrl1 = new wxTextCtrl(Panel2, ID_TEXTCTRL1, wxEmptyString, wxPoint(176,80), wxSize(48,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    TextCtrl1->SetBackgroundColour(wxColour(240,240,240));
    Button3 = new wxButton(Panel2, ID_BUTTON3, _("Modifier"), wxPoint(112,384), wxSize(100,50), 0, wxDefaultValidator, _T("ID_BUTTON3"));
    wxFont Button3Font(18,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    Button3->SetFont(Button3Font);
    StaticText2 = new wxStaticText(Panel2, ID_STATICTEXT2, _("Nom: "), wxPoint(80,136), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    StaticText2->SetForegroundColour(wxColour(0,0,0));
    wxFont StaticText2Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText2->SetFont(StaticText2Font);
    StaticText3 = new wxStaticText(Panel2, ID_STATICTEXT3, _("Prix: "), wxPoint(80,176), wxSize(48,19), 0, _T("ID_STATICTEXT3"));
    StaticText3->SetForegroundColour(wxColour(0,0,0));
    wxFont StaticText3Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText3->SetFont(StaticText3Font);
    StaticText4 = new wxStaticText(Panel2, ID_STATICTEXT4, _("Superficie: "), wxPoint(80,216), wxSize(48,19), 0, _T("ID_STATICTEXT4"));
    StaticText4->SetForegroundColour(wxColour(0,0,0));
    wxFont StaticText4Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText4->SetFont(StaticText4Font);
    TextCtrl2 = new wxTextCtrl(Panel2, ID_TEXTCTRL2, wxEmptyString, wxPoint(168,128), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
    TextCtrl2->SetBackgroundColour(wxColour(229,229,229));
    TextCtrl3 = new wxTextCtrl(Panel2, ID_TEXTCTRL3, _("Text"), wxPoint(168,168), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
    TextCtrl3->SetBackgroundColour(wxColour(229,229,229));
    TextCtrl4 = new wxTextCtrl(Panel2, ID_TEXTCTRL4, wxEmptyString, wxPoint(168,208), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
    TextCtrl4->SetBackgroundColour(wxColour(229,229,229));
    wxString __wxRadioBoxChoices_1[2] =
    {
    	_("Y"),
    	_("N")
    };
    RadioBox1 = new wxRadioBox(Panel2, ID_RADIOBOX1, _("Wifi"), wxPoint(48,304), wxSize(88,46), 2, __wxRadioBoxChoices_1, 1, 0, wxDefaultValidator, _T("ID_RADIOBOX1"));
    RadioBox1->SetForegroundColour(wxColour(0,0,0));
    wxFont RadioBox1Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    RadioBox1->SetFont(RadioBox1Font);
    wxString __wxRadioBoxChoices_2[2] =
    {
    	_("Y"),
    	_("N")
    };
    RadioBox2 = new wxRadioBox(Panel2, ID_RADIOBOX2, _("Ecran"), wxPoint(216,304), wxSize(80,45), 2, __wxRadioBoxChoices_2, 1, 0, wxDefaultValidator, _T("ID_RADIOBOX2"));
    RadioBox2->SetForegroundColour(wxColour(0,0,0));
    wxFont RadioBox2Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    RadioBox2->SetFont(RadioBox2Font);
    StaticText5 = new wxStaticText(Panel2, ID_STATICTEXT5, _("Nombre de places: "), wxPoint(24,256), wxSize(144,19), 0, _T("ID_STATICTEXT5"));
    StaticText5->SetForegroundColour(wxColour(0,0,0));
    wxFont StaticText5Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText5->SetFont(StaticText5Font);
    TextCtrl5 = new wxTextCtrl(Panel2, ID_TEXTCTRL5, wxEmptyString, wxPoint(168,248), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
    TextCtrl5->SetBackgroundColour(wxColour(229,229,229));
    Button4 = new wxButton(Panel2, ID_BUTTON4, _("Okay"), wxPoint(240,80), wxSize(40,24), 0, wxDefaultValidator, _T("ID_BUTTON4"));
    Button5 = new wxButton(Panel2, ID_BUTTON5, _("<< Return"), wxPoint(24,504), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON5"));
    wxFont Button5Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    Button5->SetFont(Button5Font);
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

    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&UpdateSalleFrame::OnButton1Click);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&UpdateSalleFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&UpdateSalleFrame::OnAbout);
    //*)
}

UpdateSalleFrame::~UpdateSalleFrame()
{
    //(*Destroy(UpdateSalleFrame)
    //*)
}

void UpdateSalleFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void UpdateSalleFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void UpdateSalleFrame::OnButton1Click(wxCommandEvent& event)
{
}
