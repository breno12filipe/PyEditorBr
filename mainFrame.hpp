#include <iostream>
#include <wx/wx.h>
#include <wx/richtext/richtextctrl.h>
#include <wx/dirdlg.h>
#include <wx/textdlg.h>
#include "./fileEngine/fileEngine.hpp"

class MainFrame : public wxFrame {
    private:
        wxRichTextCtrl* m_richText1;
        bool autoSave = false;
    public:
        MainFrame(const wxString& title);
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnOpen(wxCommandEvent& event);
        void OnNew(wxCommandEvent& event);
        //void OnSave(wxCommandEvent& event);
        void OnKeyDown(wxKeyEvent& event);
        void ToggleAutoSave(wxCommandEvent& event);
};