//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: wxcrafter.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "wxcrafter_plugin.h"
#include "codelite_exports.h"


// Declare the bitmap loading function
extern void wxC9D6CInitBitmapResources();

static bool bBitmapLoaded = false;


EditDlgBase::EditDlgBase(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC9D6CInitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* boxSizer2 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer2);
    
    m_stc10 = new wxStyledTextCtrl(this, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), 0);
    m_stc10->SetFocus();
    // Configure the fold margin
    m_stc10->SetMarginType     (4, wxSTC_MARGIN_SYMBOL);
    m_stc10->SetMarginMask     (4, wxSTC_MASK_FOLDERS);
    m_stc10->SetMarginSensitive(4, true);
    m_stc10->SetMarginWidth    (4, 0);
    
    // Configure the tracker margin
    m_stc10->SetMarginWidth(1, 0);
    
    // Configure the symbol margin
    m_stc10->SetMarginType (2, wxSTC_MARGIN_SYMBOL);
    m_stc10->SetMarginMask (2, ~(wxSTC_MASK_FOLDERS));
    m_stc10->SetMarginWidth(2, 0);
    m_stc10->SetMarginSensitive(2, true);
    
    // Configure the line numbers margin
    m_stc10->SetMarginType(0, wxSTC_MARGIN_NUMBER);
    m_stc10->SetMarginWidth(0,0);
    
    // Configure the line symbol margin
    m_stc10->SetMarginType(3, wxSTC_MARGIN_FORE);
    m_stc10->SetMarginMask(3, 0);
    m_stc10->SetMarginWidth(3,0);
    // Select the lexer
    m_stc10->SetLexer(wxSTC_LEX_NULL);
    // Set default font / styles
    m_stc10->StyleClearAll();
    m_stc10->SetWrapMode(0);
    m_stc10->SetIndentationGuides(0);
    m_stc10->SetKeyWords(0, wxT(""));
    m_stc10->SetKeyWords(1, wxT(""));
    m_stc10->SetKeyWords(2, wxT(""));
    m_stc10->SetKeyWords(3, wxT(""));
    m_stc10->SetKeyWords(4, wxT(""));
    
    boxSizer2->Add(m_stc10, 1, wxALL|wxEXPAND, 5);
    
    wxBoxSizer* boxSizer4 = new wxBoxSizer(wxHORIZONTAL);
    
    boxSizer2->Add(boxSizer4, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    
    m_button6 = new wxButton(this, wxID_OK, _("&OK"), wxDefaultPosition, wxSize(-1,-1), 0);
    m_button6->SetDefault();
    
    boxSizer4->Add(m_button6, 0, wxALL, 5);
    
    m_button8 = new wxButton(this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    boxSizer4->Add(m_button8, 0, wxALL, 5);
    
    SetSizeHints(-1,-1);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    Centre(wxBOTH);
}

EditDlgBase::~EditDlgBase()
{
}

DiffSideBySidePanelBase::DiffSideBySidePanelBase(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style)
    : wxPanel(parent, id, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC9D6CInitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* boxSizer13 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer13);
    
    m_ribbonBar41 = new wxRibbonBar(this, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxRIBBON_BAR_DEFAULT_STYLE);
    m_ribbonBar41->SetArtProvider(new wxRibbonDefaultArtProvider);
    
    boxSizer13->Add(m_ribbonBar41, 0, wxALL|wxEXPAND, 2);
    
    m_ribbonPage43 = new wxRibbonPage(m_ribbonBar41, wxID_ANY, _("Text Files Comparison"), wxNullBitmap, 0);
    m_ribbonBar41->SetActivePage( m_ribbonPage43 );
    
    m_ribbonPanel47 = new wxRibbonPanel(m_ribbonPage43, wxID_ANY, _("Comparison"), wxNullBitmap, wxDefaultPosition, wxSize(-1,-1), wxRIBBON_PANEL_DEFAULT_STYLE);
    
    m_ribbonButtonBar49 = new wxRibbonButtonBar(m_ribbonPanel47, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), 0);
    
    m_ribbonButtonBar49->AddButton(wxID_REFRESH, _("Refresh View"), wxXmlResource::Get()->LoadBitmap(wxT("diff-refresh")), _("Refresh View"), wxRIBBON_BUTTON_NORMAL);
    
    m_ribbonButtonBar49->AddButton(wxID_DOWN, _("Next Diff"), wxXmlResource::Get()->LoadBitmap(wxT("diff-next")), _("Next Diff"), wxRIBBON_BUTTON_NORMAL);
    
    m_ribbonButtonBar49->AddButton(wxID_UP, _("Previous Diff"), wxXmlResource::Get()->LoadBitmap(wxT("diff-prev")), _("Previous Diff"), wxRIBBON_BUTTON_NORMAL);
    m_ribbonButtonBar49->Realize();
    
    m_ribbonPanel83 = new wxRibbonPanel(m_ribbonPage43, wxID_ANY, _("Edit"), wxNullBitmap, wxDefaultPosition, wxSize(-1,-1), wxRIBBON_PANEL_DEFAULT_STYLE);
    
    m_ribbonButtonBar85 = new wxRibbonButtonBar(m_ribbonPanel83, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), 0);
    
    m_ribbonButtonBar85->AddButton(ID_TOOL_COPY_DIFF_LEFT_TO_RIGHT, _("Copy from left"), wxXmlResource::Get()->LoadBitmap(wxT("diff-copy-left-to-right")), _("Copy current diff sequence from the left side to the right side"), wxRIBBON_BUTTON_NORMAL);
    
    m_ribbonButtonBar85->AddButton(ID_TOOL_COPY_DIFF_RIGHT_TO_LEFT, _("Copy from right"), wxXmlResource::Get()->LoadBitmap(wxT("diff-copy-right-to-left")), _("Copy current diff sequence from the right side to the left side"), wxRIBBON_BUTTON_NORMAL);
    
    m_ribbonButtonBar85->AddButton(ID_TOOL_COPY_FILE_LEFT_TO_RIGHT, _("Copy file from left"), wxXmlResource::Get()->LoadBitmap(wxT("diff-copy-file-left-to-right")), _("Copy the content of the left file to the right file"), wxRIBBON_BUTTON_NORMAL);
    
    m_ribbonButtonBar85->AddButton(ID_TOOL_COPY_FILE_RIGHT_TO_LEFT, _("Copy file from right"), wxXmlResource::Get()->LoadBitmap(wxT("diff-copy-file-right-to-left")), _("Copy file from right to left"), wxRIBBON_BUTTON_NORMAL);
    
    m_ribbonButtonBar85->AddButton(ID_TOOL_SAVE, _("Save"), wxXmlResource::Get()->LoadBitmap(wxT("diff-save")), _("Save changes and refresh the diff view"), wxRIBBON_BUTTON_NORMAL);
    m_ribbonButtonBar85->Realize();
    m_ribbonBar41->Realize();
    m_splitter101 = new wxSplitterWindow(this, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxSP_LIVE_UPDATE|wxSP_NO_XP_THEME|wxSP_3DSASH);
    m_splitter101->SetSashGravity(0.5);
    m_splitter101->SetMinimumPaneSize(10);
    
    boxSizer13->Add(m_splitter101, 1, wxALL|wxEXPAND, 2);
    
    m_splitterPage105 = new wxPanel(m_splitter101, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTAB_TRAVERSAL);
    
    wxBoxSizer* boxSizer111 = new wxBoxSizer(wxVERTICAL);
    m_splitterPage105->SetSizer(boxSizer111);
    
    m_filePickerLeft = new wxFilePickerCtrl(m_splitterPage105, wxID_ANY, wxEmptyString, wxT("Select a file"), wxT("*"), wxDefaultPosition, wxSize(-1,-1), wxFLP_DEFAULT_STYLE|wxFLP_USE_TEXTCTRL|wxFLP_SMALL);
    
    boxSizer111->Add(m_filePickerLeft, 0, wxALL|wxEXPAND, 2);
    
    m_stcLeft = new wxStyledTextCtrl(m_splitterPage105, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), 0);
    m_stcLeft->SetFocus();
    // Configure the fold margin
    m_stcLeft->SetMarginType     (4, wxSTC_MARGIN_SYMBOL);
    m_stcLeft->SetMarginMask     (4, wxSTC_MASK_FOLDERS);
    m_stcLeft->SetMarginSensitive(4, true);
    m_stcLeft->SetMarginWidth    (4, 0);
    
    // Configure the tracker margin
    m_stcLeft->SetMarginWidth(1, 0);
    
    // Configure the symbol margin
    m_stcLeft->SetMarginType (2, wxSTC_MARGIN_SYMBOL);
    m_stcLeft->SetMarginMask (2, ~(wxSTC_MASK_FOLDERS));
    m_stcLeft->SetMarginWidth(2, 16);
    m_stcLeft->SetMarginSensitive(2, true);
    
    // Configure the line numbers margin
    m_stcLeft->SetMarginType(0, wxSTC_MARGIN_NUMBER);
    m_stcLeft->SetMarginWidth(0,0);
    
    // Configure the line symbol margin
    m_stcLeft->SetMarginType(3, wxSTC_MARGIN_FORE);
    m_stcLeft->SetMarginMask(3, 0);
    m_stcLeft->SetMarginWidth(3,0);
    // Select the lexer
    m_stcLeft->SetLexer(wxSTC_LEX_NULL);
    // Set default font / styles
    m_stcLeft->StyleClearAll();
    m_stcLeft->SetWrapMode(0);
    m_stcLeft->SetIndentationGuides(0);
    m_stcLeft->SetKeyWords(0, wxT(""));
    m_stcLeft->SetKeyWords(1, wxT(""));
    m_stcLeft->SetKeyWords(2, wxT(""));
    m_stcLeft->SetKeyWords(3, wxT(""));
    m_stcLeft->SetKeyWords(4, wxT(""));
    
    boxSizer111->Add(m_stcLeft, 1, wxALL|wxEXPAND, 2);
    
    m_staticTextLeft = new wxStaticText(m_splitterPage105, wxID_ANY, _("Static Text Label"), wxDefaultPosition, wxSize(-1,-1), 0);
    wxFont m_staticTextLeftFont = wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT);
    m_staticTextLeftFont.SetWeight(wxFONTWEIGHT_BOLD);
    m_staticTextLeft->SetFont(m_staticTextLeftFont);
    
    boxSizer111->Add(m_staticTextLeft, 0, wxALL|wxALIGN_LEFT, 2);
    
    m_splitterPage109 = new wxPanel(m_splitter101, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTAB_TRAVERSAL);
    m_splitter101->SplitVertically(m_splitterPage105, m_splitterPage109, 0);
    
    wxBoxSizer* boxSizer113 = new wxBoxSizer(wxVERTICAL);
    m_splitterPage109->SetSizer(boxSizer113);
    
    m_filePickerRight = new wxFilePickerCtrl(m_splitterPage109, wxID_ANY, wxEmptyString, wxT("Select a file"), wxT("*"), wxDefaultPosition, wxSize(-1,-1), wxFLP_DEFAULT_STYLE|wxFLP_USE_TEXTCTRL|wxFLP_SMALL);
    
    boxSizer113->Add(m_filePickerRight, 0, wxALL|wxEXPAND, 2);
    
    m_stcRight = new wxStyledTextCtrl(m_splitterPage109, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), 0);
    // Configure the fold margin
    m_stcRight->SetMarginType     (4, wxSTC_MARGIN_SYMBOL);
    m_stcRight->SetMarginMask     (4, wxSTC_MASK_FOLDERS);
    m_stcRight->SetMarginSensitive(4, true);
    m_stcRight->SetMarginWidth    (4, 0);
    
    // Configure the tracker margin
    m_stcRight->SetMarginWidth(1, 0);
    
    // Configure the symbol margin
    m_stcRight->SetMarginType (2, wxSTC_MARGIN_SYMBOL);
    m_stcRight->SetMarginMask (2, ~(wxSTC_MASK_FOLDERS));
    m_stcRight->SetMarginWidth(2, 16);
    m_stcRight->SetMarginSensitive(2, true);
    
    // Configure the line numbers margin
    m_stcRight->SetMarginType(0, wxSTC_MARGIN_NUMBER);
    m_stcRight->SetMarginWidth(0,0);
    
    // Configure the line symbol margin
    m_stcRight->SetMarginType(3, wxSTC_MARGIN_FORE);
    m_stcRight->SetMarginMask(3, 0);
    m_stcRight->SetMarginWidth(3,0);
    // Select the lexer
    m_stcRight->SetLexer(wxSTC_LEX_NULL);
    // Set default font / styles
    m_stcRight->StyleClearAll();
    m_stcRight->SetWrapMode(0);
    m_stcRight->SetIndentationGuides(0);
    m_stcRight->SetKeyWords(0, wxT(""));
    m_stcRight->SetKeyWords(1, wxT(""));
    m_stcRight->SetKeyWords(2, wxT(""));
    m_stcRight->SetKeyWords(3, wxT(""));
    m_stcRight->SetKeyWords(4, wxT(""));
    
    boxSizer113->Add(m_stcRight, 1, wxALL|wxEXPAND, 2);
    
    m_staticTextRight = new wxStaticText(m_splitterPage109, wxID_ANY, _("Static Text Label"), wxDefaultPosition, wxSize(-1,-1), 0);
    wxFont m_staticTextRightFont = wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT);
    m_staticTextRightFont.SetWeight(wxFONTWEIGHT_BOLD);
    m_staticTextRight->SetFont(m_staticTextRightFont);
    
    boxSizer113->Add(m_staticTextRight, 0, wxALL|wxALIGN_LEFT, 2);
    
    SetSizeHints(500,500);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    Centre(wxBOTH);
    // Connect events
    m_ribbonButtonBar49->Connect(wxID_REFRESH, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(DiffSideBySidePanelBase::OnRefreshDiff), NULL, this);
    m_ribbonButtonBar49->Connect(wxID_DOWN, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(DiffSideBySidePanelBase::OnNextDiffSequence), NULL, this);
    m_ribbonButtonBar49->Connect(wxID_DOWN, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(DiffSideBySidePanelBase::OnNextDiffUI), NULL, this);
    m_ribbonButtonBar49->Connect(wxID_UP, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(DiffSideBySidePanelBase::OnPrevDiffSequence), NULL, this);
    m_ribbonButtonBar49->Connect(wxID_UP, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(DiffSideBySidePanelBase::OnPrevDiffUI), NULL, this);
    m_ribbonButtonBar85->Connect(ID_TOOL_COPY_DIFF_LEFT_TO_RIGHT, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(DiffSideBySidePanelBase::OnCopyLeftToRightUI), NULL, this);
    m_ribbonButtonBar85->Connect(ID_TOOL_COPY_DIFF_LEFT_TO_RIGHT, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(DiffSideBySidePanelBase::OnCopyLeftToRight), NULL, this);
    m_ribbonButtonBar85->Connect(ID_TOOL_COPY_DIFF_RIGHT_TO_LEFT, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(DiffSideBySidePanelBase::OnCopyRightToLeftUI), NULL, this);
    m_ribbonButtonBar85->Connect(ID_TOOL_COPY_DIFF_RIGHT_TO_LEFT, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(DiffSideBySidePanelBase::OnCopyRightToLeft), NULL, this);
    m_ribbonButtonBar85->Connect(ID_TOOL_COPY_FILE_LEFT_TO_RIGHT, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(DiffSideBySidePanelBase::OnCopyFileLeftToRight), NULL, this);
    m_ribbonButtonBar85->Connect(ID_TOOL_COPY_FILE_LEFT_TO_RIGHT, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(DiffSideBySidePanelBase::OnCopyLeftToRightUI), NULL, this);
    m_ribbonButtonBar85->Connect(ID_TOOL_COPY_FILE_RIGHT_TO_LEFT, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(DiffSideBySidePanelBase::OnCopyFileFromRight), NULL, this);
    m_ribbonButtonBar85->Connect(ID_TOOL_COPY_FILE_RIGHT_TO_LEFT, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(DiffSideBySidePanelBase::OnCopyRightToLeftUI), NULL, this);
    m_ribbonButtonBar85->Connect(ID_TOOL_SAVE, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(DiffSideBySidePanelBase::OnSaveChanges), NULL, this);
    m_ribbonButtonBar85->Connect(ID_TOOL_SAVE, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(DiffSideBySidePanelBase::OnSaveChangesUI), NULL, this);
    m_stcLeft->Connect(wxEVT_STC_PAINTED, wxStyledTextEventHandler(DiffSideBySidePanelBase::OnLeftStcPainted), NULL, this);
    m_stcRight->Connect(wxEVT_STC_PAINTED, wxStyledTextEventHandler(DiffSideBySidePanelBase::OnRightStcPainted), NULL, this);
    
}

