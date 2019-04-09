#ifndef DIALOGSETTINGS_H
#define DIALOGSETTINGS_H

//(*Headers(DialogSettings)
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/checkbox.h>
#include <wx/spinctrl.h>
#include <wx/radiobut.h>
#include <wx/choice.h>
#include <wx/button.h>
#include <wx/dialog.h>
//*)

class DialogSettings: public wxDialog
{
	public:

		DialogSettings(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~DialogSettings();

		//(*Declarations(DialogSettings)
		wxRadioButton* RadioButton9;
		wxRadioButton* RadioButton1;
		wxSpinCtrl* SpinCtrl1;
		wxStaticText* StaticText2;
		wxRadioButton* RadioButton2;
		wxRadioButton* RadioButton6;
		wxRadioButton* RadioButton5;
		wxButton* Button1;
		wxRadioButton* RadioButton4;
		wxCheckBox* CheckBox3;
		wxRadioButton* RadioButton7;
		wxCheckBox* CheckBox2;
		wxCheckBox* CheckBox6;
		wxStaticText* StaticText1;
		wxStaticText* StaticText3;
		wxRadioButton* RadioButton3;
		wxButton* Button2;
		wxCheckBox* CheckBox1;
		wxButton* Button3;
		wxRadioButton* RadioButton8;
		wxRadioButton* RadioButton10;
		wxCheckBox* CheckBox4;
		wxSpinCtrl* SpinCtrl2;
		wxCheckBox* CheckBox7;
		wxCheckBox* CheckBox5;
		wxStaticText* StaticText4;
		wxChoice* Choice1;
		wxChoice* Choice2;
		//*)

	protected:

		//(*Identifiers(DialogSettings)
		static const long ID_STATICTEXT1;
		static const long ID_SPINCTRL1;
		static const long ID_STATICTEXT2;
		static const long ID_SPINCTRL2;
		static const long ID_CHECKBOX1;
		static const long ID_CHECKBOX2;
		static const long ID_CHECKBOX3;
		static const long ID_CHECKBOX4;
		static const long ID_CHOICE1;
		static const long ID_CHECKBOX5;
		static const long ID_BUTTON1;
		static const long ID_STATICTEXT3;
		static const long ID_STATICTEXT4;
		static const long ID_CHOICE2;
		static const long ID_CHECKBOX7;
		static const long ID_CHECKBOX6;
		static const long ID_BUTTON2;
		static const long ID_RADIOBUTTON1;
		static const long ID_RADIOBUTTON2;
		static const long ID_RADIOBUTTON3;
		static const long ID_RADIOBUTTON4;
		static const long ID_RADIOBUTTON5;
		static const long ID_RADIOBUTTON6;
		static const long ID_RADIOBUTTON7;
		static const long ID_RADIOBUTTON8;
		static const long ID_RADIOBUTTON9;
		static const long ID_RADIOBUTTON10;
		static const long ID_BUTTON3;
		//*)

	private:

		//(*Handlers(DialogSettings)
		void OnButton3Click(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
