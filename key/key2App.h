/***************************************************************
 * Name:      key2App.h
 * Purpose:   Defines Application Class
 * Author:     ()
 * Created:   2016-11-09
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef KEY2APP_H
#define KEY2APP_H

#include <wx/app.h>
#include "key2Main.h"
#include "wx/taskbar.h"

#include <wx/bitmap.h>
#include <wx/menu.h>


class MyTaskBarIcon: public wxTaskBarIcon {

    public:
        wxMenu *menu;
        bool done;
        bool done2;
        MyTaskBarIcon() {done=false;done2=false;};
        void OnDummy(wxCommandEvent& event);
        void mous(wxMouseCaptureLostEvent& event);

     void click(wxTaskBarIconEvent&);
           DECLARE_EVENT_TABLE()
};

class key2App : public wxApp
{
    public:


        MyTaskBarIcon *m_taskBarIcon;
        key2Frame* Frame;
        int FilterEvent(wxEvent& event);
        virtual bool OnInit();
        virtual void CleanUp();
};

#endif // KEY2APP_H