DiffSideBySidePanelBase::~DiffSideBySidePanelBase()
{
    m_ribbonButtonBar49->Disconnect(wxID_REFRESH, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(DiffSideBySidePanelBase::OnRefreshDiff), NULL, this);
    m_ribbonButtonBar49->Disconnect(wxID_DOWN, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(DiffSideBySidePanelBase::OnNextDiffSequence), NULL, this);
    m_ribbonButtonBar49->Disconnect(wxID_DOWN, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(DiffSideBySidePanelBase::OnNextDiffUI), NULL, this);
    m_ribbonButtonBar49->Disconnect(wxID_UP, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(DiffSideBySidePanelBase::OnPrevDiffSequence), NULL, this);
    m_ribbonButtonBar49->Disconnect(wxID_UP, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(DiffSideBySidePanelBase::OnPrevDiffUI), NULL, this);
    m_ribbonButtonBar85->Disconnect(ID_TOOL_COPY_DIFF_LEFT_TO_RIGHT, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(DiffSideBySidePanelBase::OnCopyLeftToRightUI), NULL, this);
    m_ribbonButtonBar85->Disconnect(ID_TOOL_COPY_DIFF_LEFT_TO_RIGHT, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(DiffSideBySidePanelBase::OnCopyLeftToRight), NULL, this);
    m_ribbonButtonBar85->Disconnect(ID_TOOL_COPY_DIFF_RIGHT_TO_LEFT, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(DiffSideBySidePanelBase::OnCopyRightToLeftUI), NULL, this);
    m_ribbonButtonBar85->Disconnect(ID_TOOL_COPY_DIFF_RIGHT_TO_LEFT, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(DiffSideBySidePanelBase::OnCopyRightToLeft), NULL, this);
    m_ribbonButtonBar85->Disconnect(ID_TOOL_COPY_FILE_LEFT_TO_RIGHT, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(DiffSideBySidePanelBase::OnCopyFileLeftToRight), NULL, this);
    m_ribbonButtonBar85->Disconnect(ID_TOOL_COPY_FILE_LEFT_TO_RIGHT, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(DiffSideBySidePanelBase::OnCopyLeftToRightUI), NULL, this);
    m_ribbonButtonBar85->Disconnect(ID_TOOL_COPY_FILE_RIGHT_TO_LEFT, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(DiffSideBySidePanelBase::OnCopyFileFromRight), NULL, this);
    m_ribbonButtonBar85->Disconnect(ID_TOOL_COPY_FILE_RIGHT_TO_LEFT, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(DiffSideBySidePanelBase::OnCopyRightToLeftUI), NULL, this);
    m_ribbonButtonBar85->Disconnect(ID_TOOL_SAVE, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(DiffSideBySidePanelBase::OnSaveChanges), NULL, this);
    m_ribbonButtonBar85->Disconnect(ID_TOOL_SAVE, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(DiffSideBySidePanelBase::OnSaveChangesUI), NULL, this);
    m_stcLeft->Disconnect(wxEVT_STC_PAINTED, wxStyledTextEventHandler(DiffSideBySidePanelBase::OnLeftStcPainted), NULL, this);
    m_stcRight->Disconnect(wxEVT_STC_PAINTED, wxStyledTextEventHandler(DiffSideBySidePanelBase::OnRightStcPainted), NULL, this);
    
}
