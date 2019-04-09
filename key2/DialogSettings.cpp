#include "DialogSettings.h"

//(*InternalHeaders(DialogSettings)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(DialogSettings)
const long DialogSettings::ID_STATICTEXT1 = wxNewId();
const long DialogSettings::ID_SPINCTRL1 = wxNewId();
const long DialogSettings::ID_STATICTEXT2 = wxNewId();
const long DialogSettings::ID_SPINCTRL2 = wxNewId();
const long DialogSettings::ID_CHECKBOX1 = wxNewId();
const long DialogSettings::ID_CHECKBOX2 = wxNewId();
const long DialogSettings::ID_CHECKBOX3 = wxNewId();
const long DialogSettings::ID_CHECKBOX4 = wxNewId();
const long DialogSettings::ID_CHOICE1 = wxNewId();
const long DialogSettings::ID_CHECKBOX5 = wxNewId();
const long DialogSettings::ID_BUTTON1 = wxNewId();
const long DialogSettings::ID_STATICTEXT3 = wxNewId();
const long DialogSettings::ID_STATICTEXT4 = wxNewId();
const long DialogSettings::ID_CHOICE2 = wxNewId();
const long DialogSettings::ID_CHECKBOX7 = wxNewId();
const long DialogSettings::ID_CHECKBOX6 = wxNewId();
const long DialogSettings::ID_BUTTON2 = wxNewId();
const long DialogSettings::ID_RADIOBUTTON1 = wxNewId();
const long DialogSettings::ID_RADIOBUTTON2 = wxNewId();
const long DialogSettings::ID_RADIOBUTTON3 = wxNewId();
const long DialogSettings::ID_RADIOBUTTON4 = wxNewId();
const long DialogSettings::ID_RADIOBUTTON5 = wxNewId();
const long DialogSettings::ID_RADIOBUTTON6 = wxNewId();
const long DialogSettings::ID_RADIOBUTTON7 = wxNewId();
const long DialogSettings::ID_RADIOBUTTON8 = wxNewId();
const long DialogSettings::ID_RADIOBUTTON9 = wxNewId();
const long DialogSettings::ID_RADIOBUTTON10 = wxNewId();
const long DialogSettings::ID_BUTTON3 = wxNewId();
//*)

BEGIN_EVENT_TABLE(DialogSettings,wxDialog)
	//(*EventTable(DialogSettings)
	//*)
END_EVENT_TABLE()

