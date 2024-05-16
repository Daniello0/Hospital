///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.1.0-3-g43bf300c)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/button.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/frame.h>
#include <wx/grid.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/spinctrl.h>
#include <wx/listbox.h>
#include <wx/checklst.h>
#include <wx/wx.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class Main_Frame
///////////////////////////////////////////////////////////////////////////////
class Main_Frame : public wxFrame
{
	private:

	protected:
		wxPanel* m_panel2;
		wxButton* m_buttonDoctor;
		wxButton* m_buttonNurse;
		wxButton* m_buttonWorker;
		wxButton* m_buttonExitHospital;

		// Virtual event handlers, override them in your derived class
		virtual void m_buttonDoctorOnButtonClick( wxCommandEvent& event );
		virtual void m_buttonNurseOnButtonClick( wxCommandEvent& event );
		virtual void m_buttonWorkerOnButtonClick( wxCommandEvent& event );
		virtual void m_buttonExitHospitalOnButtonClick( wxCommandEvent& event );


	public:

		Main_Frame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Больница"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 900,600 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~Main_Frame();

};

///////////////////////////////////////////////////////////////////////////////
/// Class Doctor_Frame
///////////////////////////////////////////////////////////////////////////////
class Doctor_Frame : public wxFrame
{
	private:

	protected:
		wxPanel* m_panel2;
		wxButton* m_buttonDoctorPatients;
		wxButton* m_buttonDoctorCurses;
		wxButton* m_buttonDoctorCreatePatient;
		wxButton* m_buttonDoctorCreateCourse;
		wxButton* m_buttonDoctorBack;

		// Virtual event handlers, override them in your derived class
		virtual void m_buttonDoctorPatientsOnButtonClick( wxCommandEvent& event );
		virtual void m_buttonDoctorCoursesOnButtonClick(wxCommandEvent& event );
		virtual void m_buttonDoctorCreatePatientOnButtonClick( wxCommandEvent& event );
		virtual void m_buttonDoctorCreateCourseOnButtonClick( wxCommandEvent& event );
		virtual void m_buttonDoctorBackOnButtonClick( wxCommandEvent& event );


	public:

		Doctor_Frame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Доктор"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 900,600 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~Doctor_Frame();

};

///////////////////////////////////////////////////////////////////////////////
/// Class Doctor_Patients_Frame
///////////////////////////////////////////////////////////////////////////////
class Doctor_Patients_Frame : public wxFrame
{
	private:

	protected:
		wxPanel* m_panel2;
		wxGrid* m_gridPatients;
		wxButton* m_buttonDoctorPatientsBack;
		wxButton* m_buttonDoctorPatientsSave;

