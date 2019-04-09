/***************************************************************
 * Name:      key2Main.cpp
 * Purpose:   Code for Application Frame
 * Author:     ()
 * Created:   2016-11-09
 * Copyright:  ()
 * License:
 **************************************************************/

#include "key2Main.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(key2Frame)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)


#include "huk.h"
#include "wx/bitmap.h"
#include "wx/log.h"




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

//(*IdInit(key2Frame)
const long key2Frame::ID_STATICTEXT1 = wxNewId();
const long key2Frame::ID_STATICTEXT2 = wxNewId();
const long key2Frame::ID_STATICTEXT3 = wxNewId();
const long key2Frame::ID_PANEL1 = wxNewId();
const long key2Frame::ID_TIMER1 = wxNewId();
const long key2Frame::ID_MENUITEM1 = wxNewId();
const long key2Frame::ID_MENUITEM2 = wxNewId();
const long key2Frame::ID_MENUITEM3 = wxNewId();
//*)

void key2Frame::handlerFuncName(wxMouseCaptureLostEvent& event)
{


}
BEGIN_EVENT_TABLE(key2Frame,wxFrame)
    //(*EventTable(key2Frame)
    //*)
    EVT_MOUSE_CAPTURE_LOST(key2Frame::handlerFuncName)
END_EVENT_TABLE()



