///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.1.0-3-g43bf300c)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "View.h"

///////////////////////////////////////////////////////////////////////////

Main_Frame::Main_Frame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxColour( 49, 79, 120 ) );

	wxBoxSizer* bSizerMainPanel;
	bSizerMainPanel = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizerPanelMain;
	bSizerPanelMain = new wxBoxSizer( wxVERTICAL );

	m_panel2 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxSize( 900,600 ), wxTAB_TRAVERSAL );
	wxBoxSizer* bSizerPanel;
	bSizerPanel = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizerPanelItems;
	bSizerPanelItems = new wxBoxSizer( wxHORIZONTAL );

	m_buttonDoctor = new wxButton( m_panel2, wxID_ANY, wxT("Доктор"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerPanelItems->Add( m_buttonDoctor, 0, wxALL, 5 );

	m_buttonNurse = new wxButton( m_panel2, wxID_ANY, wxT("Медсестра"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerPanelItems->Add( m_buttonNurse, 0, wxALL, 5 );

	m_buttonWorker = new wxButton( m_panel2, wxID_ANY, wxT("Работник"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerPanelItems->Add( m_buttonWorker, 0, wxALL, 5 );


	bSizerPanel->Add( bSizerPanelItems, 0, wxALL, 0 );

	wxBoxSizer* bSizerExit;
	bSizerExit = new wxBoxSizer( wxVERTICAL );

	m_buttonExitHospital = new wxButton( m_panel2, wxID_ANY, wxT("Выход"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerExit->Add( m_buttonExitHospital, 0, wxALL, 5 );


	bSizerPanel->Add( bSizerExit, 0, wxALL, 0 );


	m_panel2->SetSizer( bSizerPanel );
	m_panel2->Layout();
	bSizerPanelMain->Add( m_panel2, 1, wxEXPAND|wxALL, 0 );


	bSizerMainPanel->Add( bSizerPanelMain, 1, wxEXPAND, 5 );


	this->SetSizer( bSizerMainPanel );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_buttonDoctor->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Main_Frame::m_buttonDoctorOnButtonClick ), NULL, this );
	m_buttonNurse->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Main_Frame::m_buttonNurseOnButtonClick ), NULL, this );
	m_buttonWorker->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Main_Frame::m_buttonWorkerOnButtonClick ), NULL, this );
	m_buttonExitHospital->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Main_Frame::m_buttonExitHospitalOnButtonClick ), NULL, this );
}

Main_Frame::~Main_Frame()
{
	// Disconnect Events
	m_buttonDoctor->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Main_Frame::m_buttonDoctorOnButtonClick ), NULL, this );
	m_buttonNurse->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Main_Frame::m_buttonNurseOnButtonClick ), NULL, this );
	m_buttonWorker->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Main_Frame::m_buttonWorkerOnButtonClick ), NULL, this );
	m_buttonExitHospital->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Main_Frame::m_buttonExitHospitalOnButtonClick ), NULL, this );

}

Doctor_Frame::Doctor_Frame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
    this->SetSizeHints( wxDefaultSize, wxDefaultSize );
    this->SetBackgroundColour( wxColour( 49, 79, 120 ) );

    wxBoxSizer* bSizerMainPanel;
    bSizerMainPanel = new wxBoxSizer( wxHORIZONTAL );

    m_panel2 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxSize( 900,600 ), wxTAB_TRAVERSAL );
    wxBoxSizer* bSizerPanel;
    bSizerPanel = new wxBoxSizer( wxVERTICAL );

    wxBoxSizer* bSizerPanelItems;
    bSizerPanelItems = new wxBoxSizer( wxHORIZONTAL );

    wxBoxSizer* bSizerPanelItemsPatients;
    bSizerPanelItemsPatients = new wxBoxSizer( wxVERTICAL );

    m_buttonDoctorPatients = new wxButton( m_panel2, wxID_ANY, wxT("Пациенты"), wxDefaultPosition, wxDefaultSize, 0 );
    bSizerPanelItemsPatients->Add( m_buttonDoctorPatients, 0, wxALL, 5 );

    m_buttonDoctorCreatePatient = new wxButton( m_panel2, wxID_ANY, wxT("Создать пациента"), wxDefaultPosition, wxDefaultSize, 0 );
    bSizerPanelItemsPatients->Add( m_buttonDoctorCreatePatient, 0, wxALL, 5 );

    m_buttonDeletePatient = new wxButton( m_panel2, wxID_ANY, wxT("Удалить пациента"), wxDefaultPosition, wxDefaultSize, 0 );
    bSizerPanelItemsPatients->Add( m_buttonDeletePatient, 0, wxALL, 5 );


    bSizerPanelItems->Add( bSizerPanelItemsPatients, 0, wxALL, 5 );

    wxBoxSizer* bSizerPanelItemsCourses;
    bSizerPanelItemsCourses = new wxBoxSizer( wxVERTICAL );

    m_buttonDoctorCurses = new wxButton( m_panel2, wxID_ANY, wxT("Курсы лечения"), wxDefaultPosition, wxDefaultSize, 0 );
    bSizerPanelItemsCourses->Add( m_buttonDoctorCurses, 0, wxALL, 5 );

    m_buttonDoctorCreateCourse = new wxButton( m_panel2, wxID_ANY, wxT("Создать курс лечения"), wxDefaultPosition, wxDefaultSize, 0 );
    bSizerPanelItemsCourses->Add( m_buttonDoctorCreateCourse, 0, wxALL, 5 );

    m_buttonDeleteCourse = new wxButton( m_panel2, wxID_ANY, wxT("Удалить курс лечения"), wxDefaultPosition, wxDefaultSize, 0 );
    bSizerPanelItemsCourses->Add( m_buttonDeleteCourse, 0, wxALL, 5 );


    bSizerPanelItems->Add( bSizerPanelItemsCourses, 0, wxALL, 5 );


    bSizerPanel->Add( bSizerPanelItems, 0, wxALL, 0 );

    wxBoxSizer* bSizerBack;
    bSizerBack = new wxBoxSizer( wxVERTICAL );

    m_buttonDoctorBack = new wxButton( m_panel2, wxID_ANY, wxT("Назад"), wxDefaultPosition, wxDefaultSize, 0 );
    bSizerBack->Add( m_buttonDoctorBack, 0, wxALL, 5 );


    bSizerPanel->Add( bSizerBack, 0, wxALL, 5 );


    m_panel2->SetSizer( bSizerPanel );
    m_panel2->Layout();
    bSizerMainPanel->Add( m_panel2, 1, wxEXPAND|wxALL, 0 );


    this->SetSizer( bSizerMainPanel );
    this->Layout();

    this->Centre( wxBOTH );

    // Connect Events
    m_buttonDoctorPatients->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Doctor_Frame::m_buttonDoctorPatientsOnButtonClick ), NULL, this );
    m_buttonDoctorCreatePatient->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Doctor_Frame::m_buttonDoctorCreatePatientOnButtonClick ), NULL, this );
    m_buttonDeletePatient->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Doctor_Frame::m_buttonDeletePatientOnButtonClick ), NULL, this );
    m_buttonDoctorCurses->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Doctor_Frame::m_buttonDoctorCursesOnButtonClick ), NULL, this );
    m_buttonDoctorCreateCourse->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Doctor_Frame::m_buttonDoctorCreateCourseOnButtonClick ), NULL, this );
    m_buttonDeleteCourse->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Doctor_Frame::m_buttonDeleteCourseOnButtonClick ), NULL, this );
    m_buttonDoctorBack->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Doctor_Frame::m_buttonDoctorBackOnButtonClick ), NULL, this );
}

Doctor_Frame::~Doctor_Frame()
{
    // Disconnect Events
    m_buttonDoctorPatients->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Doctor_Frame::m_buttonDoctorPatientsOnButtonClick ), NULL, this );
    m_buttonDoctorCreatePatient->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Doctor_Frame::m_buttonDoctorCreatePatientOnButtonClick ), NULL, this );
    m_buttonDeletePatient->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Doctor_Frame::m_buttonDeletePatientOnButtonClick ), NULL, this );
    m_buttonDoctorCurses->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Doctor_Frame::m_buttonDoctorCursesOnButtonClick ), NULL, this );
    m_buttonDoctorCreateCourse->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Doctor_Frame::m_buttonDoctorCreateCourseOnButtonClick ), NULL, this );
    m_buttonDeleteCourse->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Doctor_Frame::m_buttonDeleteCourseOnButtonClick ), NULL, this );
    m_buttonDoctorBack->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Doctor_Frame::m_buttonDoctorBackOnButtonClick ), NULL, this );

}

Doctor_Patients_Frame::Doctor_Patients_Frame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxColour( 49, 79, 120 ) );

	wxBoxSizer* bSizerMainPanel;
	bSizerMainPanel = new wxBoxSizer( wxHORIZONTAL );

	m_panel2 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxSize( 900,600 ), wxTAB_TRAVERSAL );
	wxBoxSizer* bSizerPanel;
	bSizerPanel = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizerPanelItems;
	bSizerPanelItems = new wxBoxSizer( wxVERTICAL );

	m_gridPatients = new wxGrid( m_panel2, wxID_ANY, wxDefaultPosition, wxSize( 900,500 ), 0 );

	// Grid
	m_gridPatients->EnableEditing( true );
	m_gridPatients->EnableGridLines( true );
	m_gridPatients->EnableDragGridSize( true );
	m_gridPatients->SetMargins( 0, 0 );
    m_gridPatients->CreateGrid(5, 6);

	// Columns
    m_gridPatients->SetDefaultColSize(135);
    m_gridPatients->SetColLabelValue(0, "Имя");
    m_gridPatients->SetColLabelValue(1, "Фамилия");
    m_gridPatients->SetColLabelValue(2, "Дата рождения");
    m_gridPatients->SetColLabelValue(3, "Диагнозы");
    m_gridPatients->SetColLabelValue(4, "Жалобы");
    m_gridPatients->SetColLabelValue(5, "Курс лечения");
	m_gridPatients->EnableDragColMove( false );
	m_gridPatients->EnableDragColSize( true );
	m_gridPatients->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
    m_gridPatients->SetDefaultRowSize(25);
	m_gridPatients->EnableDragRowSize( true );
	m_gridPatients->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_gridPatients->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizerPanelItems->Add( m_gridPatients, 0, wxALL, 5 );


	bSizerPanel->Add( bSizerPanelItems, 0, wxALL, 0 );

	wxBoxSizer* bSizerButtons;
	bSizerButtons = new wxBoxSizer( wxHORIZONTAL );

	m_buttonDoctorPatientsBack = new wxButton( m_panel2, wxID_ANY, wxT("Назад"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerButtons->Add( m_buttonDoctorPatientsBack, 0, wxALL, 5 );

	m_buttonDoctorPatientsSave = new wxButton( m_panel2, wxID_ANY, wxT("Сохранить"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerButtons->Add( m_buttonDoctorPatientsSave, 0, wxALL, 5 );


	bSizerPanel->Add( bSizerButtons, 0, wxALL, 0 );


	m_panel2->SetSizer( bSizerPanel );
	m_panel2->Layout();
	bSizerMainPanel->Add( m_panel2, 1, wxEXPAND|wxALL, 0 );


	this->SetSizer( bSizerMainPanel );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_gridPatients->Connect( wxEVT_GRID_CELL_CHANGED, wxGridEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridCellChange ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_CELL_LEFT_CLICK, wxGridEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridCellLeftClick ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_CELL_LEFT_DCLICK, wxGridEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridCellLeftDClick ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_CELL_RIGHT_CLICK, wxGridEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridCellRightClick ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_CELL_RIGHT_DCLICK, wxGridEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridCellRightDClick ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_CELL_CHANGED, wxGridEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridCmdCellChange ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_CELL_LEFT_CLICK, wxGridEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridCmdCellLeftClick ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_CELL_LEFT_DCLICK, wxGridEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridCmdCellLeftDClick ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_CELL_RIGHT_CLICK, wxGridEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridCmdCellRightClick ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_CELL_RIGHT_DCLICK, wxGridEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridCmdCellRightDClick ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_COL_SIZE, wxGridSizeEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridCmdColSize ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_EDITOR_CREATED, wxGridEditorCreatedEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridCmdEditorCreated ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_EDITOR_HIDDEN, wxGridEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridCmdEditorHidden ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_EDITOR_SHOWN, wxGridEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridCmdEditorShown ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridCmdLabelLeftClick ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_LABEL_LEFT_DCLICK, wxGridEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridCmdLabelLeftDClick ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_LABEL_RIGHT_CLICK, wxGridEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridCmdLabelRightClick ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_LABEL_RIGHT_DCLICK, wxGridEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridCmdLabelRightDClick ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_RANGE_SELECT, wxGridRangeSelectEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridCmdRangeSelect ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_ROW_SIZE, wxGridSizeEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridCmdRowSize ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_SELECT_CELL, wxGridEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridCmdSelectCell ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_COL_SIZE, wxGridSizeEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridColSize ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_EDITOR_CREATED, wxGridEditorCreatedEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridEditorCreated ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_EDITOR_HIDDEN, wxGridEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridEditorHidden ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_EDITOR_SHOWN, wxGridEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridEditorShown ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridLabelLeftClick ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_LABEL_LEFT_DCLICK, wxGridEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridLabelLeftDClick ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_LABEL_RIGHT_CLICK, wxGridEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridLabelRightClick ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_LABEL_RIGHT_DCLICK, wxGridEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridLabelRightDClick ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_RANGE_SELECT, wxGridRangeSelectEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridRangeSelect ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_ROW_SIZE, wxGridSizeEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridRowSize ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_SELECT_CELL, wxGridEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridSelectCell ), NULL, this );
	m_buttonDoctorPatientsBack->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Doctor_Patients_Frame::m_buttonDoctorPatientsBackOnButtonClick ), NULL, this );
	m_buttonDoctorPatientsSave->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Doctor_Patients_Frame::m_buttonDoctorPatientsSaveOnButtonClick ), NULL, this );
}