DialogSettings::DialogSettings(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(DialogSettings)
	wxStaticBoxSizer* StaticBoxSizer2;
	wxFlexGridSizer* FlexGridSizer4;
	wxStaticBoxSizer* StaticBoxSizer4;
	wxFlexGridSizer* FlexGridSizer3;
	wxFlexGridSizer* FlexGridSizer5;
	wxFlexGridSizer* FlexGridSizer9;
	wxFlexGridSizer* FlexGridSizer2;
	wxFlexGridSizer* FlexGridSizer7;
	wxStaticBoxSizer* StaticBoxSizer3;
	wxFlexGridSizer* FlexGridSizer15;
	wxFlexGridSizer* FlexGridSizer8;
	wxFlexGridSizer* FlexGridSizer14;
	wxFlexGridSizer* FlexGridSizer6;
	wxStaticBoxSizer* StaticBoxSizer1;
	wxFlexGridSizer* FlexGridSizer1;
	wxStaticBoxSizer* StaticBoxSizer5;

	Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("wxID_ANY"));
	FlexGridSizer1 = new wxFlexGridSizer(0, 1, 0, 0);
	FlexGridSizer2 = new wxFlexGridSizer(0, 3, 0, 0);
	StaticBoxSizer1 = new wxStaticBoxSizer(wxHORIZONTAL, this, _("General"));
	FlexGridSizer3 = new wxFlexGridSizer(0, 2, 0, 0);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Transparency (%)"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	FlexGridSizer3->Add(StaticText1, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	SpinCtrl1 = new wxSpinCtrl(this, ID_SPINCTRL1, _T("0"), wxDefaultPosition, wxSize(75,21), 0, 0, 100, 0, _T("ID_SPINCTRL1"));
	SpinCtrl1->SetValue(_T("0"));
	FlexGridSizer3->Add(SpinCtrl1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Timeout (ms)"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	FlexGridSizer3->Add(StaticText2, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	SpinCtrl2 = new wxSpinCtrl(this, ID_SPINCTRL2, _T("0"), wxDefaultPosition, wxSize(75,21), 0, 0, 100, 0, _T("ID_SPINCTRL2"));
	SpinCtrl2->SetValue(_T("0"));
	FlexGridSizer3->Add(SpinCtrl2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer1->Add(FlexGridSizer3, 1, wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(StaticBoxSizer1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer2 = new wxStaticBoxSizer(wxHORIZONTAL, this, _("Hotkeys"));
	FlexGridSizer4 = new wxFlexGridSizer(0, 1, 0, 0);
	CheckBox1 = new wxCheckBox(this, ID_CHECKBOX1, _("Use hotkey to set window position"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX1"));
	CheckBox1->SetValue(false);
	FlexGridSizer4->Add(CheckBox1, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer5 = new wxFlexGridSizer(0, 4, 0, 0);
	CheckBox2 = new wxCheckBox(this, ID_CHECKBOX2, _("Ctrl + "), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX2"));
	CheckBox2->SetValue(false);
	FlexGridSizer5->Add(CheckBox2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	CheckBox3 = new wxCheckBox(this, ID_CHECKBOX3, _("Shift + "), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX3"));
	CheckBox3->SetValue(false);
	FlexGridSizer5->Add(CheckBox3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	CheckBox4 = new wxCheckBox(this, ID_CHECKBOX4, _("Alt + "), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX4"));
	CheckBox4->SetValue(false);
	FlexGridSizer5->Add(CheckBox4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Choice1 = new wxChoice(this, ID_CHOICE1, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE1"));
	Choice1->Append(_("A"));
	Choice1->Append(_("B"));
	Choice1->Append(_("C"));
	Choice1->Append(_("D"));
	Choice1->Append(_("E"));
	Choice1->Append(_("F"));
	Choice1->Append(_("G"));
	Choice1->Append(_("H"));
	Choice1->Append(_("I"));
	Choice1->Append(_("J"));
	Choice1->Append(_("K"));
	Choice1->Append(_("L"));
	Choice1->Append(_("M"));
	Choice1->Append(_("N"));
	Choice1->Append(_("O"));
	Choice1->Append(_("P"));
	Choice1->Append(_("Q"));
	Choice1->Append(_("R"));
	Choice1->Append(_("S"));
	Choice1->Append(_("T"));
	Choice1->Append(_("U"));
	Choice1->Append(_("V"));
	Choice1->Append(_("W"));
	Choice1->Append(_("X"));
	Choice1->Append(_("Y"));
	Choice1->Append(_("Z"));
	FlexGridSizer5->Add(Choice1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer4->Add(FlexGridSizer5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer2->Add(FlexGridSizer4, 1, wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(StaticBoxSizer2, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(FlexGridSizer2, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer3 = new wxStaticBoxSizer(wxVERTICAL, this, _("Positioning"));
	FlexGridSizer6 = new wxFlexGridSizer(0, 1, 0, 0);
	CheckBox5 = new wxCheckBox(this, ID_CHECKBOX5, _("Manual"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX5"));
	CheckBox5->SetValue(false);
	FlexGridSizer6->Add(CheckBox5, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer8 = new wxFlexGridSizer(0, 2, 0, 0);
	FlexGridSizer15 = new wxFlexGridSizer(0, 1, 0, 0);
	StaticBoxSizer4 = new wxStaticBoxSizer(wxHORIZONTAL, this, _("Target application settings"));
	FlexGridSizer7 = new wxFlexGridSizer(0, 2, 0, 0);
	Button1 = new wxButton(this, ID_BUTTON1, _("Label"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	FlexGridSizer7->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("Choose your target application"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	FlexGridSizer7->Add(StaticText3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("Set window size to"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	FlexGridSizer7->Add(StaticText4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Choice2 = new wxChoice(this, ID_CHOICE2, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE2"));
	FlexGridSizer7->Add(Choice2, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	CheckBox7 = new wxCheckBox(this, ID_CHECKBOX7, _("Center to screen"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX7"));
	CheckBox7->SetValue(false);
	FlexGridSizer7->Add(CheckBox7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	CheckBox6 = new wxCheckBox(this, ID_CHECKBOX6, _("Apply to all opened applications"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX6"));
	CheckBox6->SetValue(false);
	FlexGridSizer7->Add(CheckBox6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer4->Add(FlexGridSizer7, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer15->Add(StaticBoxSizer4, 1, wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button2 = new wxButton(this, ID_BUTTON2, _("Apply changes"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	FlexGridSizer15->Add(Button2, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer8->Add(FlexGridSizer15, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer14 = new wxFlexGridSizer(0, 1, 0, 0);
	StaticBoxSizer5 = new wxStaticBoxSizer(wxVERTICAL, this, _("Anchor"));
	FlexGridSizer9 = new wxFlexGridSizer(0, 3, 0, 0);
	RadioButton1 = new wxRadioButton(this, ID_RADIOBUTTON1, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON1"));
	FlexGridSizer9->Add(RadioButton1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	RadioButton2 = new wxRadioButton(this, ID_RADIOBUTTON2, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON2"));
	FlexGridSizer9->Add(RadioButton2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	RadioButton3 = new wxRadioButton(this, ID_RADIOBUTTON3, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON3"));
	FlexGridSizer9->Add(RadioButton3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	RadioButton4 = new wxRadioButton(this, ID_RADIOBUTTON4, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON4"));
	FlexGridSizer9->Add(RadioButton4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	RadioButton5 = new wxRadioButton(this, ID_RADIOBUTTON5, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON5"));
	FlexGridSizer9->Add(RadioButton5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	RadioButton6 = new wxRadioButton(this, ID_RADIOBUTTON6, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON6"));
	FlexGridSizer9->Add(RadioButton6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	RadioButton7 = new wxRadioButton(this, ID_RADIOBUTTON7, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON7"));
	FlexGridSizer9->Add(RadioButton7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	RadioButton8 = new wxRadioButton(this, ID_RADIOBUTTON8, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON8"));
	FlexGridSizer9->Add(RadioButton8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	RadioButton9 = new wxRadioButton(this, ID_RADIOBUTTON9, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON9"));
	FlexGridSizer9->Add(RadioButton9, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer5->Add(FlexGridSizer9, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer14->Add(StaticBoxSizer5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	RadioButton10 = new wxRadioButton(this, ID_RADIOBUTTON10, _("Mouse pointer"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON10"));
	FlexGridSizer14->Add(RadioButton10, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer8->Add(FlexGridSizer14, 1, wxALL|wxALIGN_TOP|wxALIGN_CENTER_HORIZONTAL, 5);
	FlexGridSizer6->Add(FlexGridSizer8, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer3->Add(FlexGridSizer6, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(StaticBoxSizer3, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button3 = new wxButton(this, ID_BUTTON3, _("Save"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
	FlexGridSizer1->Add(Button3, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(FlexGridSizer1);
	FlexGridSizer1->Fit(this);
	FlexGridSizer1->SetSizeHints(this);

	Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&DialogSettings::OnButton3Click);
	//*)
}

DialogSettings::~DialogSettings()
{
	//(*Destroy(DialogSettings)
	//*)
}


void DialogSettings::OnButton3Click(wxCommandEvent& event)
{
}