key2Frame::key2Frame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(key2Frame)
    wxFlexGridSizer* FlexGridSizer1;

    Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSTAY_ON_TOP|wxFRAME_SHAPED, _T("wxID_ANY"));
    SetClientSize(wxSize(300,200));
    SetBackgroundColour(wxColour(48,48,48));
    Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    Panel1->SetBackgroundColour(wxColour(0,0,0));
    FlexGridSizer1 = new wxFlexGridSizer(0, 1, 0, 0);
    FlexGridSizer1->AddGrowableCol(0);
    StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("Label"), wxDefaultPosition, wxDefaultSize, wxST_NO_AUTORESIZE|wxALIGN_CENTRE, _T("ID_STATICTEXT1"));
    StaticText1->SetForegroundColour(wxColour(255,255,255));
    StaticText1->SetBackgroundColour(wxColour(0,0,0));
    wxFont StaticText1Font(18,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Trebuchet MS"),wxFONTENCODING_DEFAULT);
    StaticText1->SetFont(StaticText1Font);
    FlexGridSizer1->Add(StaticText1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, _("Label"), wxDefaultPosition, wxDefaultSize, wxST_NO_AUTORESIZE|wxALIGN_CENTRE, _T("ID_STATICTEXT2"));
    StaticText2->SetForegroundColour(wxColour(255,255,255));
    StaticText2->SetBackgroundColour(wxColour(0,0,0));
    wxFont StaticText2Font(18,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Trebuchet MS"),wxFONTENCODING_DEFAULT);
    StaticText2->SetFont(StaticText2Font);
    FlexGridSizer1->Add(StaticText2, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText3 = new wxStaticText(Panel1, ID_STATICTEXT3, _("Label"), wxDefaultPosition, wxDefaultSize, wxST_NO_AUTORESIZE|wxALIGN_CENTRE, _T("ID_STATICTEXT3"));
    StaticText3->SetForegroundColour(wxColour(255,255,255));
    StaticText3->SetBackgroundColour(wxColour(0,0,0));
    wxFont StaticText3Font(18,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Trebuchet MS"),wxFONTENCODING_DEFAULT);
    StaticText3->SetFont(StaticText3Font);
    FlexGridSizer1->Add(StaticText3, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel1->SetSizer(FlexGridSizer1);
    FlexGridSizer1->Fit(Panel1);
    FlexGridSizer1->SetSizeHints(Panel1);
    Timer1.SetOwner(this, ID_TIMER1);
    MenuItem1 = new wxMenuItem((&Menu1), ID_MENUITEM1, _("Settings"), wxEmptyString, wxITEM_NORMAL);
    Menu1.Append(MenuItem1);
    MenuItem2 = new wxMenuItem((&Menu1), ID_MENUITEM2, _("About"), wxEmptyString, wxITEM_NORMAL);
    Menu1.Append(MenuItem2);
    Menu1.AppendSeparator();
    MenuItem3 = new wxMenuItem((&Menu1), ID_MENUITEM3, _("Exit"), wxEmptyString, wxITEM_NORMAL);
    Menu1.Append(MenuItem3);

    Panel1->Connect(wxEVT_CHAR,(wxObjectEventFunction)&key2Frame::OnChar,0,this);
    Panel1->Connect(wxEVT_LEFT_DOWN,(wxObjectEventFunction)&key2Frame::OnLeftDown,0,this);
    Panel1->Connect(wxEVT_LEFT_UP,(wxObjectEventFunction)&key2Frame::OnLeftUp,0,this);
    Panel1->Connect(wxEVT_MOTION,(wxObjectEventFunction)&key2Frame::OnMouseMove,0,this);
    Connect(ID_TIMER1,wxEVT_TIMER,(wxObjectEventFunction)&key2Frame::OnTimer1Trigger);
    Connect(wxEVT_CHAR,(wxObjectEventFunction)&key2Frame::OnChar);
    Connect(wxEVT_LEFT_DOWN,(wxObjectEventFunction)&key2Frame::OnLeftDown);
    Connect(wxEVT_LEFT_UP,(wxObjectEventFunction)&key2Frame::OnLeftUp);
    Connect(wxEVT_MOTION,(wxObjectEventFunction)&key2Frame::OnMouseMove);
    //*)

    this->SetSize(300,129);


    //this->SetSize(300,403);
//    TextCtrl1->SetFocus();
//    TextCtrl1->ShowNativeCaret(false);
//    TextCtrl1->HideNativeCaret();
    Panel1->Layout();
    Panel1->Refresh();
    Timer1.Start(100);

        MyHook::Instance().InstallHook();


    StaticText1->SetLabel("");
    StaticText2->SetLabel("");
    StaticText3->SetLabel("");
    //SetTransparent(200);
    lines=1;
    setLines(1);



}

key2Frame::~key2Frame()
{
	MyHook::Instance().UninstallHook(); //if we close, let's uninstall our hook
    //(*Destroy(key2Frame)
    //*)
}

void key2Frame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void key2Frame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}
int asteapta=0;
void key2Frame::OnLeftDown(wxMouseEvent& evt)
{
    asteapta=1;
        timy=clock();
   CaptureMouse();
   wxPoint pos = ClientToScreen(evt.GetPosition());
   wxPoint origin = GetPosition();
   int dx =  pos.x - origin.x;
   int dy = pos.y - origin.y;
   m_delta = wxPoint(dx, dy);
   evt.Skip();
}

void key2Frame::OnLeftUp(wxMouseEvent& evt)
{
   if (HasCapture())
    {
        asteapta=0;
        ReleaseMouse();
    }
}

void key2Frame::OnMouseMove(wxMouseEvent& evt)
{

    wxPoint pt = evt.GetPosition();
   if (evt.Dragging() || evt.LeftIsDown())
   {
        wxPoint pos = ClientToScreen(pt);
        Move(wxPoint(pos.x - m_delta.x, pos.y - m_delta.y));
    }
}

void key2Frame::setLines(int r)
{
    if(r>3)
        r=3;
    if(r<1)
        r=1;
    lines=r;
    {
        wxString ichar="";
        ichar<<r<<".bmp";
        wxLogNull logNo;
        wxBitmap m_bmp;
        m_bmp = wxBitmap(ichar, wxBITMAP_TYPE_BMP);
       wxRegion regy(m_bmp, *wxWHITE);
        SetShape(regy);
    } // ~wxLogNull called, old log sink restored
}
void key2Frame::OnChar(wxKeyEvent& event)
{
//    if(event.GetKeyCode()==wxKeyCode::WXK_ESCAPE)
//    {
//        Close();
//        //exit(2);
//    }
}


int key2Frame::Brick(wxString x)
{
    if(StaticText1->GetTextExtent(x).x<=290)
        return 0;
    int poz=0;
    for(int a=0;a<x.length();a++)
    {
        wxString r=x.substr(0,a);
        if(StaticText1->GetTextExtent(r).x>290 && poz==0)
            return a-1;
        if(StaticText1->GetTextExtent(r).x>290)
            return poz;
        if(x[a]==' ')
            poz=a;
    }
}
void key2Frame::OnTimer1Trigger(wxTimerEvent& event)
{
    Timer1.Stop();
    //if(rand()%1000==0)




    ///mouse////



    MyHook::Instance().Messsages();
    //StaticText1->SetLabel(whatToShow);
    {
        wxString l1="",l2="",l3="";
        wxString r=whatToShow;
        int br=Brick(r);
        if(br==0)
        {
            if(lines!=1)
                setLines(1);
            l1=r;
        }
        else
        {
            l1=r.substr(0,br);
            r=r.substr(br);
            int br2=Brick(r);
            if(br2==0)
            {
                l2=r;
                if(lines!=2)
                    setLines(2);
            }
            else
            {
                l2=r.substr(0,br2);
                l3=r.substr(br2);
                if(lines!=3)
                    setLines(3);
            }
        }
        if(StaticText1->GetLabelText().compare(l1)!=0)StaticText1->SetLabelText(l1);
        if(StaticText2->GetLabelText().compare(l2)!=0)StaticText2->SetLabelText(l2);
        if(StaticText3->GetLabelText().compare(l3)!=0)StaticText3->SetLabelText(l3);
    }






    if(asteapta==1)
        timy=clock();
    if(clock()-timy>2000 && clock()-timy<2500)
    {
        eBine=false;
        for(int a=175;a>=0 && clock()-timy>2000 && clock()-timy<2500;a-=3)
        {
            SetTransparent(a);
            MyHook::Instance().Messsages();
        }
        if(clock()<2000 || asteapta)
        {
            Timer1.Start(30);
            return;
        }
        //dfgRemoveTransparent();
        //HideWithEffect(wxSHOW_EFFECT_BLEND, 300);
        this->Show(false);
    }
    if(clock()-timy<2000)
    {
        this->ShowWithoutActivating();
        SetTransparent(200);
    }
    ///keys


    Timer1.Start(30);
}