Doctor_Patients_Frame::~Doctor_Patients_Frame()
{
	// Disconnect Events
	m_gridPatients->Disconnect( wxEVT_GRID_CELL_CHANGED, wxGridEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridCellChange ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_CELL_LEFT_CLICK, wxGridEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridCellLeftClick ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_CELL_LEFT_DCLICK, wxGridEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridCellLeftDClick ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_CELL_RIGHT_CLICK, wxGridEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridCellRightClick ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_CELL_RIGHT_DCLICK, wxGridEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridCellRightDClick ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_CELL_CHANGED, wxGridEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridCmdCellChange ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_CELL_LEFT_CLICK, wxGridEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridCmdCellLeftClick ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_CELL_LEFT_DCLICK, wxGridEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridCmdCellLeftDClick ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_CELL_RIGHT_CLICK, wxGridEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridCmdCellRightClick ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_CELL_RIGHT_DCLICK, wxGridEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridCmdCellRightDClick ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_COL_SIZE, wxGridSizeEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridCmdColSize ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_EDITOR_CREATED, wxGridEditorCreatedEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridCmdEditorCreated ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_EDITOR_HIDDEN, wxGridEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridCmdEditorHidden ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_EDITOR_SHOWN, wxGridEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridCmdEditorShown ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridCmdLabelLeftClick ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_LABEL_LEFT_DCLICK, wxGridEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridCmdLabelLeftDClick ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_LABEL_RIGHT_CLICK, wxGridEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridCmdLabelRightClick ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_LABEL_RIGHT_DCLICK, wxGridEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridCmdLabelRightDClick ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_RANGE_SELECT, wxGridRangeSelectEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridCmdRangeSelect ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_ROW_SIZE, wxGridSizeEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridCmdRowSize ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_SELECT_CELL, wxGridEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridCmdSelectCell ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_COL_SIZE, wxGridSizeEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridColSize ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_EDITOR_CREATED, wxGridEditorCreatedEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridEditorCreated ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_EDITOR_HIDDEN, wxGridEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridEditorHidden ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_EDITOR_SHOWN, wxGridEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridEditorShown ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridLabelLeftClick ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_LABEL_LEFT_DCLICK, wxGridEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridLabelLeftDClick ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_LABEL_RIGHT_CLICK, wxGridEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridLabelRightClick ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_LABEL_RIGHT_DCLICK, wxGridEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridLabelRightDClick ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_RANGE_SELECT, wxGridRangeSelectEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridRangeSelect ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_ROW_SIZE, wxGridSizeEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridRowSize ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_SELECT_CELL, wxGridEventHandler( Doctor_Patients_Frame::m_gridPatientsOnGridSelectCell ), NULL, this );
	m_buttonDoctorPatientsBack->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Doctor_Patients_Frame::m_buttonDoctorPatientsBackOnButtonClick ), NULL, this );
	m_buttonDoctorPatientsSave->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Doctor_Patients_Frame::m_buttonDoctorPatientsSaveOnButtonClick ), NULL, this );

}

Doctor_Courses_Frame::Doctor_Courses_Frame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxColour( 49, 79, 120 ) );

	wxBoxSizer* bSizerMainPanel;
	bSizerMainPanel = new wxBoxSizer( wxHORIZONTAL );

	m_panel2 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxSize( 900,600 ), wxTAB_TRAVERSAL );
	wxBoxSizer* bSizerPanel;
	bSizerPanel = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizerPanelItems;
	bSizerPanelItems = new wxBoxSizer( wxVERTICAL );

	m_gridCourses = new wxGrid( m_panel2, wxID_ANY, wxDefaultPosition, wxSize( 900,500 ), 0 );

	// Grid
    m_gridCourses->CreateGrid(5, 5);
    m_gridCourses->SetDefaultColSize(150);
    wxFont font(30, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL);
    m_gridCourses->SetFont(font);
    m_gridCourses->SetDefaultRowSize(100);
    m_gridCourses->SetColSize(4, 180);
	m_gridCourses->EnableEditing( true );
	m_gridCourses->EnableGridLines( true );
	m_gridCourses->EnableDragGridSize( true );
	m_gridCourses->SetMargins( 0, 0 );

	// Columns
    m_gridCourses->SetColLabelValue(0, "Название");
    m_gridCourses->SetColLabelValue(1, "Описание");
    m_gridCourses->SetColLabelValue(2, "Обследования");
    m_gridCourses->SetColLabelValue(3, "Процедуры");
    m_gridCourses->SetColLabelValue(4, "Длительность процедур (дни)");
	m_gridCourses->EnableDragColMove( false );
	m_gridCourses->EnableDragColSize( true );
	m_gridCourses->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_gridCourses->EnableDragRowSize( true );
	m_gridCourses->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_gridCourses->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );

    auto *attr = new wxGridCellAttr();
    attr->SetOverflow(true); // Разрешаем переполнение текста

    // Устанавливаем объект wxGridCellAttr для ячейки
    m_gridCourses->SetAttr(0, 0, attr);

    //After grid
    bSizerPanelItems->Add( m_gridCourses, 0, wxALL, 5 );


	bSizerPanel->Add( bSizerPanelItems, 0, wxALL, 0 );

	wxBoxSizer* bSizerButtons;
	bSizerButtons = new wxBoxSizer( wxHORIZONTAL );

	m_buttonDoctorCoursesBack = new wxButton( m_panel2, wxID_ANY, wxT("Назад"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerButtons->Add( m_buttonDoctorCoursesBack, 0, wxALL, 5 );

	m_buttonDoctorCoursesSave = new wxButton( m_panel2, wxID_ANY, wxT("Сохранить"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerButtons->Add( m_buttonDoctorCoursesSave, 0, wxALL, 5 );


	bSizerPanel->Add( bSizerButtons, 0, wxALL, 0 );


	m_panel2->SetSizer( bSizerPanel );
	m_panel2->Layout();
	bSizerMainPanel->Add( m_panel2, 1, wxEXPAND|wxALL, 0 );


	this->SetSizer( bSizerMainPanel );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_gridCourses->Connect( wxEVT_GRID_CELL_CHANGED, wxGridEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridCellChange ), NULL, this );
	m_gridCourses->Connect( wxEVT_GRID_CELL_LEFT_CLICK, wxGridEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridCellLeftClick ), NULL, this );
	m_gridCourses->Connect( wxEVT_GRID_CELL_LEFT_DCLICK, wxGridEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridCellLeftDClick ), NULL, this );
	m_gridCourses->Connect( wxEVT_GRID_CELL_RIGHT_CLICK, wxGridEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridCellRightClick ), NULL, this );
	m_gridCourses->Connect( wxEVT_GRID_CELL_RIGHT_DCLICK, wxGridEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridCellRightDClick ), NULL, this );
	m_gridCourses->Connect( wxEVT_GRID_CELL_CHANGED, wxGridEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridCmdCellChange ), NULL, this );
	m_gridCourses->Connect( wxEVT_GRID_CELL_LEFT_CLICK, wxGridEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridCmdCellLeftClick ), NULL, this );
	m_gridCourses->Connect( wxEVT_GRID_CELL_LEFT_DCLICK, wxGridEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridCmdCellLeftDClick ), NULL, this );
	m_gridCourses->Connect( wxEVT_GRID_CELL_RIGHT_CLICK, wxGridEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridCmdCellRightClick ), NULL, this );
	m_gridCourses->Connect( wxEVT_GRID_CELL_RIGHT_DCLICK, wxGridEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridCmdCellRightDClick ), NULL, this );
	m_gridCourses->Connect( wxEVT_GRID_COL_SIZE, wxGridSizeEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridCmdColSize ), NULL, this );
	m_gridCourses->Connect( wxEVT_GRID_EDITOR_CREATED, wxGridEditorCreatedEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridCmdEditorCreated ), NULL, this );
	m_gridCourses->Connect( wxEVT_GRID_EDITOR_HIDDEN, wxGridEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridCmdEditorHidden ), NULL, this );
	m_gridCourses->Connect( wxEVT_GRID_EDITOR_SHOWN, wxGridEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridCmdEditorShown ), NULL, this );
	m_gridCourses->Connect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridCmdLabelLeftClick ), NULL, this );
	m_gridCourses->Connect( wxEVT_GRID_LABEL_LEFT_DCLICK, wxGridEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridCmdLabelLeftDClick ), NULL, this );
	m_gridCourses->Connect( wxEVT_GRID_LABEL_RIGHT_CLICK, wxGridEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridCmdLabelRightClick ), NULL, this );
	m_gridCourses->Connect( wxEVT_GRID_LABEL_RIGHT_DCLICK, wxGridEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridCmdLabelRightDClick ), NULL, this );
	m_gridCourses->Connect( wxEVT_GRID_RANGE_SELECT, wxGridRangeSelectEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridCmdRangeSelect ), NULL, this );
	m_gridCourses->Connect( wxEVT_GRID_ROW_SIZE, wxGridSizeEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridCmdRowSize ), NULL, this );
	m_gridCourses->Connect( wxEVT_GRID_SELECT_CELL, wxGridEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridCmdSelectCell ), NULL, this );
	m_gridCourses->Connect( wxEVT_GRID_COL_SIZE, wxGridSizeEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridColSize ), NULL, this );
	m_gridCourses->Connect( wxEVT_GRID_EDITOR_CREATED, wxGridEditorCreatedEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridEditorCreated ), NULL, this );
	m_gridCourses->Connect( wxEVT_GRID_EDITOR_HIDDEN, wxGridEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridEditorHidden ), NULL, this );
	m_gridCourses->Connect( wxEVT_GRID_EDITOR_SHOWN, wxGridEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridEditorShown ), NULL, this );
	m_gridCourses->Connect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridLabelLeftClick ), NULL, this );
	m_gridCourses->Connect( wxEVT_GRID_LABEL_LEFT_DCLICK, wxGridEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridLabelLeftDClick ), NULL, this );
	m_gridCourses->Connect( wxEVT_GRID_LABEL_RIGHT_CLICK, wxGridEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridLabelRightClick ), NULL, this );
	m_gridCourses->Connect( wxEVT_GRID_LABEL_RIGHT_DCLICK, wxGridEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridLabelRightDClick ), NULL, this );
	m_gridCourses->Connect( wxEVT_GRID_RANGE_SELECT, wxGridRangeSelectEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridRangeSelect ), NULL, this );
	m_gridCourses->Connect( wxEVT_GRID_ROW_SIZE, wxGridSizeEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridRowSize ), NULL, this );
	m_gridCourses->Connect( wxEVT_GRID_SELECT_CELL, wxGridEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridSelectCell ), NULL, this );
	m_buttonDoctorCoursesBack->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Doctor_Courses_Frame::m_buttonDoctorCoursesBackOnButtonClick ), NULL, this );
	m_buttonDoctorCoursesSave->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Doctor_Courses_Frame::m_buttonDoctorCoursesSaveOnButtonClick ), NULL, this );
}

