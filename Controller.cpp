#include <wx/wx.h>
#include "wx/fileconf.h"
#include "iostream"
#include "fstream"
#include "View/View.h"
#include "Model.cpp"
#include "string"
#include "numeric"

using namespace std;

Courses* courses;

//Main void's
void Start()
{
    ECG_office.office_name = "ECG";
    ECG_office.office_number = 118;
    ECG_office.office_opens_time.SetHour(9);
    ECG_office.office_opens_time.SetMinute(0);
    ECG_office.office_closes_time.SetHour(18);
    ECG_office.office_closes_time.SetMinute(30);

    CT_office.office_name = "CT";
    CT_office.office_number = 134;
    CT_office.office_opens_time.SetHour(8);
    CT_office.office_opens_time.SetMinute(0);
    CT_office.office_closes_time.SetHour(20);
    CT_office.office_closes_time.SetMinute(0);

    MRI_office.office_name = "MRI";
    MRI_office.office_number = 38;
    MRI_office.office_opens_time.SetHour(11);
    MRI_office.office_opens_time.SetMinute(0);
    MRI_office.office_closes_time.SetHour(15);
    MRI_office.office_closes_time.SetMinute(30);

    FGDS_office.office_name = "FG(D)S";
    FGDS_office.office_number = 214;
    FGDS_office.office_opens_time.SetHour(15);
    FGDS_office.office_opens_time.SetMinute(0);
    FGDS_office.office_closes_time.SetHour(21);
    FGDS_office.office_closes_time.SetMinute(0);

    Surgery.office_name = "Surgery";
    Surgery.office_number = 66;
    Surgery.office_opens_time.SetHour(8);
    Surgery.office_opens_time.SetMinute(0);
    Surgery.office_closes_time.SetHour(22);
    Surgery.office_closes_time.SetMinute(0);
}