		// Virtual event handlers, override them in your derived class
		virtual void m_gridPatientsOnGridCellChange( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCellLeftClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCellLeftDClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCellRightClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCellRightDClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCmdCellChange( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCmdCellLeftClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCmdCellLeftDClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCmdCellRightClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCmdCellRightDClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCmdColSize( wxGridSizeEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCmdEditorCreated( wxGridEditorCreatedEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCmdEditorHidden( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCmdEditorShown( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCmdLabelLeftClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCmdLabelLeftDClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCmdLabelRightClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCmdLabelRightDClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCmdRangeSelect( wxGridRangeSelectEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCmdRowSize( wxGridSizeEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCmdSelectCell( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridColSize( wxGridSizeEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridEditorCreated( wxGridEditorCreatedEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridEditorHidden( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridEditorShown( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridLabelLeftClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridLabelLeftDClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridLabelRightClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridLabelRightDClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridRangeSelect( wxGridRangeSelectEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridRowSize( wxGridSizeEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridSelectCell( wxGridEvent& event ) { event.Skip(); }
		virtual void m_buttonDoctorPatientsBackOnButtonClick( wxCommandEvent& event );
		virtual void m_buttonDoctorPatientsSaveOnButtonClick( wxCommandEvent& event ) { event.Skip(); }


	public:

		Doctor_Patients_Frame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Пациенты"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 900,600 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~Doctor_Patients_Frame();

};

///////////////////////////////////////////////////////////////////////////////
/// Class Doctor_Courses_Frame
///////////////////////////////////////////////////////////////////////////////
class Doctor_Courses_Frame : public wxFrame
{
	private:

	public:
		wxPanel* m_panel2;
		wxGrid* m_gridCourses;
		wxButton* m_buttonDoctorCoursesBack;
		wxButton* m_buttonDoctorCoursesSave;

		// Virtual event handlers, override them in your derived class
		virtual void m_gridCoursesOnGridCellChange( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridCoursesOnGridCellLeftClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridCoursesOnGridCellLeftDClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridCoursesOnGridCellRightClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridCoursesOnGridCellRightDClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridCoursesOnGridCmdCellChange( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridCoursesOnGridCmdCellLeftClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridCoursesOnGridCmdCellLeftDClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridCoursesOnGridCmdCellRightClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridCoursesOnGridCmdCellRightDClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridCoursesOnGridCmdColSize( wxGridSizeEvent& event ) { event.Skip(); }
		virtual void m_gridCoursesOnGridCmdEditorCreated( wxGridEditorCreatedEvent& event ) { event.Skip(); }
		virtual void m_gridCoursesOnGridCmdEditorHidden( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridCoursesOnGridCmdEditorShown( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridCoursesOnGridCmdLabelLeftClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridCoursesOnGridCmdLabelLeftDClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridCoursesOnGridCmdLabelRightClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridCoursesOnGridCmdLabelRightDClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridCoursesOnGridCmdRangeSelect( wxGridRangeSelectEvent& event ) { event.Skip(); }
		virtual void m_gridCoursesOnGridCmdRowSize( wxGridSizeEvent& event ) { event.Skip(); }
		virtual void m_gridCoursesOnGridCmdSelectCell( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridCoursesOnGridColSize( wxGridSizeEvent& event ) { event.Skip(); }
		virtual void m_gridCoursesOnGridEditorCreated( wxGridEditorCreatedEvent& event ) { event.Skip(); }
		virtual void m_gridCoursesOnGridEditorHidden( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridCoursesOnGridEditorShown( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridCoursesOnGridLabelLeftClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridCoursesOnGridLabelLeftDClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridCoursesOnGridLabelRightClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridCoursesOnGridLabelRightDClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridCoursesOnGridRangeSelect( wxGridRangeSelectEvent& event ) { event.Skip(); }
		virtual void m_gridCoursesOnGridRowSize( wxGridSizeEvent& event ) { event.Skip(); }
		virtual void m_gridCoursesOnGridSelectCell( wxGridEvent& event ) { event.Skip(); }
		virtual void m_buttonDoctorCoursesBackOnButtonClick( wxCommandEvent& event );
		virtual void m_buttonDoctorCoursesSaveOnButtonClick( wxCommandEvent& event );


	public:

		Doctor_Courses_Frame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Курсы лечения"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 900,600 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~Doctor_Courses_Frame();

};

///////////////////////////////////////////////////////////////////////////////
/// Class Doctor_CreatePatient_Frame
///////////////////////////////////////////////////////////////////////////////
class Doctor_CreatePatient_Frame : public wxFrame
{
	private:

	public:
		wxPanel* m_panel2;
		wxStaticText* m_staticTextFname;
		wxTextCtrl* m_textFname;
		wxStaticText* m_staticTextFname1;
		wxTextCtrl* m_textLname;
		wxStaticText* m_staticTextBirthday;
		wxSpinCtrl* m_spinCtrlDay;
		wxSpinCtrl* m_spinCtrlMonth;
		wxSpinCtrl* m_spinCtrlYear;
		wxStaticText* m_staticTextDiagnosis;
		wxTextCtrl* m_textCtrlDiagnosis;
		wxStaticText* m_staticTextComplaints;
		wxTextCtrl* m_textCtrlComplaints;
		wxStaticText* m_staticTextCourses;
		wxListBox* m_listBoxCourses;
		wxButton* m_buttonDoctorCreatePatientBack;
		wxButton* m_buttonDoctorCreatePatientSave;

		// Virtual event handlers, override them in your derived class
		virtual void m_textFnameOnText( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_textFnameOnTextEnter( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_textFnameOnTextMaxLen( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_textFnameOnTextURL( wxTextUrlEvent& event ) { event.Skip(); }
		virtual void m_textLnameOnText( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_textLnameOnTextEnter( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_textLnameOnTextMaxLen( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_textLnameOnTextURL( wxTextUrlEvent& event ) { event.Skip(); }
		virtual void m_spinCtrlDayOnSpinCtrl( wxSpinEvent& event ) { event.Skip(); }
		virtual void m_spinCtrlDayOnSpinCtrlText( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_spinCtrlDayOnTextEnter( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_spinCtrlMonthOnSpinCtrl( wxSpinEvent& event ) { event.Skip(); }
		virtual void m_spinCtrlMonthOnSpinCtrlText( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_spinCtrlMonthOnTextEnter( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_spinCtrlYearOnSpinCtrl( wxSpinEvent& event ) { event.Skip(); }
		virtual void m_spinCtrlYearOnSpinCtrlText( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_spinCtrlYearOnTextEnter( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_textCtrlDiagnosisOnText( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_textCtrlDiagnosisOnTextEnter( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_textCtrlDiagnosisOnTextMaxLen( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_textCtrlDiagnosisOnTextURL( wxTextUrlEvent& event ) { event.Skip(); }
		virtual void m_textCtrlComplaintsOnText( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_textCtrlComplaintsOnTextEnter( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_textCtrlComplaintsOnTextMaxLen( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_textCtrlComplaintsOnTextURL( wxTextUrlEvent& event ) { event.Skip(); }
		virtual void m_listBoxCoursesOnListBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_listBoxCoursesOnListBoxDClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_buttonDoctorCreatePatientBackOnButtonClick( wxCommandEvent& event );
		virtual void m_buttonDoctorCreatePatientSaveOnButtonClick( wxCommandEvent& event );


	public:

		Doctor_CreatePatient_Frame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Создать пациента"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 900,600 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~Doctor_CreatePatient_Frame();

};

///////////////////////////////////////////////////////////////////////////////
/// Class Doctor_CreateCourse_Frame
///////////////////////////////////////////////////////////////////////////////
class Doctor_CreateCourse_Frame : public wxFrame
{
	private:

	protected:
		wxPanel* m_panel2;
		wxStaticText* m_staticTextCourseTitle;
		wxTextCtrl* m_textCtrlCourseTitle;
		wxStaticText* m_staticTextCourseDescription;
		wxTextCtrl* m_textCtrlCourseDescription;
		wxStaticText* m_staticTextExams;
		wxCheckListBox* m_checkListExams;
		wxStaticText* m_staticTextProcedures;
		wxCheckListBox* m_checkListProcedures;
		wxButton* m_buttonCreateCourseBack;
		wxButton* m_buttonDoctorCreateCourseSave;

		// Virtual event handlers, override them in your derived class
		virtual void m_textCtrlCourseTitleOnText( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_textCtrlCourseTitleOnTextEnter( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_textCtrlCourseTitleOnTextMaxLen( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_textCtrlCourseTitleOnTextURL( wxTextUrlEvent& event ) { event.Skip(); }
		virtual void m_textCtrlCourseDescriptionOnText( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_textCtrlCourseDescriptionOnTextEnter( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_textCtrlCourseDescriptionOnTextMaxLen( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_textCtrlCourseDescriptionOnTextURL( wxTextUrlEvent& event ) { event.Skip(); }
		virtual void m_checkListExamsOnCheckListBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_checkListExamsOnCheckListBoxDClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_checkListExamsOnCheckListBoxToggled( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_checkListProceduresOnCheckListBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_checkListProceduresOnCheckListBoxDClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_checkListProceduresOnCheckListBoxToggled( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_buttonCreateCourseBackOnButtonClick( wxCommandEvent& event );
		virtual void m_buttonDoctorCreateCourseSaveOnButtonClick( wxCommandEvent& event );


	public:

		Doctor_CreateCourse_Frame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Создать курс лечения"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 900,600 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~Doctor_CreateCourse_Frame();

};

///////////////////////////////////////////////////////////////////////////////
/// Class ChooseDep_Frame
///////////////////////////////////////////////////////////////////////////////
class ChooseDep_Frame : public wxFrame
{
	private:

	protected:
		wxPanel* m_panel2;
		wxStaticText* m_staticTextChooseDep;
		wxListBox* m_listBoxChooseDep;
		wxButton* m_buttonChooseDepBack;
		wxButton* m_buttonChooseDepNext;

		// Virtual event handlers, override them in your derived class
		virtual void m_listBoxChooseDepOnListBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_listBoxChooseDepOnListBoxDClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_buttonChooseDepBackOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_buttonChooseDepNextOnButtonClick( wxCommandEvent& event ) { event.Skip(); }


	public:

		ChooseDep_Frame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Выбор отделения"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 900,600 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~ChooseDep_Frame();

};

///////////////////////////////////////////////////////////////////////////////
/// Class ChooseOffice_Frame
///////////////////////////////////////////////////////////////////////////////
class ChooseOffice_Frame : public wxFrame
{
	private:

	protected:
		wxPanel* m_panel2;
		wxStaticText* m_staticTextChooseOffice;
		wxListBox* m_listBoxChooseOffice;
		wxButton* m_buttonChooseOfficeBack;
		wxButton* m_buttonChooseOfficeNext;

		// Virtual event handlers, override them in your derived class
		virtual void m_listBoxChooseOfficeOnListBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_listBoxChooseOfficeOnListBoxDClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_buttonChooseOfficeBackOnButtonClick( wxCommandEvent& event );
		virtual void m_buttonChooseOfficeNextOnButtonClick( wxCommandEvent& event );


	public:

		ChooseOffice_Frame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Выбор кабинета"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 900,600 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~ChooseOffice_Frame();

};

///////////////////////////////////////////////////////////////////////////////
/// Class Nurse_Patients_Frame
///////////////////////////////////////////////////////////////////////////////
class Nurse_Patients_Frame : public wxFrame
{
	private:

	protected:
		wxPanel* m_panel2;
		wxGrid* m_gridPatients;
		wxButton* m_buttonNursePatientsBack;

		// Virtual event handlers, override them in your derived class
		virtual void m_gridPatientsOnGridCellChange( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCellLeftClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCellLeftDClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCellRightClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCellRightDClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCmdCellChange( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCmdCellLeftClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCmdCellLeftDClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCmdCellRightClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCmdCellRightDClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCmdColSize( wxGridSizeEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCmdEditorCreated( wxGridEditorCreatedEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCmdEditorHidden( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCmdEditorShown( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCmdLabelLeftClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCmdLabelLeftDClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCmdLabelRightClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCmdLabelRightDClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCmdRangeSelect( wxGridRangeSelectEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCmdRowSize( wxGridSizeEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCmdSelectCell( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridColSize( wxGridSizeEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridEditorCreated( wxGridEditorCreatedEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridEditorHidden( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridEditorShown( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridLabelLeftClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridLabelLeftDClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridLabelRightClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridLabelRightDClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridRangeSelect( wxGridRangeSelectEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridRowSize( wxGridSizeEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridSelectCell( wxGridEvent& event ) { event.Skip(); }
		virtual void m_buttonNursePatientsBackOnButtonClick( wxCommandEvent& event );


	public:

		Nurse_Patients_Frame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Пациенты"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 900,600 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~Nurse_Patients_Frame();

};

///////////////////////////////////////////////////////////////////////////////
/// Class Worker_Patients_Frame
///////////////////////////////////////////////////////////////////////////////
class Worker_Patients_Frame : public wxFrame
{
	private:

	protected:
		wxPanel* m_panel2;
		wxGrid* m_gridPatients;
		wxButton* m_buttonWorkerPatientsBack;

		// Virtual event handlers, override them in your derived class
		virtual void m_gridPatientsOnGridCellChange( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCellLeftClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCellLeftDClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCellRightClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCellRightDClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCmdCellChange( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCmdCellLeftClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCmdCellLeftDClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCmdCellRightClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCmdCellRightDClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCmdColSize( wxGridSizeEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCmdEditorCreated( wxGridEditorCreatedEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCmdEditorHidden( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCmdEditorShown( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCmdLabelLeftClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCmdLabelLeftDClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCmdLabelRightClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCmdLabelRightDClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCmdRangeSelect( wxGridRangeSelectEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCmdRowSize( wxGridSizeEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridCmdSelectCell( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridColSize( wxGridSizeEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridEditorCreated( wxGridEditorCreatedEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridEditorHidden( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridEditorShown( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridLabelLeftClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridLabelLeftDClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridLabelRightClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridLabelRightDClick( wxGridEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridRangeSelect( wxGridRangeSelectEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridRowSize( wxGridSizeEvent& event ) { event.Skip(); }
		virtual void m_gridPatientsOnGridSelectCell( wxGridEvent& event ) { event.Skip(); }
		virtual void m_buttonWorkerPatientsBackOnButtonClick( wxCommandEvent& event );


	public:

		Worker_Patients_Frame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Пациенты"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 900,600 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~Worker_Patients_Frame();

};