Doctor_Courses_Frame::~Doctor_Courses_Frame()
{
	// Disconnect Events
	m_gridCourses->Disconnect( wxEVT_GRID_CELL_CHANGED, wxGridEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridCellChange ), NULL, this );
	m_gridCourses->Disconnect( wxEVT_GRID_CELL_LEFT_CLICK, wxGridEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridCellLeftClick ), NULL, this );
	m_gridCourses->Disconnect( wxEVT_GRID_CELL_LEFT_DCLICK, wxGridEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridCellLeftDClick ), NULL, this );
	m_gridCourses->Disconnect( wxEVT_GRID_CELL_RIGHT_CLICK, wxGridEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridCellRightClick ), NULL, this );
	m_gridCourses->Disconnect( wxEVT_GRID_CELL_RIGHT_DCLICK, wxGridEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridCellRightDClick ), NULL, this );
	m_gridCourses->Disconnect( wxEVT_GRID_CELL_CHANGED, wxGridEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridCmdCellChange ), NULL, this );
	m_gridCourses->Disconnect( wxEVT_GRID_CELL_LEFT_CLICK, wxGridEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridCmdCellLeftClick ), NULL, this );
	m_gridCourses->Disconnect( wxEVT_GRID_CELL_LEFT_DCLICK, wxGridEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridCmdCellLeftDClick ), NULL, this );
	m_gridCourses->Disconnect( wxEVT_GRID_CELL_RIGHT_CLICK, wxGridEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridCmdCellRightClick ), NULL, this );
	m_gridCourses->Disconnect( wxEVT_GRID_CELL_RIGHT_DCLICK, wxGridEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridCmdCellRightDClick ), NULL, this );
	m_gridCourses->Disconnect( wxEVT_GRID_COL_SIZE, wxGridSizeEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridCmdColSize ), NULL, this );
	m_gridCourses->Disconnect( wxEVT_GRID_EDITOR_CREATED, wxGridEditorCreatedEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridCmdEditorCreated ), NULL, this );
	m_gridCourses->Disconnect( wxEVT_GRID_EDITOR_HIDDEN, wxGridEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridCmdEditorHidden ), NULL, this );
	m_gridCourses->Disconnect( wxEVT_GRID_EDITOR_SHOWN, wxGridEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridCmdEditorShown ), NULL, this );
	m_gridCourses->Disconnect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridCmdLabelLeftClick ), NULL, this );
	m_gridCourses->Disconnect( wxEVT_GRID_LABEL_LEFT_DCLICK, wxGridEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridCmdLabelLeftDClick ), NULL, this );
	m_gridCourses->Disconnect( wxEVT_GRID_LABEL_RIGHT_CLICK, wxGridEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridCmdLabelRightClick ), NULL, this );
	m_gridCourses->Disconnect( wxEVT_GRID_LABEL_RIGHT_DCLICK, wxGridEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridCmdLabelRightDClick ), NULL, this );
	m_gridCourses->Disconnect( wxEVT_GRID_RANGE_SELECT, wxGridRangeSelectEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridCmdRangeSelect ), NULL, this );
	m_gridCourses->Disconnect( wxEVT_GRID_ROW_SIZE, wxGridSizeEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridCmdRowSize ), NULL, this );
	m_gridCourses->Disconnect( wxEVT_GRID_SELECT_CELL, wxGridEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridCmdSelectCell ), NULL, this );
	m_gridCourses->Disconnect( wxEVT_GRID_COL_SIZE, wxGridSizeEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridColSize ), NULL, this );
	m_gridCourses->Disconnect( wxEVT_GRID_EDITOR_CREATED, wxGridEditorCreatedEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridEditorCreated ), NULL, this );
	m_gridCourses->Disconnect( wxEVT_GRID_EDITOR_HIDDEN, wxGridEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridEditorHidden ), NULL, this );
	m_gridCourses->Disconnect( wxEVT_GRID_EDITOR_SHOWN, wxGridEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridEditorShown ), NULL, this );
	m_gridCourses->Disconnect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridLabelLeftClick ), NULL, this );
	m_gridCourses->Disconnect( wxEVT_GRID_LABEL_LEFT_DCLICK, wxGridEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridLabelLeftDClick ), NULL, this );
	m_gridCourses->Disconnect( wxEVT_GRID_LABEL_RIGHT_CLICK, wxGridEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridLabelRightClick ), NULL, this );
	m_gridCourses->Disconnect( wxEVT_GRID_LABEL_RIGHT_DCLICK, wxGridEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridLabelRightDClick ), NULL, this );
	m_gridCourses->Disconnect( wxEVT_GRID_RANGE_SELECT, wxGridRangeSelectEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridRangeSelect ), NULL, this );
	m_gridCourses->Disconnect( wxEVT_GRID_ROW_SIZE, wxGridSizeEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridRowSize ), NULL, this );
	m_gridCourses->Disconnect( wxEVT_GRID_SELECT_CELL, wxGridEventHandler( Doctor_Courses_Frame::m_gridCoursesOnGridSelectCell ), NULL, this );
	m_buttonDoctorCoursesBack->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Doctor_Courses_Frame::m_buttonDoctorCoursesBackOnButtonClick ), NULL, this );
	m_buttonDoctorCoursesSave->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Doctor_Courses_Frame::m_buttonDoctorCoursesSaveOnButtonClick ), NULL, this );

}

