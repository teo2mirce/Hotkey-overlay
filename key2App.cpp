/***************************************************************
 * Name:      key2App.cpp
 * Purpose:   Code for Application Class
 * Author:     ()
 * Created:   2016-11-09
 * Copyright:  ()
 * License:
 **************************************************************/

#include "key2App.h"

//(*AppHeaders
#include "key2Main.h"
#include <wx/image.h>
#include <wx/msgdlg.h>
//*)





void MyTaskBarIcon::mous(wxMouseCaptureLostEvent& event)
{

}
#include "DialogSettings.h"
void MyTaskBarIcon::OnDummy(wxCommandEvent& event)
{
    delete menu;
    if(event.GetId()==0)
    {
        done2=true;
    }
    if(event.GetId()==1)
    {
        done=true;
    }
}


#include "wx/menu.h"
void MyTaskBarIcon::click(wxTaskBarIconEvent&)
{

    menu = new wxMenu;
    menu->Append(0, "Settings");
    menu->AppendSeparator();
    menu->Append(1, "Exit");

    PopupMenu(menu);
}
 BEGIN_EVENT_TABLE(MyTaskBarIcon, wxTaskBarIcon)
  EVT_TASKBAR_RIGHT_DOWN (MyTaskBarIcon::click)
    EVT_MENU_RANGE(0, 2, MyTaskBarIcon::OnDummy)
    EVT_MOUSE_CAPTURE_LOST(MyTaskBarIcon::mous)
   END_EVENT_TABLE()






IMPLEMENT_APP(key2App);




int key2App::FilterEvent(wxEvent& event)
{
    if(m_taskBarIcon!=NULL && m_taskBarIcon->done2==true)
    {
        m_taskBarIcon->done2=false;

        DialogSettings x(NULL,4,wxPoint(100,100));
        if(x.ShowModal()==1)
        {

        }
    }
    if(m_taskBarIcon!=NULL && m_taskBarIcon->done==true)
    {
        CleanUp();
        exit(2);
    }
    if ((event.GetEventType() == wxEVT_LEFT_DOWN))
    {
        Frame->OnLeftDown( (wxMouseEvent&)event );
        return true;
    }
    if ((event.GetEventType() == wxEVT_LEFT_UP))
    {
        Frame->OnLeftUp( (wxMouseEvent&)event );
        return true;
    }
    if ((event.GetEventType() == wxEVT_LEFT_DCLICK))
    {
        return 1;
    }
    if ((event.GetEventType() == wxEVT_MOVING))
    {
        Frame->OnMouseMove( (wxMouseEvent&)event );
        return true;
    }
    if ((event.GetEventType() == wxEVT_KEY_DOWN))
    {
//        if(((wxKeyEvent&)event).GetKeyCode()==wxKeyCode::WXK_ESCAPE)
//        {
//            CleanUp();
//            exit(2);
//        }
        Frame->OnChar( (wxKeyEvent&)event );
        return true;
    }
    return -1;
}

void key2App::CleanUp()
{
    //wxMessageBox("macar");
    delete m_taskBarIcon;
}

bool key2App::OnInit()
{
    m_taskBarIcon=NULL;
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	Frame = new key2Frame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
     m_taskBarIcon = new MyTaskBarIcon();
     wxIcon FrameIcon;
     FrameIcon.CopyFromBitmap(wxBitmap(wxImage(_T("da.ico"))));
     if ( !m_taskBarIcon->SetIcon(FrameIcon,"") )
     {
         wxMessageBox(wxT("Something went wrong..."));
     }
    return wxsOK;

}
