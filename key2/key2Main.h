/***************************************************************
 * Name:      key2Main.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2016-11-09
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef KEY2MAIN_H
#define KEY2MAIN_H

//(*Headers(key2Frame)
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/menu.h>
#include <wx/panel.h>
#include <wx/frame.h>
#include <wx/timer.h>
//*)

class key2Frame: public wxFrame
{
    public:

        void handlerFuncName(wxMouseCaptureLostEvent& event);

        int lines;
        void setLines(int x);
        int Brick(wxString x);
        void OnShowEffect(wxCommandEvent& event);
        wxPoint m_delta;
        key2Frame(wxWindow* parent,wxWindowID id = -1);
        virtual ~key2Frame();

    public:

        //(*Handlers(key2Frame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnLeftDown(wxMouseEvent& event);
        void OnLeftUp(wxMouseEvent& event);
        void OnMouseMove(wxMouseEvent& event);
        void OnChar(wxKeyEvent& event);
        void OnTimer1Trigger(wxTimerEvent& event);
        //*)

        //(*Identifiers(key2Frame)
        static const long ID_STATICTEXT1;
        static const long ID_STATICTEXT2;
        static const long ID_STATICTEXT3;
        static const long ID_PANEL1;
        static const long ID_TIMER1;
        static const long ID_MENUITEM1;
        static const long ID_MENUITEM2;
        static const long ID_MENUITEM3;
        //*)

        //(*Declarations(key2Frame)
        wxMenu Menu1;
        wxStaticText* StaticText2;
        wxMenuItem* MenuItem2;
        wxMenuItem* MenuItem1;
        wxPanel* Panel1;
        wxStaticText* StaticText1;
        wxStaticText* StaticText3;
        wxMenuItem* MenuItem3;
        wxTimer Timer1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // KEY2MAIN_H