Doctor_CreatePatient_Frame::Doctor_CreatePatient_Frame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxColour( 49, 79, 120 ) );

	wxBoxSizer* bSizerMainPanel;
	bSizerMainPanel = new wxBoxSizer( wxHORIZONTAL );

	m_panel2 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxSize( 900,600 ), wxTAB_TRAVERSAL );
	wxBoxSizer* bSizerPanel;
	bSizerPanel = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizerFname;
	bSizerFname = new wxBoxSizer( wxHORIZONTAL );

	m_staticTextFname = new wxStaticText( m_panel2, wxID_ANY, wxT("Имя"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextFname->Wrap( -1 );
	m_staticTextFname->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );

	bSizerFname->Add( m_staticTextFname, 0, wxALL, 5 );

	m_textFname = new wxTextCtrl( m_panel2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textFname->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_ACTIVEBORDER ) );

	bSizerFname->Add( m_textFname, 0, wxALL, 5 );


	bSizerPanel->Add( bSizerFname, 0, wxALL, 0 );

	wxBoxSizer* bSizerLname;
	bSizerLname = new wxBoxSizer( wxHORIZONTAL );

	m_staticTextFname1 = new wxStaticText( m_panel2, wxID_ANY, wxT("Фамилия"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextFname1->Wrap( -1 );
	m_staticTextFname1->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );

	bSizerLname->Add( m_staticTextFname1, 0, wxALL, 5 );

	m_textLname = new wxTextCtrl( m_panel2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textLname->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_ACTIVEBORDER ) );

	bSizerLname->Add( m_textLname, 0, wxALL, 5 );


	bSizerPanel->Add( bSizerLname, 0, wxALL, 0 );

	wxBoxSizer* bSizerBirthDate;
	bSizerBirthDate = new wxBoxSizer( wxHORIZONTAL );

	m_staticTextBirthday = new wxStaticText( m_panel2, wxID_ANY, wxT("Дата рождения"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextBirthday->Wrap( -1 );
	m_staticTextBirthday->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );

	bSizerBirthDate->Add( m_staticTextBirthday, 0, wxALL, 5 );

	m_spinCtrlDay = new wxSpinCtrl( m_panel2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 31, 0 );
	bSizerBirthDate->Add( m_spinCtrlDay, 0, wxALL, 5 );

	m_spinCtrlMonth = new wxSpinCtrl( m_panel2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 12, 0 );
	bSizerBirthDate->Add( m_spinCtrlMonth, 0, wxALL, 5 );

	m_spinCtrlYear = new wxSpinCtrl( m_panel2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1900, 2024, 2024 );
	bSizerBirthDate->Add( m_spinCtrlYear, 0, wxALL, 5 );


	bSizerPanel->Add( bSizerBirthDate, 0, wxALL, 0 );

	wxBoxSizer* bSizerDiagnosis;
	bSizerDiagnosis = new wxBoxSizer( wxHORIZONTAL );

	m_staticTextDiagnosis = new wxStaticText( m_panel2, wxID_ANY, wxT("Диагнозы"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextDiagnosis->Wrap( -1 );
	m_staticTextDiagnosis->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );

	bSizerDiagnosis->Add( m_staticTextDiagnosis, 0, wxALL, 5 );

	m_textCtrlDiagnosis = new wxTextCtrl( m_panel2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 750,-1 ), 0 );
	bSizerDiagnosis->Add( m_textCtrlDiagnosis, 0, wxALL, 5 );


	bSizerPanel->Add( bSizerDiagnosis, 0, wxALL, 0 );

	wxBoxSizer* bSizerComplaints;
	bSizerComplaints = new wxBoxSizer( wxHORIZONTAL );

	m_staticTextComplaints = new wxStaticText( m_panel2, wxID_ANY, wxT("Жалобы"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextComplaints->Wrap( -1 );
	m_staticTextComplaints->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );

	bSizerComplaints->Add( m_staticTextComplaints, 0, wxALL, 5 );

	m_textCtrlComplaints = new wxTextCtrl( m_panel2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 750,-1 ), 0 );
	bSizerComplaints->Add( m_textCtrlComplaints, 0, wxALL, 5 );


	bSizerPanel->Add( bSizerComplaints, 0, wxALL, 0 );

	wxBoxSizer* bSizerCourses;
	bSizerCourses = new wxBoxSizer( wxHORIZONTAL );

	m_staticTextCourses = new wxStaticText( m_panel2, wxID_ANY, wxT("Курс лечения"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextCourses->Wrap( -1 );
	bSizerCourses->Add( m_staticTextCourses, 0, wxALL, 5 );

	m_listBoxCourses = new wxListBox( m_panel2, wxID_ANY, wxDefaultPosition, wxSize( 750,150 ), 0, NULL, 0 );
	bSizerCourses->Add( m_listBoxCourses, 0, wxALL, 5 );


	bSizerPanel->Add( bSizerCourses, 0, wxALL, 0 );

	wxBoxSizer* bSizerButtons;
	bSizerButtons = new wxBoxSizer( wxHORIZONTAL );

	m_buttonDoctorCreatePatientBack = new wxButton( m_panel2, wxID_ANY, wxT("Назад"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerButtons->Add( m_buttonDoctorCreatePatientBack, 0, wxALL, 5 );

	m_buttonDoctorCreatePatientSave = new wxButton( m_panel2, wxID_ANY, wxT("Сохранить"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerButtons->Add( m_buttonDoctorCreatePatientSave, 0, wxALL, 5 );


	bSizerPanel->Add( bSizerButtons, 0, wxALL, 0 );


	m_panel2->SetSizer( bSizerPanel );
	m_panel2->Layout();
	bSizerMainPanel->Add( m_panel2, 1, wxEXPAND|wxALL, 0 );


	this->SetSizer( bSizerMainPanel );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_textFname->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( Doctor_CreatePatient_Frame::m_textFnameOnText ), NULL, this );
	m_textFname->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( Doctor_CreatePatient_Frame::m_textFnameOnTextEnter ), NULL, this );
	m_textFname->Connect( wxEVT_COMMAND_TEXT_MAXLEN, wxCommandEventHandler( Doctor_CreatePatient_Frame::m_textFnameOnTextMaxLen ), NULL, this );
	m_textFname->Connect( wxEVT_COMMAND_TEXT_URL, wxTextUrlEventHandler( Doctor_CreatePatient_Frame::m_textFnameOnTextURL ), NULL, this );
	m_textLname->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( Doctor_CreatePatient_Frame::m_textLnameOnText ), NULL, this );
	m_textLname->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( Doctor_CreatePatient_Frame::m_textLnameOnTextEnter ), NULL, this );
	m_textLname->Connect( wxEVT_COMMAND_TEXT_MAXLEN, wxCommandEventHandler( Doctor_CreatePatient_Frame::m_textLnameOnTextMaxLen ), NULL, this );
	m_textLname->Connect( wxEVT_COMMAND_TEXT_URL, wxTextUrlEventHandler( Doctor_CreatePatient_Frame::m_textLnameOnTextURL ), NULL, this );
	m_spinCtrlDay->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( Doctor_CreatePatient_Frame::m_spinCtrlDayOnSpinCtrl ), NULL, this );
	m_spinCtrlDay->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( Doctor_CreatePatient_Frame::m_spinCtrlDayOnSpinCtrlText ), NULL, this );
	m_spinCtrlDay->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( Doctor_CreatePatient_Frame::m_spinCtrlDayOnTextEnter ), NULL, this );
	m_spinCtrlMonth->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( Doctor_CreatePatient_Frame::m_spinCtrlMonthOnSpinCtrl ), NULL, this );
	m_spinCtrlMonth->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( Doctor_CreatePatient_Frame::m_spinCtrlMonthOnSpinCtrlText ), NULL, this );
	m_spinCtrlMonth->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( Doctor_CreatePatient_Frame::m_spinCtrlMonthOnTextEnter ), NULL, this );
	m_spinCtrlYear->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( Doctor_CreatePatient_Frame::m_spinCtrlYearOnSpinCtrl ), NULL, this );
	m_spinCtrlYear->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( Doctor_CreatePatient_Frame::m_spinCtrlYearOnSpinCtrlText ), NULL, this );
	m_spinCtrlYear->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( Doctor_CreatePatient_Frame::m_spinCtrlYearOnTextEnter ), NULL, this );
	m_textCtrlDiagnosis->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( Doctor_CreatePatient_Frame::m_textCtrlDiagnosisOnText ), NULL, this );
	m_textCtrlDiagnosis->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( Doctor_CreatePatient_Frame::m_textCtrlDiagnosisOnTextEnter ), NULL, this );
	m_textCtrlDiagnosis->Connect( wxEVT_COMMAND_TEXT_MAXLEN, wxCommandEventHandler( Doctor_CreatePatient_Frame::m_textCtrlDiagnosisOnTextMaxLen ), NULL, this );
	m_textCtrlDiagnosis->Connect( wxEVT_COMMAND_TEXT_URL, wxTextUrlEventHandler( Doctor_CreatePatient_Frame::m_textCtrlDiagnosisOnTextURL ), NULL, this );
	m_textCtrlComplaints->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( Doctor_CreatePatient_Frame::m_textCtrlComplaintsOnText ), NULL, this );
	m_textCtrlComplaints->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( Doctor_CreatePatient_Frame::m_textCtrlComplaintsOnTextEnter ), NULL, this );
	m_textCtrlComplaints->Connect( wxEVT_COMMAND_TEXT_MAXLEN, wxCommandEventHandler( Doctor_CreatePatient_Frame::m_textCtrlComplaintsOnTextMaxLen ), NULL, this );
	m_textCtrlComplaints->Connect( wxEVT_COMMAND_TEXT_URL, wxTextUrlEventHandler( Doctor_CreatePatient_Frame::m_textCtrlComplaintsOnTextURL ), NULL, this );
	m_listBoxCourses->Connect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( Doctor_CreatePatient_Frame::m_listBoxCoursesOnListBox ), NULL, this );
	m_listBoxCourses->Connect( wxEVT_COMMAND_LISTBOX_DOUBLECLICKED, wxCommandEventHandler( Doctor_CreatePatient_Frame::m_listBoxCoursesOnListBoxDClick ), NULL, this );
	m_buttonDoctorCreatePatientBack->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Doctor_CreatePatient_Frame::m_buttonDoctorCreatePatientBackOnButtonClick ), NULL, this );
	m_buttonDoctorCreatePatientSave->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Doctor_CreatePatient_Frame::m_buttonDoctorCreatePatientSaveOnButtonClick ), NULL, this );
}

Doctor_CreatePatient_Frame::~Doctor_CreatePatient_Frame()
{
	// Disconnect Events
	m_textFname->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( Doctor_CreatePatient_Frame::m_textFnameOnText ), NULL, this );
	m_textFname->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( Doctor_CreatePatient_Frame::m_textFnameOnTextEnter ), NULL, this );
	m_textFname->Disconnect( wxEVT_COMMAND_TEXT_MAXLEN, wxCommandEventHandler( Doctor_CreatePatient_Frame::m_textFnameOnTextMaxLen ), NULL, this );
	m_textFname->Disconnect( wxEVT_COMMAND_TEXT_URL, wxTextUrlEventHandler( Doctor_CreatePatient_Frame::m_textFnameOnTextURL ), NULL, this );
	m_textLname->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( Doctor_CreatePatient_Frame::m_textLnameOnText ), NULL, this );
	m_textLname->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( Doctor_CreatePatient_Frame::m_textLnameOnTextEnter ), NULL, this );
	m_textLname->Disconnect( wxEVT_COMMAND_TEXT_MAXLEN, wxCommandEventHandler( Doctor_CreatePatient_Frame::m_textLnameOnTextMaxLen ), NULL, this );
	m_textLname->Disconnect( wxEVT_COMMAND_TEXT_URL, wxTextUrlEventHandler( Doctor_CreatePatient_Frame::m_textLnameOnTextURL ), NULL, this );
	m_spinCtrlDay->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( Doctor_CreatePatient_Frame::m_spinCtrlDayOnSpinCtrl ), NULL, this );
	m_spinCtrlDay->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( Doctor_CreatePatient_Frame::m_spinCtrlDayOnSpinCtrlText ), NULL, this );
	m_spinCtrlDay->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( Doctor_CreatePatient_Frame::m_spinCtrlDayOnTextEnter ), NULL, this );
	m_spinCtrlMonth->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( Doctor_CreatePatient_Frame::m_spinCtrlMonthOnSpinCtrl ), NULL, this );
	m_spinCtrlMonth->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( Doctor_CreatePatient_Frame::m_spinCtrlMonthOnSpinCtrlText ), NULL, this );
	m_spinCtrlMonth->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( Doctor_CreatePatient_Frame::m_spinCtrlMonthOnTextEnter ), NULL, this );
	m_spinCtrlYear->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( Doctor_CreatePatient_Frame::m_spinCtrlYearOnSpinCtrl ), NULL, this );
	m_spinCtrlYear->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( Doctor_CreatePatient_Frame::m_spinCtrlYearOnSpinCtrlText ), NULL, this );
	m_spinCtrlYear->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( Doctor_CreatePatient_Frame::m_spinCtrlYearOnTextEnter ), NULL, this );
	m_textCtrlDiagnosis->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( Doctor_CreatePatient_Frame::m_textCtrlDiagnosisOnText ), NULL, this );
	m_textCtrlDiagnosis->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( Doctor_CreatePatient_Frame::m_textCtrlDiagnosisOnTextEnter ), NULL, this );
	m_textCtrlDiagnosis->Disconnect( wxEVT_COMMAND_TEXT_MAXLEN, wxCommandEventHandler( Doctor_CreatePatient_Frame::m_textCtrlDiagnosisOnTextMaxLen ), NULL, this );
	m_textCtrlDiagnosis->Disconnect( wxEVT_COMMAND_TEXT_URL, wxTextUrlEventHandler( Doctor_CreatePatient_Frame::m_textCtrlDiagnosisOnTextURL ), NULL, this );
	m_textCtrlComplaints->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( Doctor_CreatePatient_Frame::m_textCtrlComplaintsOnText ), NULL, this );
	m_textCtrlComplaints->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( Doctor_CreatePatient_Frame::m_textCtrlComplaintsOnTextEnter ), NULL, this );
	m_textCtrlComplaints->Disconnect( wxEVT_COMMAND_TEXT_MAXLEN, wxCommandEventHandler( Doctor_CreatePatient_Frame::m_textCtrlComplaintsOnTextMaxLen ), NULL, this );
	m_textCtrlComplaints->Disconnect( wxEVT_COMMAND_TEXT_URL, wxTextUrlEventHandler( Doctor_CreatePatient_Frame::m_textCtrlComplaintsOnTextURL ), NULL, this );
	m_listBoxCourses->Disconnect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( Doctor_CreatePatient_Frame::m_listBoxCoursesOnListBox ), NULL, this );
	m_listBoxCourses->Disconnect( wxEVT_COMMAND_LISTBOX_DOUBLECLICKED, wxCommandEventHandler( Doctor_CreatePatient_Frame::m_listBoxCoursesOnListBoxDClick ), NULL, this );
	m_buttonDoctorCreatePatientBack->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Doctor_CreatePatient_Frame::m_buttonDoctorCreatePatientBackOnButtonClick ), NULL, this );
	m_buttonDoctorCreatePatientSave->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Doctor_CreatePatient_Frame::m_buttonDoctorCreatePatientSaveOnButtonClick ), NULL, this );

}