//Main Frame Buttons
void Main_Frame::m_buttonExitHospitalOnButtonClick(wxCommandEvent &event)
{
    Main_Frame::Close();
}
void Main_Frame::m_buttonDoctorOnButtonClick(wxCommandEvent &event)
{
    auto* doctor_frame = new Doctor_Frame(nullptr);
    doctor_frame->SetPosition(Main_Frame::GetPosition());
    doctor_frame->Show();
    Main_Frame::Close();
}
void Main_Frame::m_buttonNurseOnButtonClick(wxCommandEvent &event)
{
    auto* nurse_patients_frame = new Nurse_Patients_Frame(nullptr);
    nurse_patients_frame->SetPosition(Main_Frame::GetPosition());
    nurse_patients_frame->Show();
    Main_Frame::Close();
}
void Main_Frame::m_buttonWorkerOnButtonClick(wxCommandEvent &event)
{
    auto* choose_office_frame = new ChooseOffice_Frame(nullptr);
    choose_office_frame->SetPosition(Main_Frame::GetPosition());
    choose_office_frame->Show();
    Main_Frame::Close();
}
//Doctor Frame Buttons
void Doctor_Patients_Frame::m_buttonDoctorPatientsSaveOnButtonClick(wxCommandEvent &event)
{
    ofstream patients_to_file("patients.txt");
    int row = 0;
    for (int col=0; col<m_gridPatients->GetNumberCols(); col++)
    {
        if (m_gridPatients->GetCellValue(row, 0).IsEmpty())
        {
            break;
        }
        patients_to_file << m_gridPatients->GetCellValue(row, 0) << endl << "Name" << endl;
        patients_to_file << m_gridPatients->GetCellValue(row, 1) << endl << "Surname" << endl;
        patients_to_file << m_gridPatients->GetCellValue(row, 2) << endl << "DOB" << endl;
        patients_to_file << m_gridPatients->GetCellValue(row, 3) << endl << "Diagnosis" << endl;
        patients_to_file << m_gridPatients->GetCellValue(row, 4) << endl << "Complaints" << endl;
        patients_to_file << m_gridPatients->GetCellValue(row, 5) << endl << "Course" << endl;
        row++;
    }
    patients_to_file.close();
    m_buttonDoctorPatientsBackOnButtonClick(event);
}
void Doctor_Frame::m_buttonDoctorBackOnButtonClick(wxCommandEvent &event)
{
    auto* main_frame = new Main_Frame(nullptr);
    main_frame->SetPosition(Doctor_Frame::GetPosition());
    main_frame->Show();
    Doctor_Frame::Close();
}
void Doctor_Frame::m_buttonDoctorPatientsOnButtonClick(wxCommandEvent &event)
{
    auto* doctor_patients_frame = new Doctor_Patients_Frame(nullptr);
    doctor_patients_frame->SetPosition(Doctor_Frame::GetPosition());

    ifstream patients_from_file("patients.txt");
    int row = 0;
    string line;
    vector<string> arr;
    while (getline(patients_from_file, line))
    {
        arr.push_back(line);
        if (line == "Name")
        {
            doctor_patients_frame->m_gridPatients->SetCellValue(row, 0, arr[0]);
            arr.clear();
        }
        if (line == "Surname")
        {
            doctor_patients_frame->m_gridPatients->SetCellValue(row, 1, arr[0]);
            arr.clear();
        }
        if (line == "DOB")
        {
            doctor_patients_frame->m_gridPatients->SetCellValue(row, 2, arr[0]);
            arr.clear();
        }
        if (line == "Diagnosis")
        {
            doctor_patients_frame->m_gridPatients->SetCellValue(row, 3, arr[0]);
            arr.clear();
        }
        if (line == "Complaints")
        {
            doctor_patients_frame->m_gridPatients->SetCellValue(row, 4, arr[0]);
            arr.clear();
        }
        if (line == "Course")
        {
            doctor_patients_frame->m_gridPatients->SetCellValue(row, 5, arr[0]);
            arr.clear();
            row++;
        }
    }

    doctor_patients_frame->Show();
    Doctor_Frame::Close();
}
void Doctor_Frame::m_buttonDoctorCoursesOnButtonClick(wxCommandEvent &event)
{
    auto* doctor_courses_frame = new Doctor_Courses_Frame(nullptr);
    doctor_courses_frame->SetPosition(Doctor_Frame::GetPosition());

    ifstream courses_from_file("courses.txt");
    int row = 0;
    string line;
    vector<string> mas;
    while (getline(courses_from_file, line))
    {
        mas.push_back(line);
        if (line == "Title")
        {
            doctor_courses_frame->m_gridCourses->SetCellValue(row, 0, mas[0]);
            mas.clear();
        }
        if (line == "Description")
        {
            doctor_courses_frame->m_gridCourses->SetCellValue(row, 1, mas[0]);
            mas.clear();
        }
        if (line == "Exams")
        {
            mas.pop_back();
            mas.pop_back();
            string result = accumulate(mas.begin(), mas.end(), string(),
                                       [](const string& acc, const string& s) {
                return acc.empty() ? s : acc + "\n" + s; });
            doctor_courses_frame->m_gridCourses->SetCellValue(row, 2, result);
            mas.clear();
        }
        if (line == "Procedures")
        {
            mas.pop_back();
            mas.pop_back();
            string result = accumulate(mas.begin(), mas.end(), string(),
                                       [](const string& acc, const string& s) {
                                           return acc.empty() ? s : acc + "\n" + s; });
            doctor_courses_frame->m_gridCourses->SetCellValue(row, 3, result);
            mas.clear();
            row++;
        }
    }

    doctor_courses_frame->Show();
    Doctor_Frame::Close();
}
void Doctor_Frame::m_buttonDoctorCreatePatientOnButtonClick(wxCommandEvent &event)
{
    auto* doctor_create_patient_frame = new Doctor_CreatePatient_Frame(nullptr);
    doctor_create_patient_frame->SetPosition(Doctor_Frame::GetPosition());
    doctor_create_patient_frame->Show();
    Doctor_Frame::Close();
}
void Doctor_Frame::m_buttonDoctorCreateCourseOnButtonClick(wxCommandEvent &event)
{
    auto* doctor_create_course_frame = new Doctor_CreateCourse_Frame(nullptr);
    doctor_create_course_frame->SetPosition(Doctor_Frame::GetPosition());
    doctor_create_course_frame->Show();
    Doctor_Frame::Close();
}
void Doctor_Patients_Frame::m_buttonDoctorPatientsBackOnButtonClick(wxCommandEvent &event)
{
    auto* doctor_frame = new Doctor_Frame(nullptr);
    doctor_frame->SetPosition(Doctor_Patients_Frame::GetPosition());
    doctor_frame->Show();
    Doctor_Patients_Frame::Close();
}
void Doctor_Courses_Frame::m_buttonDoctorCoursesBackOnButtonClick(wxCommandEvent &event)
{
    auto* doctor_frame = new Doctor_Frame(nullptr);
    doctor_frame->SetPosition(Doctor_Courses_Frame::GetPosition());
    doctor_frame->Show();
    Doctor_Courses_Frame::Close();
}
void Doctor_Courses_Frame::m_buttonDoctorCoursesSaveOnButtonClick(wxCommandEvent &event)
{
    ofstream courses_to_file("courses.txt");
    int row = 0;
    for (int col=0; col<m_gridCourses->GetNumberCols(); col++)
    {
        if (m_gridCourses->GetCellValue(row, 0).IsEmpty())
        {
            break;
        }
        courses_to_file << m_gridCourses->GetCellValue(row, 0) << endl << "Title" << endl;
        courses_to_file << m_gridCourses->GetCellValue(row, 1) << endl << "Description" << endl;
        courses_to_file << m_gridCourses->GetCellValue(row, 2) << endl << endl << "Exams" << endl;
        courses_to_file << m_gridCourses->GetCellValue(row, 3) << endl << endl << "Procedures" << endl;
        row++;
    }
    courses_to_file.close();
    m_buttonDoctorCoursesBackOnButtonClick(event);
}
void Doctor_CreatePatient_Frame::m_buttonDoctorCreatePatientBackOnButtonClick(wxCommandEvent &event)
{
    auto* doctor_frame = new Doctor_Frame(nullptr);
    doctor_frame->SetPosition(Doctor_CreatePatient_Frame::GetPosition());
    doctor_frame->Show();
    Doctor_CreatePatient_Frame::Close();
}
void Doctor_CreatePatient_Frame::m_buttonDoctorCreatePatientSaveOnButtonClick(wxCommandEvent &event)
{
    if (!m_textFname->IsEmpty() and !m_textLname->IsEmpty() and !m_textCtrlDiagnosis->IsEmpty()
    and !m_textCtrlComplaints->IsEmpty() and !m_listBoxCourses->GetStringSelection().IsEmpty())
    {
        ofstream patients_to_file("patients.txt", ios::app);
        patients_to_file << m_textFname->GetValue() << endl;
        patients_to_file << "Name" << endl;
        patients_to_file << m_textLname->GetValue() << endl;
        patients_to_file << "Surname" << endl;
        wxDateTime birthday;
        birthday.SetDay(m_spinCtrlDay->GetValue());
        birthday.SetMonth(static_cast<wxDateTime::Month>(m_spinCtrlMonth->GetValue()));
        birthday.SetYear(m_spinCtrlYear->GetValue());
        patients_to_file << birthday.Format("%d.%m.%Y") << endl;
        patients_to_file << "DOB" << endl;
        patients_to_file << m_textCtrlDiagnosis->GetValue() << endl;
        patients_to_file << "Diagnosis" << endl;
        patients_to_file << m_textCtrlComplaints->GetValue() << endl;
        patients_to_file << "Complaints" << endl;
        for (int i=0; i<m_listBoxCourses->GetCount(); i++)
        {
            if (m_listBoxCourses->IsSelected(i))
            {
                patients_to_file << m_listBoxCourses->GetString(i) << endl;
                patients_to_file << "Course" << endl;
            }
        }
        patients_to_file.close();
        m_buttonDoctorCreatePatientBackOnButtonClick(event);
    }
}
void Doctor_CreateCourse_Frame::m_buttonCreateCourseBackOnButtonClick(wxCommandEvent &event)
{
    auto* doctor_frame = new Doctor_Frame(nullptr);
    doctor_frame->SetPosition(Doctor_CreateCourse_Frame::GetPosition());
    doctor_frame->Show();
    Doctor_CreateCourse_Frame::Close();
}
void Doctor_CreateCourse_Frame::m_buttonDoctorCreateCourseSaveOnButtonClick(wxCommandEvent &event)
{
    if (!m_textCtrlCourseTitle->IsEmpty() and !m_textCtrlCourseDescription->IsEmpty() and
    (m_checkListExams->IsChecked(0) or m_checkListExams->IsChecked(1) or m_checkListExams->IsChecked(2) or
            m_checkListExams->IsChecked(3) or m_checkListExams->IsChecked(4)) and
            (m_checkListProcedures->IsChecked(0) or m_checkListProcedures->IsChecked(1) or
                    m_checkListProcedures->IsChecked(2)))
    {
        ofstream course_to_file("courses.txt", ios::app);
        course_to_file << m_textCtrlCourseTitle->GetValue() << endl;
        course_to_file << "Title" << endl;
        course_to_file << m_textCtrlCourseDescription->GetValue() << endl;
        course_to_file << "Description" << endl;
        for (int i=0; i<m_checkListExams->GetCount(); i++)
        {
            if (m_checkListExams->IsChecked(i))
            {
                course_to_file << m_checkListExams->GetString(i) << endl;
            }
        }
        course_to_file << endl;
        course_to_file << "Exams" << endl;
        for (int i=0; i<m_checkListProcedures->GetCount(); i++)
        {
            if (m_checkListProcedures->IsChecked(i))
            {
                course_to_file << m_checkListProcedures->GetString(i) << endl;
            }
        }
        course_to_file << endl << "Procedures" << endl;
        course_to_file.close();
        m_buttonCreateCourseBackOnButtonClick(event);
    }
}
//Other buttons
void ChooseOffice_Frame::m_buttonChooseOfficeBackOnButtonClick(wxCommandEvent &event)
{
    auto* main_frame = new Main_Frame(nullptr);
    main_frame->SetPosition(ChooseOffice_Frame::GetPosition());
    main_frame->Show();
    ChooseOffice_Frame::Close();
}
void Nurse_Patients_Frame::m_buttonNursePatientsBackOnButtonClick(wxCommandEvent &event)
{
    auto* main_frame = new Main_Frame(nullptr);
    main_frame->SetPosition(Nurse_Patients_Frame::GetPosition());
    main_frame->Show();
    Nurse_Patients_Frame::Close();
}
void Worker_Patients_Frame::m_buttonWorkerPatientsBackOnButtonClick(wxCommandEvent &event)
{
    auto* choose_office = new ChooseOffice_Frame(nullptr);
    choose_office->SetPosition(Worker_Patients_Frame::GetPosition());
    choose_office->Show();
    Worker_Patients_Frame::Close();
}
//ChooseOffice Buttons
void ChooseOffice_Frame::m_buttonChooseOfficeNextOnButtonClick(wxCommandEvent &event)
{
    if (m_listBoxChooseOffice->IsSelected(0))
    {
        selected_office = MRI_office;
        auto* worker_patients_frame = new Worker_Patients_Frame(nullptr);
        worker_patients_frame->SetPosition(ChooseOffice_Frame::GetPosition());
        worker_patients_frame->Show();
        ChooseOffice_Frame::Close();
    }
    else if (m_listBoxChooseOffice->IsSelected(1))
    {
        selected_office = ECG_office;
        auto* worker_patients_frame = new Worker_Patients_Frame(nullptr);
        worker_patients_frame->SetPosition(ChooseOffice_Frame::GetPosition());
        worker_patients_frame->Show();
        ChooseOffice_Frame::Close();
    }
    else if (m_listBoxChooseOffice->IsSelected(2))
    {
        selected_office = FGDS_office;
        auto* worker_patients_frame = new Worker_Patients_Frame(nullptr);
        worker_patients_frame->SetPosition(ChooseOffice_Frame::GetPosition());
        worker_patients_frame->Show();
        ChooseOffice_Frame::Close();
    }
    else if (m_listBoxChooseOffice->IsSelected(3))
    {
        selected_office = CT_office;
        auto* worker_patients_frame = new Worker_Patients_Frame(nullptr);
        worker_patients_frame->SetPosition(ChooseOffice_Frame::GetPosition());
        worker_patients_frame->Show();
        ChooseOffice_Frame::Close();
    }
}

//Main Class
class MyApp : public wxApp {
public:
    virtual bool OnInit() {
        Doctor doctor;
        Start();
        auto* main_frame = new Main_Frame(nullptr);
        main_frame->Show();
        return true;
    }
};

wxIMPLEMENT_APP(MyApp);