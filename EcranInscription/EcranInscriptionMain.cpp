/***************************************************************
 * Name:      EcranInscriptionMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Fadel Sewade (fadelsew@gmail.com)
 * Created:   2023-01-23
 * Copyright: Fadel Sewade ()
 * License:
 **************************************************************/

#include "EcranInscriptionMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(EcranInscriptionFrame)
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

//(*IdInit(EcranInscriptionFrame)
const long EcranInscriptionFrame::ID_STATICBITMAP1 = wxNewId();
const long EcranInscriptionFrame::ID_STATICTEXT1 = wxNewId();
const long EcranInscriptionFrame::ID_STATICTEXT2 = wxNewId();
const long EcranInscriptionFrame::ID_STATICTEXT3 = wxNewId();
const long EcranInscriptionFrame::ID_STATICTEXT4 = wxNewId();
const long EcranInscriptionFrame::ID_STATICTEXT5 = wxNewId();
const long EcranInscriptionFrame::ID_STATICTEXT6 = wxNewId();
const long EcranInscriptionFrame::ID_TEXTCTRL1 = wxNewId();
const long EcranInscriptionFrame::ID_TEXTCTRL2 = wxNewId();
const long EcranInscriptionFrame::ID_TEXTCTRL3 = wxNewId();
const long EcranInscriptionFrame::ID_TEXTCTRL4 = wxNewId();
const long EcranInscriptionFrame::ID_TEXTCTRL5 = wxNewId();
const long EcranInscriptionFrame::ID_RADIOBOX1 = wxNewId();
const long EcranInscriptionFrame::ID_BUTTON1 = wxNewId();
const long EcranInscriptionFrame::ID_PANEL1 = wxNewId();
const long EcranInscriptionFrame::idMenuQuit = wxNewId();
const long EcranInscriptionFrame::idMenuAbout = wxNewId();
const long EcranInscriptionFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(EcranInscriptionFrame,wxFrame)
    //(*EventTable(EcranInscriptionFrame)
    //*)
END_EVENT_TABLE()