Doctor_CreateCourse_Frame::Doctor_CreateCourse_Frame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
    this->SetSizeHints( wxDefaultSize, wxDefaultSize );
    this->SetBackgroundColour( wxColour( 49, 79, 120 ) );

    wxBoxSizer* bSizerMainPanel;
    bSizerMainPanel = new wxBoxSizer( wxHORIZONTAL );

    m_panel2 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxSize( 900,600 ), wxTAB_TRAVERSAL );
    wxBoxSizer* bSizerPanel;
    bSizerPanel = new wxBoxSizer( wxVERTICAL );

    wxBoxSizer* bSizerCourseTitle;
    bSizerCourseTitle = new wxBoxSizer( wxHORIZONTAL );

    m_staticTextCourseTitle = new wxStaticText( m_panel2, wxID_ANY, wxT("Название курса лечения"), wxDefaultPosition, wxDefaultSize, 0 );
    m_staticTextCourseTitle->Wrap( -1 );
    m_staticTextCourseTitle->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );

    bSizerCourseTitle->Add( m_staticTextCourseTitle, 0, wxALL, 5 );

    m_textCtrlCourseTitle = new wxTextCtrl( m_panel2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 750,-1 ), 0 );
    bSizerCourseTitle->Add( m_textCtrlCourseTitle, 0, wxALL, 5 );


    bSizerPanel->Add( bSizerCourseTitle, 0, wxALL, 0 );

    wxBoxSizer* bSizerCourseDescription;
    bSizerCourseDescription = new wxBoxSizer( wxHORIZONTAL );

    m_staticTextCourseDescription = new wxStaticText( m_panel2, wxID_ANY, wxT("Описание курса лечения"), wxDefaultPosition, wxDefaultSize, 0 );
    m_staticTextCourseDescription->Wrap( -1 );
    m_staticTextCourseDescription->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );

    bSizerCourseDescription->Add( m_staticTextCourseDescription, 0, wxALL, 5 );

    m_textCtrlCourseDescription = new wxTextCtrl( m_panel2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 750,-1 ), 0 );
    bSizerCourseDescription->Add( m_textCtrlCourseDescription, 0, wxALL, 5 );


    bSizerPanel->Add( bSizerCourseDescription, 0, wxALL, 0 );

    wxBoxSizer* bSizerExams;
    bSizerExams = new wxBoxSizer( wxHORIZONTAL );

    m_staticTextExams = new wxStaticText( m_panel2, wxID_ANY, wxT("Обследования"), wxDefaultPosition, wxDefaultSize, 0 );
    m_staticTextExams->Wrap( -1 );
    bSizerExams->Add( m_staticTextExams, 0, wxALL, 5 );

    wxString m_checkListExamsChoices[] = { wxT("ЭКГ"), wxT("МРТ"), wxT("КТ"), wxT("ФГ(Д)С"), wxT("Операционная") };
    int m_checkListExamsNChoices = sizeof( m_checkListExamsChoices ) / sizeof( wxString );
    m_checkListExams = new wxCheckListBox( m_panel2, wxID_ANY, wxDefaultPosition, wxSize( 750,150 ), m_checkListExamsNChoices, m_checkListExamsChoices, wxLB_SORT );
    bSizerExams->Add( m_checkListExams, 0, wxALL, 5 );


    bSizerPanel->Add( bSizerExams, 0, wxALL, 0 );

    wxBoxSizer* bSizerProcedures;
    bSizerProcedures = new wxBoxSizer( wxHORIZONTAL );

    m_staticTextProcedures = new wxStaticText( m_panel2, wxID_ANY, wxT("Процедуры"), wxDefaultPosition, wxDefaultSize, 0 );
    m_staticTextProcedures->Wrap( -1 );
    bSizerProcedures->Add( m_staticTextProcedures, 0, wxALL, 5 );

    wxString m_checkListProceduresChoices[] = { wxT("Электрофорез"), wxT("Массаж"), wxT("Иглоукалывание"), wxT("ЛФК"), wxT("Ароматерапия") };
    int m_checkListProceduresNChoices = sizeof( m_checkListProceduresChoices ) / sizeof( wxString );
    m_checkListProcedures = new wxCheckListBox( m_panel2, wxID_ANY, wxDefaultPosition, wxSize( 750,150 ), m_checkListProceduresNChoices, m_checkListProceduresChoices, wxLB_SORT );
    bSizerProcedures->Add( m_checkListProcedures, 0, wxALL, 5 );

    bSizerPanel->Add( bSizerProcedures, 0, wxALL, 0 );

    wxBoxSizer* bSizerCourseProcedureCount;
    bSizerCourseProcedureCount = new wxBoxSizer( wxHORIZONTAL );

    m_staticTextCourseProcedureCount = new wxStaticText( m_panel2, wxID_ANY, wxT("Кол-во дней прохождения процедур"), wxDefaultPosition, wxDefaultSize, 0 );
    m_staticTextCourseProcedureCount->Wrap( -1 );
    m_staticTextCourseProcedureCount->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );

    bSizerCourseProcedureCount->Add( m_staticTextCourseProcedureCount, 0, wxALL, 5 );

    m_spinCtrlProcedureCount = new wxSpinCtrl( m_panel2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 365, 0 );
    bSizerCourseProcedureCount->Add( m_spinCtrlProcedureCount, 0, wxALL, 5 );


    bSizerPanel->Add( bSizerCourseProcedureCount, 0, wxEXPAND, 5 );

    wxBoxSizer* bSizerButtons;
    bSizerButtons = new wxBoxSizer( wxHORIZONTAL );

    m_buttonCreateCourseBack = new wxButton( m_panel2, wxID_ANY, wxT("Назад"), wxDefaultPosition, wxDefaultSize, 0 );
    bSizerButtons->Add( m_buttonCreateCourseBack, 0, wxALL, 5 );

    m_buttonDoctorCreateCourseSave = new wxButton( m_panel2, wxID_ANY, wxT("Сохранить"), wxDefaultPosition, wxDefaultSize, 0 );
    bSizerButtons->Add( m_buttonDoctorCreateCourseSave, 0, wxALL, 5 );


    bSizerPanel->Add( bSizerButtons, 0, wxALL, 0 );


    m_panel2->SetSizer( bSizerPanel );
    m_panel2->Layout();
    bSizerMainPanel->Add( m_panel2, 1, wxEXPAND|wxALL, 0 );


    this->SetSizer( bSizerMainPanel );
    this->Layout();

    this->Centre( wxBOTH );

    // Connect Events
    m_textCtrlCourseTitle->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( Doctor_CreateCourse_Frame::m_textCtrlCourseTitleOnText ), NULL, this );
    m_textCtrlCourseTitle->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( Doctor_CreateCourse_Frame::m_textCtrlCourseTitleOnTextEnter ), NULL, this );
    m_textCtrlCourseTitle->Connect( wxEVT_COMMAND_TEXT_MAXLEN, wxCommandEventHandler( Doctor_CreateCourse_Frame::m_textCtrlCourseTitleOnTextMaxLen ), NULL, this );
    m_textCtrlCourseTitle->Connect( wxEVT_COMMAND_TEXT_URL, wxTextUrlEventHandler( Doctor_CreateCourse_Frame::m_textCtrlCourseTitleOnTextURL ), NULL, this );
    m_textCtrlCourseDescription->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( Doctor_CreateCourse_Frame::m_textCtrlCourseDescriptionOnText ), NULL, this );
    m_textCtrlCourseDescription->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( Doctor_CreateCourse_Frame::m_textCtrlCourseDescriptionOnTextEnter ), NULL, this );
    m_textCtrlCourseDescription->Connect( wxEVT_COMMAND_TEXT_MAXLEN, wxCommandEventHandler( Doctor_CreateCourse_Frame::m_textCtrlCourseDescriptionOnTextMaxLen ), NULL, this );
    m_textCtrlCourseDescription->Connect( wxEVT_COMMAND_TEXT_URL, wxTextUrlEventHandler( Doctor_CreateCourse_Frame::m_textCtrlCourseDescriptionOnTextURL ), NULL, this );
    m_checkListExams->Connect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( Doctor_CreateCourse_Frame::m_checkListExamsOnCheckListBox ), NULL, this );
    m_checkListExams->Connect( wxEVT_COMMAND_LISTBOX_DOUBLECLICKED, wxCommandEventHandler( Doctor_CreateCourse_Frame::m_checkListExamsOnCheckListBoxDClick ), NULL, this );
    m_checkListExams->Connect( wxEVT_COMMAND_CHECKLISTBOX_TOGGLED, wxCommandEventHandler( Doctor_CreateCourse_Frame::m_checkListExamsOnCheckListBoxToggled ), NULL, this );
    m_checkListProcedures->Connect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( Doctor_CreateCourse_Frame::m_checkListProceduresOnCheckListBox ), NULL, this );
    m_checkListProcedures->Connect( wxEVT_COMMAND_LISTBOX_DOUBLECLICKED, wxCommandEventHandler( Doctor_CreateCourse_Frame::m_checkListProceduresOnCheckListBoxDClick ), NULL, this );
    m_checkListProcedures->Connect( wxEVT_COMMAND_CHECKLISTBOX_TOGGLED, wxCommandEventHandler( Doctor_CreateCourse_Frame::m_checkListProceduresOnCheckListBoxToggled ), NULL, this );
    m_spinCtrlProcedureCount->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( Doctor_CreateCourse_Frame::m_spinCtrlProcedureCountOnSpinCtrl ), NULL, this );
    m_spinCtrlProcedureCount->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( Doctor_CreateCourse_Frame::m_spinCtrlProcedureCountOnSpinCtrlText ), NULL, this );
    m_spinCtrlProcedureCount->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( Doctor_CreateCourse_Frame::m_spinCtrlProcedureCountOnTextEnter ), NULL, this );
    m_buttonCreateCourseBack->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Doctor_CreateCourse_Frame::m_buttonCreateCourseBackOnButtonClick ), NULL, this );
    m_buttonDoctorCreateCourseSave->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Doctor_CreateCourse_Frame::m_buttonDoctorCreateCourseSaveOnButtonClick ), NULL, this );
}

Doctor_CreateCourse_Frame::~Doctor_CreateCourse_Frame()
{
    // Disconnect Events
    m_textCtrlCourseTitle->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( Doctor_CreateCourse_Frame::m_textCtrlCourseTitleOnText ), NULL, this );
    m_textCtrlCourseTitle->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( Doctor_CreateCourse_Frame::m_textCtrlCourseTitleOnTextEnter ), NULL, this );
    m_textCtrlCourseTitle->Disconnect( wxEVT_COMMAND_TEXT_MAXLEN, wxCommandEventHandler( Doctor_CreateCourse_Frame::m_textCtrlCourseTitleOnTextMaxLen ), NULL, this );
    m_textCtrlCourseTitle->Disconnect( wxEVT_COMMAND_TEXT_URL, wxTextUrlEventHandler( Doctor_CreateCourse_Frame::m_textCtrlCourseTitleOnTextURL ), NULL, this );
    m_textCtrlCourseDescription->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( Doctor_CreateCourse_Frame::m_textCtrlCourseDescriptionOnText ), NULL, this );
    m_textCtrlCourseDescription->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( Doctor_CreateCourse_Frame::m_textCtrlCourseDescriptionOnTextEnter ), NULL, this );
    m_textCtrlCourseDescription->Disconnect( wxEVT_COMMAND_TEXT_MAXLEN, wxCommandEventHandler( Doctor_CreateCourse_Frame::m_textCtrlCourseDescriptionOnTextMaxLen ), NULL, this );
    m_textCtrlCourseDescription->Disconnect( wxEVT_COMMAND_TEXT_URL, wxTextUrlEventHandler( Doctor_CreateCourse_Frame::m_textCtrlCourseDescriptionOnTextURL ), NULL, this );
    m_checkListExams->Disconnect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( Doctor_CreateCourse_Frame::m_checkListExamsOnCheckListBox ), NULL, this );
    m_checkListExams->Disconnect( wxEVT_COMMAND_LISTBOX_DOUBLECLICKED, wxCommandEventHandler( Doctor_CreateCourse_Frame::m_checkListExamsOnCheckListBoxDClick ), NULL, this );
    m_checkListExams->Disconnect( wxEVT_COMMAND_CHECKLISTBOX_TOGGLED, wxCommandEventHandler( Doctor_CreateCourse_Frame::m_checkListExamsOnCheckListBoxToggled ), NULL, this );
    m_checkListProcedures->Disconnect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( Doctor_CreateCourse_Frame::m_checkListProceduresOnCheckListBox ), NULL, this );
    m_checkListProcedures->Disconnect( wxEVT_COMMAND_LISTBOX_DOUBLECLICKED, wxCommandEventHandler( Doctor_CreateCourse_Frame::m_checkListProceduresOnCheckListBoxDClick ), NULL, this );
    m_checkListProcedures->Disconnect( wxEVT_COMMAND_CHECKLISTBOX_TOGGLED, wxCommandEventHandler( Doctor_CreateCourse_Frame::m_checkListProceduresOnCheckListBoxToggled ), NULL, this );
    m_spinCtrlProcedureCount->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( Doctor_CreateCourse_Frame::m_spinCtrlProcedureCountOnSpinCtrl ), NULL, this );
    m_spinCtrlProcedureCount->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( Doctor_CreateCourse_Frame::m_spinCtrlProcedureCountOnSpinCtrlText ), NULL, this );
    m_spinCtrlProcedureCount->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( Doctor_CreateCourse_Frame::m_spinCtrlProcedureCountOnTextEnter ), NULL, this );
    m_buttonCreateCourseBack->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Doctor_CreateCourse_Frame::m_buttonCreateCourseBackOnButtonClick ), NULL, this );
    m_buttonDoctorCreateCourseSave->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Doctor_CreateCourse_Frame::m_buttonDoctorCreateCourseSaveOnButtonClick ), NULL, this );

}

ChooseDep_Frame::ChooseDep_Frame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxColour( 49, 79, 120 ) );

	wxBoxSizer* bSizerMainPanel;
	bSizerMainPanel = new wxBoxSizer( wxHORIZONTAL );

	m_panel2 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxSize( 900,600 ), wxTAB_TRAVERSAL );
	wxBoxSizer* bSizerPanel;
	bSizerPanel = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizerChooseDep;
	bSizerChooseDep = new wxBoxSizer( wxHORIZONTAL );

	m_staticTextChooseDep = new wxStaticText( m_panel2, wxID_ANY, wxT("Выберите отделение"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextChooseDep->Wrap( -1 );
	m_staticTextChooseDep->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );

	bSizerChooseDep->Add( m_staticTextChooseDep, 0, wxALL, 5 );

	m_listBoxChooseDep = new wxListBox( m_panel2, wxID_ANY, wxDefaultPosition, wxSize( 150,80 ), 0, NULL, 0 );
	m_listBoxChooseDep->Append( wxT("Терапевтическое") );
	m_listBoxChooseDep->Append( wxT("Неврологическое") );
	m_listBoxChooseDep->Append( wxT("Хирургическое") );
	bSizerChooseDep->Add( m_listBoxChooseDep, 0, wxALL, 5 );


	bSizerPanel->Add( bSizerChooseDep, 0, wxALL, 0 );

	wxBoxSizer* bSizerButtons;
	bSizerButtons = new wxBoxSizer( wxHORIZONTAL );

	m_buttonChooseDepBack = new wxButton( m_panel2, wxID_ANY, wxT("Назад"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerButtons->Add( m_buttonChooseDepBack, 0, wxALL, 5 );

	m_buttonChooseDepNext = new wxButton( m_panel2, wxID_ANY, wxT("Далее"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerButtons->Add( m_buttonChooseDepNext, 0, wxALL, 5 );


	bSizerPanel->Add( bSizerButtons, 0, wxALL, 0 );


	m_panel2->SetSizer( bSizerPanel );
	m_panel2->Layout();
	bSizerMainPanel->Add( m_panel2, 1, wxEXPAND|wxALL, 0 );


	this->SetSizer( bSizerMainPanel );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_listBoxChooseDep->Connect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( ChooseDep_Frame::m_listBoxChooseDepOnListBox ), NULL, this );
	m_listBoxChooseDep->Connect( wxEVT_COMMAND_LISTBOX_DOUBLECLICKED, wxCommandEventHandler( ChooseDep_Frame::m_listBoxChooseDepOnListBoxDClick ), NULL, this );
	m_buttonChooseDepBack->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ChooseDep_Frame::m_buttonChooseDepBackOnButtonClick ), NULL, this );
	m_buttonChooseDepNext->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ChooseDep_Frame::m_buttonChooseDepNextOnButtonClick ), NULL, this );
}

ChooseDep_Frame::~ChooseDep_Frame()
{
	// Disconnect Events
	m_listBoxChooseDep->Disconnect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( ChooseDep_Frame::m_listBoxChooseDepOnListBox ), NULL, this );
	m_listBoxChooseDep->Disconnect( wxEVT_COMMAND_LISTBOX_DOUBLECLICKED, wxCommandEventHandler( ChooseDep_Frame::m_listBoxChooseDepOnListBoxDClick ), NULL, this );
	m_buttonChooseDepBack->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ChooseDep_Frame::m_buttonChooseDepBackOnButtonClick ), NULL, this );
	m_buttonChooseDepNext->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ChooseDep_Frame::m_buttonChooseDepNextOnButtonClick ), NULL, this );

}

ChooseOffice_Frame::ChooseOffice_Frame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxColour( 49, 79, 120 ) );

	wxBoxSizer* bSizerMainPanel;
	bSizerMainPanel = new wxBoxSizer( wxHORIZONTAL );

	m_panel2 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxSize( 900,600 ), wxTAB_TRAVERSAL );
	wxBoxSizer* bSizerPanel;
	bSizerPanel = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizerChooseOffice;
	bSizerChooseOffice = new wxBoxSizer( wxHORIZONTAL );

	m_staticTextChooseOffice = new wxStaticText( m_panel2, wxID_ANY, wxT("Выберите кабинет"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextChooseOffice->Wrap( -1 );
	m_staticTextChooseOffice->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );

	bSizerChooseOffice->Add( m_staticTextChooseOffice, 0, wxALL, 5 );

	m_listBoxChooseOffice = new wxListBox( m_panel2, wxID_ANY, wxDefaultPosition, wxSize( 150,100 ), 0, NULL, 0 );
	m_listBoxChooseOffice->Append( wxT("МРТ") );
	m_listBoxChooseOffice->Append( wxT("ЭКГ") );
	m_listBoxChooseOffice->Append( wxT("ФГ(Д)С") );
	m_listBoxChooseOffice->Append( wxT("КТ") );
    m_listBoxChooseOffice->Append( wxT("Операционная") );
	bSizerChooseOffice->Add( m_listBoxChooseOffice, 0, wxALL, 5 );


	bSizerPanel->Add( bSizerChooseOffice, 0, wxALL, 0 );

	wxBoxSizer* bSizerButtons;
	bSizerButtons = new wxBoxSizer( wxHORIZONTAL );

	m_buttonChooseOfficeBack = new wxButton( m_panel2, wxID_ANY, wxT("Назад"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerButtons->Add( m_buttonChooseOfficeBack, 0, wxALL, 5 );

	m_buttonChooseOfficeNext = new wxButton( m_panel2, wxID_ANY, wxT("Далее"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerButtons->Add( m_buttonChooseOfficeNext, 0, wxALL, 5 );


	bSizerPanel->Add( bSizerButtons, 0, wxALL, 0 );


	m_panel2->SetSizer( bSizerPanel );
	m_panel2->Layout();
	bSizerMainPanel->Add( m_panel2, 1, wxEXPAND|wxALL, 0 );


	this->SetSizer( bSizerMainPanel );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_listBoxChooseOffice->Connect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( ChooseOffice_Frame::m_listBoxChooseOfficeOnListBox ), NULL, this );
	m_listBoxChooseOffice->Connect( wxEVT_COMMAND_LISTBOX_DOUBLECLICKED, wxCommandEventHandler( ChooseOffice_Frame::m_listBoxChooseOfficeOnListBoxDClick ), NULL, this );
	m_buttonChooseOfficeBack->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ChooseOffice_Frame::m_buttonChooseOfficeBackOnButtonClick ), NULL, this );
	m_buttonChooseOfficeNext->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ChooseOffice_Frame::m_buttonChooseOfficeNextOnButtonClick ), NULL, this );
}

ChooseOffice_Frame::~ChooseOffice_Frame()
{
	// Disconnect Events
	m_listBoxChooseOffice->Disconnect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( ChooseOffice_Frame::m_listBoxChooseOfficeOnListBox ), NULL, this );
	m_listBoxChooseOffice->Disconnect( wxEVT_COMMAND_LISTBOX_DOUBLECLICKED, wxCommandEventHandler( ChooseOffice_Frame::m_listBoxChooseOfficeOnListBoxDClick ), NULL, this );
	m_buttonChooseOfficeBack->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ChooseOffice_Frame::m_buttonChooseOfficeBackOnButtonClick ), NULL, this );
	m_buttonChooseOfficeNext->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ChooseOffice_Frame::m_buttonChooseOfficeNextOnButtonClick ), NULL, this );

}