EcranInscriptionFrame::EcranInscriptionFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(EcranInscriptionFrame)
    wxBoxSizer* BoxSizer1;
    wxMenu* Menu1;
    wxMenu* Menu2;
    wxMenuBar* MenuBar1;
    wxMenuItem* MenuItem1;
    wxMenuItem* MenuItem2;

    Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
    Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxSize(750,400), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    Panel1->SetBackgroundColour(wxColour(229,229,229));
    StaticBitmap1 = new wxStaticBitmap(Panel1, ID_STATICBITMAP1, wxBitmap(wxImage(_T("/home/fadelsew02/Desktop/Programmation/Exercices C++/ProjetC++2/logo/logo.jpg")).Rescale(wxSize(400,400).GetWidth(),wxSize(400,400).GetHeight())), wxDefaultPosition, wxSize(400,400), 0, _T("ID_STATICBITMAP1"));
    StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("Inscription"), wxPoint(440,8), wxSize(142,32), 0, _T("ID_STATICTEXT1"));
    StaticText1->SetForegroundColour(wxColour(0,0,0));
    StaticText1->SetBackgroundColour(wxColour(229,229,229));
    wxFont StaticText1Font(20,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("TeX Gyre Termes Math"),wxFONTENCODING_DEFAULT);
    StaticText1->SetFont(StaticText1Font);
    StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, _("Name :"), wxPoint(456,80), wxSize(104,32), 0, _T("ID_STATICTEXT2"));
    StaticText2->SetForegroundColour(wxColour(0,0,0));
    StaticText2->SetBackgroundColour(wxColour(229,229,229));
    wxFont StaticText2Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_LIGHT,false,_T("Quicksand Light"),wxFONTENCODING_DEFAULT);
    StaticText2->SetFont(StaticText2Font);
    StaticText3 = new wxStaticText(Panel1, ID_STATICTEXT3, _("Surname :"), wxPoint(456,128), wxSize(104,32), 0, _T("ID_STATICTEXT3"));
    StaticText3->SetForegroundColour(wxColour(0,0,0));
    StaticText3->SetBackgroundColour(wxColour(229,229,229));
    wxFont StaticText3Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_LIGHT,false,_T("Quicksand Light"),wxFONTENCODING_DEFAULT);
    StaticText3->SetFont(StaticText3Font);
    StaticText4 = new wxStaticText(Panel1, ID_STATICTEXT4, _("Birthday :"), wxPoint(456,176), wxSize(104,32), 0, _T("ID_STATICTEXT4"));
    StaticText4->SetForegroundColour(wxColour(0,0,0));
    StaticText4->SetBackgroundColour(wxColour(229,229,229));
    wxFont StaticText4Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_LIGHT,false,_T("Quicksand Light"),wxFONTENCODING_DEFAULT);
    StaticText4->SetFont(StaticText4Font);
    StaticText5 = new wxStaticText(Panel1, ID_STATICTEXT5, _("Address :"), wxPoint(456,224), wxSize(104,32), 0, _T("ID_STATICTEXT5"));
    StaticText5->SetForegroundColour(wxColour(0,0,0));
    StaticText5->SetBackgroundColour(wxColour(229,229,229));
    wxFont StaticText5Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_LIGHT,false,_T("Quicksand Light"),wxFONTENCODING_DEFAULT);
    StaticText5->SetFont(StaticText5Font);
    StaticText6 = new wxStaticText(Panel1, ID_STATICTEXT6, _("Cel :"), wxPoint(456,272), wxSize(104,32), 0, _T("ID_STATICTEXT6"));
    StaticText6->SetForegroundColour(wxColour(0,0,0));
    StaticText6->SetBackgroundColour(wxColour(229,229,229));
    wxFont StaticText6Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_LIGHT,false,_T("Quicksand Light"),wxFONTENCODING_DEFAULT);
    StaticText6->SetFont(StaticText6Font);
    TextCtrl1 = new wxTextCtrl(Panel1, ID_TEXTCTRL1, wxEmptyString, wxPoint(584,80), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    TextCtrl2 = new wxTextCtrl(Panel1, ID_TEXTCTRL2, wxEmptyString, wxPoint(584,128), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
    TextCtrl3 = new wxTextCtrl(Panel1, ID_TEXTCTRL3, wxEmptyString, wxPoint(584,176), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
    TextCtrl4 = new wxTextCtrl(Panel1, ID_TEXTCTRL4, wxEmptyString, wxPoint(584,224), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
    TextCtrl5 = new wxTextCtrl(Panel1, ID_TEXTCTRL5, wxEmptyString, wxPoint(584,272), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
    wxString __wxRadioBoxChoices_1[2] =
    {
    	_("Client"),
    	_("Gérant")
    };
    RadioBox1 = new wxRadioBox(Panel1, ID_RADIOBOX1, _("Statut"), wxPoint(416,328), wxSize(164,54), 2, __wxRadioBoxChoices_1, 1, 0, wxDefaultValidator, _T("ID_RADIOBOX1"));
    RadioBox1->SetSelection(0);
    RadioBox1->SetForegroundColour(wxColour(0,0,0));
    RadioBox1->SetBackgroundColour(wxColour(229,229,229));
    Button1 = new wxButton(Panel1, ID_BUTTON1, _("Validate"), wxPoint(648,360), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    Button1->SetBackgroundColour(wxColour(31,208,45));
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

    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&EcranInscriptionFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&EcranInscriptionFrame::OnAbout);
    //*)
}

EcranInscriptionFrame::~EcranInscriptionFrame()
{
    //(*Destroy(EcranInscriptionFrame)
    //*)
}

void EcranInscriptionFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void EcranInscriptionFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}