Nurse_Patients_Frame::Nurse_Patients_Frame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxColour( 49, 79, 120 ) );

	wxBoxSizer* bSizerMainPanel;
	bSizerMainPanel = new wxBoxSizer( wxHORIZONTAL );

	m_panel2 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxSize( 900,600 ), wxTAB_TRAVERSAL );
	wxBoxSizer* bSizerPanel;
	bSizerPanel = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizerPanelItems;
	bSizerPanelItems = new wxBoxSizer( wxVERTICAL );

	m_gridPatients = new wxGrid( m_panel2, wxID_ANY, wxDefaultPosition, wxSize( 900,500 ), 0 );

	// Grid
	m_gridPatients->CreateGrid( 100, 4 );
    m_gridPatients->SetDefaultColSize(185);
    m_gridPatients->SetDefaultRowSize(50);
    m_gridPatients->SetColLabelValue(0, "Имя");
    m_gridPatients->SetColLabelValue(1, "Кабинет");
    m_gridPatients->SetColLabelValue(2, "Название");
    m_gridPatients->SetColLabelValue(3, "Дата");
	m_gridPatients->EnableEditing( false );
	m_gridPatients->EnableGridLines( true );
	m_gridPatients->EnableDragGridSize( true );
	m_gridPatients->SetMargins( 0, 0 );

	// Columns
	m_gridPatients->EnableDragColMove( false );
	m_gridPatients->EnableDragColSize( true );
	m_gridPatients->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_gridPatients->EnableDragRowSize( true );
	m_gridPatients->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_gridPatients->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizerPanelItems->Add( m_gridPatients, 0, wxALL, 5 );


	bSizerPanel->Add( bSizerPanelItems, 0, wxALL, 0 );

	wxBoxSizer* bSizerButtons;
	bSizerButtons = new wxBoxSizer( wxHORIZONTAL );

	m_buttonNursePatientsBack = new wxButton( m_panel2, wxID_ANY, wxT("Назад"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerButtons->Add( m_buttonNursePatientsBack, 0, wxALL, 5 );


	bSizerPanel->Add( bSizerButtons, 0, wxALL, 0 );


	m_panel2->SetSizer( bSizerPanel );
	m_panel2->Layout();
	bSizerMainPanel->Add( m_panel2, 1, wxEXPAND|wxALL, 0 );


	this->SetSizer( bSizerMainPanel );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_gridPatients->Connect( wxEVT_GRID_CELL_CHANGED, wxGridEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridCellChange ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_CELL_LEFT_CLICK, wxGridEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridCellLeftClick ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_CELL_LEFT_DCLICK, wxGridEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridCellLeftDClick ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_CELL_RIGHT_CLICK, wxGridEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridCellRightClick ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_CELL_RIGHT_DCLICK, wxGridEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridCellRightDClick ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_CELL_CHANGED, wxGridEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridCmdCellChange ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_CELL_LEFT_CLICK, wxGridEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridCmdCellLeftClick ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_CELL_LEFT_DCLICK, wxGridEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridCmdCellLeftDClick ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_CELL_RIGHT_CLICK, wxGridEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridCmdCellRightClick ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_CELL_RIGHT_DCLICK, wxGridEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridCmdCellRightDClick ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_COL_SIZE, wxGridSizeEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridCmdColSize ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_EDITOR_CREATED, wxGridEditorCreatedEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridCmdEditorCreated ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_EDITOR_HIDDEN, wxGridEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridCmdEditorHidden ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_EDITOR_SHOWN, wxGridEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridCmdEditorShown ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridCmdLabelLeftClick ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_LABEL_LEFT_DCLICK, wxGridEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridCmdLabelLeftDClick ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_LABEL_RIGHT_CLICK, wxGridEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridCmdLabelRightClick ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_LABEL_RIGHT_DCLICK, wxGridEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridCmdLabelRightDClick ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_RANGE_SELECT, wxGridRangeSelectEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridCmdRangeSelect ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_ROW_SIZE, wxGridSizeEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridCmdRowSize ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_SELECT_CELL, wxGridEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridCmdSelectCell ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_COL_SIZE, wxGridSizeEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridColSize ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_EDITOR_CREATED, wxGridEditorCreatedEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridEditorCreated ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_EDITOR_HIDDEN, wxGridEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridEditorHidden ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_EDITOR_SHOWN, wxGridEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridEditorShown ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridLabelLeftClick ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_LABEL_LEFT_DCLICK, wxGridEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridLabelLeftDClick ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_LABEL_RIGHT_CLICK, wxGridEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridLabelRightClick ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_LABEL_RIGHT_DCLICK, wxGridEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridLabelRightDClick ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_RANGE_SELECT, wxGridRangeSelectEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridRangeSelect ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_ROW_SIZE, wxGridSizeEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridRowSize ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_SELECT_CELL, wxGridEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridSelectCell ), NULL, this );
	m_buttonNursePatientsBack->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Nurse_Patients_Frame::m_buttonNursePatientsBackOnButtonClick ), NULL, this );
}

Nurse_Patients_Frame::~Nurse_Patients_Frame()
{
	// Disconnect Events
	m_gridPatients->Disconnect( wxEVT_GRID_CELL_CHANGED, wxGridEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridCellChange ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_CELL_LEFT_CLICK, wxGridEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridCellLeftClick ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_CELL_LEFT_DCLICK, wxGridEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridCellLeftDClick ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_CELL_RIGHT_CLICK, wxGridEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridCellRightClick ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_CELL_RIGHT_DCLICK, wxGridEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridCellRightDClick ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_CELL_CHANGED, wxGridEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridCmdCellChange ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_CELL_LEFT_CLICK, wxGridEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridCmdCellLeftClick ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_CELL_LEFT_DCLICK, wxGridEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridCmdCellLeftDClick ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_CELL_RIGHT_CLICK, wxGridEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridCmdCellRightClick ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_CELL_RIGHT_DCLICK, wxGridEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridCmdCellRightDClick ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_COL_SIZE, wxGridSizeEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridCmdColSize ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_EDITOR_CREATED, wxGridEditorCreatedEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridCmdEditorCreated ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_EDITOR_HIDDEN, wxGridEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridCmdEditorHidden ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_EDITOR_SHOWN, wxGridEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridCmdEditorShown ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridCmdLabelLeftClick ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_LABEL_LEFT_DCLICK, wxGridEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridCmdLabelLeftDClick ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_LABEL_RIGHT_CLICK, wxGridEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridCmdLabelRightClick ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_LABEL_RIGHT_DCLICK, wxGridEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridCmdLabelRightDClick ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_RANGE_SELECT, wxGridRangeSelectEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridCmdRangeSelect ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_ROW_SIZE, wxGridSizeEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridCmdRowSize ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_SELECT_CELL, wxGridEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridCmdSelectCell ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_COL_SIZE, wxGridSizeEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridColSize ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_EDITOR_CREATED, wxGridEditorCreatedEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridEditorCreated ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_EDITOR_HIDDEN, wxGridEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridEditorHidden ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_EDITOR_SHOWN, wxGridEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridEditorShown ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridLabelLeftClick ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_LABEL_LEFT_DCLICK, wxGridEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridLabelLeftDClick ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_LABEL_RIGHT_CLICK, wxGridEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridLabelRightClick ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_LABEL_RIGHT_DCLICK, wxGridEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridLabelRightDClick ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_RANGE_SELECT, wxGridRangeSelectEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridRangeSelect ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_ROW_SIZE, wxGridSizeEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridRowSize ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_SELECT_CELL, wxGridEventHandler( Nurse_Patients_Frame::m_gridPatientsOnGridSelectCell ), NULL, this );
	m_buttonNursePatientsBack->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Nurse_Patients_Frame::m_buttonNursePatientsBackOnButtonClick ), NULL, this );

}

Worker_Patients_Frame::Worker_Patients_Frame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxColour( 49, 79, 120 ) );

	wxBoxSizer* bSizerMainPanel;
	bSizerMainPanel = new wxBoxSizer( wxHORIZONTAL );

	m_panel2 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxSize( 900,600 ), wxTAB_TRAVERSAL );
	wxBoxSizer* bSizerPanel;
	bSizerPanel = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizerPanelItems;
	bSizerPanelItems = new wxBoxSizer( wxVERTICAL );

	m_gridPatients = new wxGrid( m_panel2, wxID_ANY, wxDefaultPosition, wxSize( 900,500 ), 0 );

	// Grid
	m_gridPatients->CreateGrid( 100, 2 );
    m_gridPatients->SetDefaultColSize(365);
    m_gridPatients->SetDefaultRowSize(50);
    m_gridPatients->SetColLabelValue(0, "Имя");
    m_gridPatients->SetColLabelValue(1, "Дата");
	m_gridPatients->EnableEditing( false );
	m_gridPatients->EnableGridLines( true );
	m_gridPatients->EnableDragGridSize( true );
	m_gridPatients->SetMargins( 0, 0 );

	// Columns
	m_gridPatients->EnableDragColMove( false );
	m_gridPatients->EnableDragColSize( true );
	m_gridPatients->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_gridPatients->EnableDragRowSize( true );
	m_gridPatients->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_gridPatients->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizerPanelItems->Add( m_gridPatients, 0, wxALL, 5 );


	bSizerPanel->Add( bSizerPanelItems, 0, wxALL, 0 );

	wxBoxSizer* bSizerButtons;
	bSizerButtons = new wxBoxSizer( wxHORIZONTAL );

	m_buttonWorkerPatientsBack = new wxButton( m_panel2, wxID_ANY, wxT("Назад"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerButtons->Add( m_buttonWorkerPatientsBack, 0, wxALL, 5 );


	bSizerPanel->Add( bSizerButtons, 0, wxALL, 0 );


	m_panel2->SetSizer( bSizerPanel );
	m_panel2->Layout();
	bSizerMainPanel->Add( m_panel2, 1, wxEXPAND|wxALL, 0 );


	this->SetSizer( bSizerMainPanel );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_gridPatients->Connect( wxEVT_GRID_CELL_CHANGED, wxGridEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridCellChange ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_CELL_LEFT_CLICK, wxGridEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridCellLeftClick ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_CELL_LEFT_DCLICK, wxGridEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridCellLeftDClick ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_CELL_RIGHT_CLICK, wxGridEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridCellRightClick ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_CELL_RIGHT_DCLICK, wxGridEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridCellRightDClick ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_CELL_CHANGED, wxGridEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridCmdCellChange ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_CELL_LEFT_CLICK, wxGridEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridCmdCellLeftClick ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_CELL_LEFT_DCLICK, wxGridEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridCmdCellLeftDClick ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_CELL_RIGHT_CLICK, wxGridEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridCmdCellRightClick ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_CELL_RIGHT_DCLICK, wxGridEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridCmdCellRightDClick ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_COL_SIZE, wxGridSizeEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridCmdColSize ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_EDITOR_CREATED, wxGridEditorCreatedEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridCmdEditorCreated ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_EDITOR_HIDDEN, wxGridEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridCmdEditorHidden ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_EDITOR_SHOWN, wxGridEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridCmdEditorShown ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridCmdLabelLeftClick ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_LABEL_LEFT_DCLICK, wxGridEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridCmdLabelLeftDClick ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_LABEL_RIGHT_CLICK, wxGridEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridCmdLabelRightClick ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_LABEL_RIGHT_DCLICK, wxGridEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridCmdLabelRightDClick ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_RANGE_SELECT, wxGridRangeSelectEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridCmdRangeSelect ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_ROW_SIZE, wxGridSizeEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridCmdRowSize ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_SELECT_CELL, wxGridEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridCmdSelectCell ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_COL_SIZE, wxGridSizeEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridColSize ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_EDITOR_CREATED, wxGridEditorCreatedEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridEditorCreated ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_EDITOR_HIDDEN, wxGridEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridEditorHidden ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_EDITOR_SHOWN, wxGridEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridEditorShown ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridLabelLeftClick ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_LABEL_LEFT_DCLICK, wxGridEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridLabelLeftDClick ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_LABEL_RIGHT_CLICK, wxGridEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridLabelRightClick ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_LABEL_RIGHT_DCLICK, wxGridEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridLabelRightDClick ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_RANGE_SELECT, wxGridRangeSelectEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridRangeSelect ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_ROW_SIZE, wxGridSizeEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridRowSize ), NULL, this );
	m_gridPatients->Connect( wxEVT_GRID_SELECT_CELL, wxGridEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridSelectCell ), NULL, this );
	m_buttonWorkerPatientsBack->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Worker_Patients_Frame::m_buttonWorkerPatientsBackOnButtonClick ), NULL, this );
}

Worker_Patients_Frame::~Worker_Patients_Frame()
{
	// Disconnect Events
	m_gridPatients->Disconnect( wxEVT_GRID_CELL_CHANGED, wxGridEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridCellChange ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_CELL_LEFT_CLICK, wxGridEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridCellLeftClick ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_CELL_LEFT_DCLICK, wxGridEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridCellLeftDClick ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_CELL_RIGHT_CLICK, wxGridEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridCellRightClick ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_CELL_RIGHT_DCLICK, wxGridEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridCellRightDClick ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_CELL_CHANGED, wxGridEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridCmdCellChange ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_CELL_LEFT_CLICK, wxGridEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridCmdCellLeftClick ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_CELL_LEFT_DCLICK, wxGridEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridCmdCellLeftDClick ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_CELL_RIGHT_CLICK, wxGridEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridCmdCellRightClick ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_CELL_RIGHT_DCLICK, wxGridEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridCmdCellRightDClick ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_COL_SIZE, wxGridSizeEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridCmdColSize ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_EDITOR_CREATED, wxGridEditorCreatedEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridCmdEditorCreated ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_EDITOR_HIDDEN, wxGridEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridCmdEditorHidden ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_EDITOR_SHOWN, wxGridEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridCmdEditorShown ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridCmdLabelLeftClick ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_LABEL_LEFT_DCLICK, wxGridEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridCmdLabelLeftDClick ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_LABEL_RIGHT_CLICK, wxGridEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridCmdLabelRightClick ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_LABEL_RIGHT_DCLICK, wxGridEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridCmdLabelRightDClick ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_RANGE_SELECT, wxGridRangeSelectEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridCmdRangeSelect ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_ROW_SIZE, wxGridSizeEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridCmdRowSize ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_SELECT_CELL, wxGridEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridCmdSelectCell ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_COL_SIZE, wxGridSizeEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridColSize ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_EDITOR_CREATED, wxGridEditorCreatedEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridEditorCreated ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_EDITOR_HIDDEN, wxGridEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridEditorHidden ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_EDITOR_SHOWN, wxGridEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridEditorShown ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridLabelLeftClick ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_LABEL_LEFT_DCLICK, wxGridEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridLabelLeftDClick ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_LABEL_RIGHT_CLICK, wxGridEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridLabelRightClick ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_LABEL_RIGHT_DCLICK, wxGridEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridLabelRightDClick ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_RANGE_SELECT, wxGridRangeSelectEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridRangeSelect ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_ROW_SIZE, wxGridSizeEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridRowSize ), NULL, this );
	m_gridPatients->Disconnect( wxEVT_GRID_SELECT_CELL, wxGridEventHandler( Worker_Patients_Frame::m_gridPatientsOnGridSelectCell ), NULL, this );
	m_buttonWorkerPatientsBack->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Worker_Patients_Frame::m_buttonWorkerPatientsBackOnButtonClick ), NULL, this );
}

DeleteCourse_Frame::DeleteCourse_Frame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
    this->SetSizeHints( wxDefaultSize, wxDefaultSize );
    this->SetBackgroundColour( wxColour( 49, 79, 120 ) );

    this->SetTitle("Удалить курс лечения");

    wxBoxSizer* bSizerMainPanel;
    bSizerMainPanel = new wxBoxSizer( wxHORIZONTAL );

    m_panel2 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxSize( 900,600 ), wxTAB_TRAVERSAL );
    wxBoxSizer* bSizerPanel;
    bSizerPanel = new wxBoxSizer( wxVERTICAL );

    wxBoxSizer* bSizerDeleteCourse;
    bSizerDeleteCourse = new wxBoxSizer( wxHORIZONTAL );

    m_staticTextDeleteCourse = new wxStaticText( m_panel2, wxID_ANY, wxT("Удалить курс лечения"), wxDefaultPosition, wxDefaultSize, 0 );
    m_staticTextDeleteCourse->Wrap( -1 );
    m_staticTextDeleteCourse->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );

    bSizerDeleteCourse->Add( m_staticTextDeleteCourse, 0, wxALL, 5 );

    m_listBoxDeleteCourse = new wxListBox( m_panel2, wxID_ANY, wxDefaultPosition, wxSize( 150,90 ), 0, NULL, 0 );
    bSizerDeleteCourse->Add( m_listBoxDeleteCourse, 0, wxALL, 5 );

    bSizerPanel->Add( bSizerDeleteCourse, 0, wxALL, 0 );

    wxBoxSizer* bSizerButtons;
    bSizerButtons = new wxBoxSizer( wxHORIZONTAL );

    m_buttonDeleteCourseBack = new wxButton( m_panel2, wxID_ANY, wxT("Назад"), wxDefaultPosition, wxDefaultSize, 0 );
    bSizerButtons->Add( m_buttonDeleteCourseBack, 0, wxALL, 5 );

    m_buttonDeleteCourseDelete = new wxButton( m_panel2, wxID_ANY, wxT("Удалить"), wxDefaultPosition, wxDefaultSize, 0 );
    bSizerButtons->Add( m_buttonDeleteCourseDelete, 0, wxALL, 5 );


    bSizerPanel->Add( bSizerButtons, 0, wxALL, 0 );


    m_panel2->SetSizer( bSizerPanel );
    m_panel2->Layout();
    bSizerMainPanel->Add( m_panel2, 1, wxEXPAND|wxALL, 0 );


    this->SetSizer( bSizerMainPanel );
    this->Layout();

    this->Centre( wxBOTH );

    // Connect Events
    m_listBoxDeleteCourse->Connect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( DeleteCourse_Frame::m_listBoxDeleteCourseOnListBox ), NULL, this );
    m_listBoxDeleteCourse->Connect( wxEVT_COMMAND_LISTBOX_DOUBLECLICKED, wxCommandEventHandler( DeleteCourse_Frame::m_listBoxDeleteCourseOnListBoxDClick ), NULL, this );
    m_buttonDeleteCourseBack->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DeleteCourse_Frame::m_buttonDeleteCourseBackOnButtonClick ), NULL, this );
    m_buttonDeleteCourseDelete->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DeleteCourse_Frame::m_buttonDeleteCourseDeleteOnButtonClick ), NULL, this );
}

DeleteCourse_Frame::~DeleteCourse_Frame()
{
    // Disconnect Events
    m_listBoxDeleteCourse->Disconnect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( DeleteCourse_Frame::m_listBoxDeleteCourseOnListBox ), NULL, this );
    m_listBoxDeleteCourse->Disconnect( wxEVT_COMMAND_LISTBOX_DOUBLECLICKED, wxCommandEventHandler( DeleteCourse_Frame::m_listBoxDeleteCourseOnListBoxDClick ), NULL, this );
    m_buttonDeleteCourseBack->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DeleteCourse_Frame::m_buttonDeleteCourseBackOnButtonClick ), NULL, this );
    m_buttonDeleteCourseDelete->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DeleteCourse_Frame::m_buttonDeleteCourseDeleteOnButtonClick ), NULL, this );

}

DeletePatient_Frame::DeletePatient_Frame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
    this->SetSizeHints( wxDefaultSize, wxDefaultSize );
    this->SetBackgroundColour( wxColour( 49, 79, 120 ) );

    this->SetTitle("Удалить пациента");

    wxBoxSizer* bSizerMainPanel;
    bSizerMainPanel = new wxBoxSizer( wxHORIZONTAL );

    m_panel2 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxSize( 900,600 ), wxTAB_TRAVERSAL );
    wxBoxSizer* bSizerPanel;
    bSizerPanel = new wxBoxSizer( wxVERTICAL );

    wxBoxSizer* bSizerDeletePatient;
    bSizerDeletePatient = new wxBoxSizer( wxHORIZONTAL );

    m_staticTextDeletePatient = new wxStaticText( m_panel2, wxID_ANY, wxT("Удалить пациента"), wxDefaultPosition, wxDefaultSize, 0 );
    m_staticTextDeletePatient->Wrap( -1 );
    m_staticTextDeletePatient->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );

    bSizerDeletePatient->Add( m_staticTextDeletePatient, 0, wxALL, 5 );

    m_listBoxDeletePatient = new wxListBox( m_panel2, wxID_ANY, wxDefaultPosition, wxSize( 150,90 ), 0, NULL, 0 );
    bSizerDeletePatient->Add( m_listBoxDeletePatient, 0, wxALL, 5 );

    bSizerPanel->Add( bSizerDeletePatient, 0, wxALL, 0 );

    wxBoxSizer* bSizerButtons;
    bSizerButtons = new wxBoxSizer( wxHORIZONTAL );

    m_buttonDeletePatientBack = new wxButton( m_panel2, wxID_ANY, wxT("Назад"), wxDefaultPosition, wxDefaultSize, 0 );
    bSizerButtons->Add( m_buttonDeletePatientBack, 0, wxALL, 5 );

    m_buttonDeletePatientDelete = new wxButton( m_panel2, wxID_ANY, wxT("Удалить"), wxDefaultPosition, wxDefaultSize, 0 );
    bSizerButtons->Add( m_buttonDeletePatientDelete, 0, wxALL, 5 );


    bSizerPanel->Add( bSizerButtons, 0, wxALL, 0 );


    m_panel2->SetSizer( bSizerPanel );
    m_panel2->Layout();
    bSizerMainPanel->Add( m_panel2, 1, wxEXPAND|wxALL, 0 );


    this->SetSizer( bSizerMainPanel );
    this->Layout();

    this->Centre( wxBOTH );

    // Connect Events
    m_listBoxDeletePatient->Connect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( DeletePatient_Frame::m_listBoxDeletePatientOnListBox ), NULL, this );
    m_listBoxDeletePatient->Connect( wxEVT_COMMAND_LISTBOX_DOUBLECLICKED, wxCommandEventHandler( DeletePatient_Frame::m_listBoxDeletePatientOnListBoxDClick ), NULL, this );
    m_buttonDeletePatientBack->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DeletePatient_Frame::m_buttonDeletePatientBackOnButtonClick ), NULL, this );
    m_buttonDeletePatientDelete->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DeletePatient_Frame::m_buttonDeletePatientDeleteOnButtonClick ), NULL, this );
}

DeletePatient_Frame::~DeletePatient_Frame()
{
    // Disconnect Events
    m_listBoxDeletePatient->Disconnect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( DeletePatient_Frame::m_listBoxDeletePatientOnListBox ), NULL, this );
    m_listBoxDeletePatient->Disconnect( wxEVT_COMMAND_LISTBOX_DOUBLECLICKED, wxCommandEventHandler( DeletePatient_Frame::m_listBoxDeletePatientOnListBoxDClick ), NULL, this );
    m_buttonDeletePatientBack->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DeletePatient_Frame::m_buttonDeletePatientBackOnButtonClick ), NULL, this );
    m_buttonDeletePatientDelete->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DeletePatient_Frame::m_buttonDeletePatientDeleteOnButtonClick ), NULL, this );

}
