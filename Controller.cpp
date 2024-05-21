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

    //Prepare
    ifstream from_ECG("ECG.txt");
    ifstream from_MRI("MRI.txt");
    ifstream from_FGDS("FG(D)S.txt");
    ifstream from_CT("CT.txt");
    ifstream from_Surgery("Surgery.txt");

    vector<string> lines;
    vector<tuple<string, int, string, wxDateTime>> patients;
    string line;

    //Getting patients from files
    while (getline(from_ECG, line))
    {
        lines.push_back(line);
        if (lines.size() == 2)
        {
            wxDateTime dateTime;
            dateTime.ParseFormat(lines[1], "%d.%m.%Y %H:%M");
            patients.push_back(make_tuple(lines[0], ECG_office.office_number, "ЭКГ", dateTime));
            lines.clear();
        }
    }
    while (getline(from_MRI, line))
    {
        lines.push_back(line);
        if (lines.size() == 2)
        {
            wxDateTime dateTime;
            dateTime.ParseFormat(lines[1], "%d.%m.%Y %H:%M");
            patients.push_back(make_tuple(lines[0], MRI_office.office_number, "МРТ", dateTime));
            lines.clear();
        }
    }
    while (getline(from_FGDS, line))
    {
        lines.push_back(line);
        if (lines.size() == 2)
        {
            wxDateTime dateTime;
            dateTime.ParseFormat(lines[1], "%d.%m.%Y %H:%M");
            patients.push_back(make_tuple(lines[0], FGDS_office.office_number, "ФГ(Д)С", dateTime));
            lines.clear();
        }
    }
    while (getline(from_CT, line))
    {
        lines.push_back(line);
        if (lines.size() == 2)
        {
            wxDateTime dateTime;
            dateTime.ParseFormat(lines[1], "%d.%m.%Y %H:%M");
            patients.push_back(make_tuple(lines[0], CT_office.office_number, "КТ", dateTime));
            lines.clear();
        }
    }
    while (getline(from_Surgery, line))
    {
        lines.push_back(line);
        if (lines.size() == 2)
        {
            wxDateTime dateTime;
            dateTime.ParseFormat(lines[1], "%d.%m.%Y %H:%M");
            patients.push_back(make_tuple(lines[0], Surgery.office_number, "Операционная", dateTime));
            lines.clear();
        }
    }

    //Sorting
    std::sort(patients.begin(), patients.end(), [](const auto& a, const auto& b) {
        return std::get<3>(a) < std::get<3>(b);
    });

    //Adding other info
    ifstream data_from_file;
    line.clear();
    Patient patient;

    while (getline(data_from_file, line))
    {
        if (line == "Name")
        {
            patient.first_name = lines[0];
            lines.clear();
        }
        if (line == "Surname")
        {
            patient.last_name = lines[0];
            lines.clear();
        }
        lines.push_back(line);
    }

    for (int i=0; i<patients.size(); i++)
    {
        nurse_patients_frame->m_gridPatients->SetCellValue(i, 0, get<0>(patients[i]));
        nurse_patients_frame->m_gridPatients->SetCellValue(i, 1, to_string(get<1>(patients[i])));
        nurse_patients_frame->m_gridPatients->SetCellValue(i, 2, get<2>(patients[i]));
        nurse_patients_frame->m_gridPatients->SetCellValue(i, 3, get<3>(patients[i]).Format("%d.%m.%Y %H:%M"));
    }

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
void Doctor_Frame::m_buttonDoctorCursesOnButtonClick(wxCommandEvent &event)
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
        }
        if (line == "Days")
        {
            doctor_courses_frame->m_gridCourses->SetCellValue(row, 4, mas[0]);
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

    ifstream courses_from_file("courses.txt");
    vector<string> lines;
    vector<string> titles;
    string line;
    while (getline(courses_from_file, line))
    {
        lines.push_back(line);
        if (line == "Title")
        {
            titles.push_back(*(lines.end()-2));
            lines.clear();
        }
    }
    for (const string &title : titles)
    {
        doctor_create_patient_frame->m_listBoxCourses->Append(title);
    }

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
        courses_to_file << m_gridCourses->GetCellValue(row, 4) << endl << "Days" << endl;
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
bool ParseDateTime(const std::string& str, wxDateTime& dateTime) {
    // Пример формата: "23.05.2024 09:30"
    return dateTime.ParseFormat(str, "%d.%m.%Y %H:%M");
}
void Doctor_CreatePatient_Frame::m_buttonDoctorCreatePatientSaveOnButtonClick(wxCommandEvent &event)
{
    if (!m_textFname->IsEmpty() and !m_textLname->IsEmpty() and !m_textCtrlDiagnosis->IsEmpty()
    and !m_textCtrlComplaints->IsEmpty() and !m_listBoxCourses->GetStringSelection().IsEmpty())
    {
        string selected;
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
                selected = m_listBoxCourses->GetString(i);
                patients_to_file << m_listBoxCourses->GetString(i) << endl;
                patients_to_file << "Course" << endl;
            }
        }
        patients_to_file.close();
        //Write to worker-nurse schedule
        string line;
        wxString patient_name = m_textFname->GetValue();
        vector<string> patient_exams;
        ifstream course_from_file("courses.txt");
        bool is_selected = false;
        bool start_adding = false;
        while (getline(course_from_file, line))
        {
            if (line == selected)
            {
                is_selected = true;
                continue;
            }
            if (is_selected and line == "")
            {
                is_selected = false;
                continue;
            }
            if (is_selected and start_adding)
            {
                patient_exams.push_back(line);
            }
            if (is_selected and line == "Description")
            {
                start_adding = true;
                continue;
            }
        }
        //To-From-File Exams' dates
        for (const string& exam : patient_exams)
        {
            //ECG
            if (exam == "ЭКГ")
            {
                //Prepare
                wxDateTime last_time = wxDateTime::Today();
                wxTimeSpan duration = wxTimeSpan::Minutes(15);
                last_time.SetDay((wxDateTime::Today().Add(wxDateSpan::Day())).GetDay());
                last_time.SetHour(ECG_office.office_opens_time.GetHour());
                last_time.SetMinute(ECG_office.office_opens_time.GetMinute());
                ifstream from_ecg("ECG.txt");
                string line;
                //Get last date
                while (getline(from_ecg, line))
                {
                    wxDateTime temp_time;
                    if (ParseDateTime(line, temp_time)) {
                        last_time = temp_time;
                    }
                }
                last_time.Add(duration);
                //If more
                if (last_time.GetHour() >= ECG_office.office_closes_time.GetHour()
                and last_time.GetHour() >= ECG_office.office_closes_time.GetHour())
                {
                    last_time.Add(wxDateSpan::Day());
                    last_time.SetHour(ECG_office.office_opens_time.GetHour());
                    last_time.SetMinute(ECG_office.office_opens_time.GetMinute());
                }
                //To file
                ofstream to_ecg("ECG.txt", ios::app);
                to_ecg << patient_name << endl;
                to_ecg << last_time.Format("%d.%m.%Y %H:%M") << endl;
            }
            if (exam == "МРТ")
            {
                //Prepare
                wxDateTime last_time = wxDateTime::Today();
                wxTimeSpan duration = wxTimeSpan::Minutes(15);
                last_time.SetDay((wxDateTime::Today().Add(wxDateSpan::Day())).GetDay());
                last_time.SetHour(MRI_office.office_opens_time.GetHour());
                last_time.SetMinute(MRI_office.office_opens_time.GetMinute());
                ifstream from_mri("MRI.txt");
                string line;
                //Get last date
                while (getline(from_mri, line))
                {
                    wxDateTime temp_time;
                    if (ParseDateTime(line, temp_time)) {
                        last_time = temp_time;
                    }
                }
                last_time.Add(duration);
                //If more
                if (last_time.GetHour() >= MRI_office.office_closes_time.GetHour()
                    and last_time.GetHour() >= MRI_office.office_closes_time.GetHour())
                {
                    last_time.Add(wxDateSpan::Day());
                    last_time.SetHour(MRI_office.office_opens_time.GetHour());
                    last_time.SetMinute(MRI_office.office_opens_time.GetMinute());
                }
                //To file
                ofstream to_mri("MRI.txt", ios::app);
                to_mri << patient_name << endl;
                to_mri << last_time.Format("%d.%m.%Y %H:%M") << endl;
            }
            if (exam == "КТ")
            {
                //Prepare
                wxDateTime last_time = wxDateTime::Today();
                wxTimeSpan duration = wxTimeSpan::Minutes(15);
                last_time.SetDay((wxDateTime::Today().Add(wxDateSpan::Day())).GetDay());
                last_time.SetHour(CT_office.office_opens_time.GetHour());
                last_time.SetMinute(CT_office.office_opens_time.GetMinute());
                ifstream from_ct("CT.txt");
                string line;
                //Get last date
                while (getline(from_ct, line))
                {
                    wxDateTime temp_time;
                    if (ParseDateTime(line, temp_time)) {
                        last_time = temp_time;
                    }
                }
                last_time.Add(duration);
                //If more
                if (last_time.GetHour() >= CT_office.office_closes_time.GetHour()
                    and last_time.GetHour() >= CT_office.office_closes_time.GetHour())
                {
                    last_time.Add(wxDateSpan::Day());
                    last_time.SetHour(CT_office.office_opens_time.GetHour());
                    last_time.SetMinute(CT_office.office_opens_time.GetMinute());
                }
                //To file
                ofstream to_ct("CT.txt", ios::app);
                to_ct << patient_name << endl;
                to_ct << last_time.Format("%d.%m.%Y %H:%M") << endl;
            }
            if (exam == "ФГ(Д)С")
            {
                //Prepare
                wxDateTime last_time = wxDateTime::Today();
                wxTimeSpan duration = wxTimeSpan::Minutes(15);
                last_time.SetDay((wxDateTime::Today().Add(wxDateSpan::Day())).GetDay());
                last_time.SetHour(FGDS_office.office_opens_time.GetHour());
                last_time.SetMinute(FGDS_office.office_opens_time.GetMinute());
                ifstream from_fgds("FG(D)S.txt");
                string line;
                //Get last date
                while (getline(from_fgds, line))
                {
                    wxDateTime temp_time;
                    if (ParseDateTime(line, temp_time)) {
                        last_time = temp_time;
                    }
                }
                last_time.Add(duration);
                //If more
                if (last_time.GetHour() >= FGDS_office.office_closes_time.GetHour()
                    and last_time.GetHour() >= FGDS_office.office_closes_time.GetHour())
                {
                    last_time.Add(wxDateSpan::Day());
                    last_time.SetHour(FGDS_office.office_opens_time.GetHour());
                    last_time.SetMinute(FGDS_office.office_opens_time.GetMinute());
                }
                //To file
                ofstream to_fgds("FG(D)S.txt", ios::app);
                to_fgds << patient_name << endl;
                to_fgds << last_time.Format("%d.%m.%Y %H:%M") << endl;
            }
            if (exam == "Операционная")
            {
                //Prepare
                wxDateTime last_time = wxDateTime::Today();
                wxTimeSpan duration = wxTimeSpan::Minutes(15);
                last_time.SetDay((wxDateTime::Today().Add(wxDateSpan::Day())).GetDay());
                last_time.SetHour(Surgery.office_opens_time.GetHour());
                last_time.SetMinute(Surgery.office_opens_time.GetMinute());
                ifstream from_surgery("Surgery.txt");
                string line;
                //Get last date
                while (getline(from_surgery, line))
                {
                    wxDateTime temp_time;
                    if (ParseDateTime(line, temp_time)) {
                        last_time = temp_time;
                    }
                }
                last_time.Add(duration);
                //If more
                if (last_time.GetHour() >= Surgery.office_closes_time.GetHour()
                    and last_time.GetHour() >= Surgery.office_closes_time.GetHour())
                {
                    last_time.Add(wxDateSpan::Day());
                    last_time.SetHour(Surgery.office_opens_time.GetHour());
                    last_time.SetMinute(Surgery.office_opens_time.GetMinute());
                }
                //To file
                ofstream to_surgery("Surgery.txt", ios::app);
                to_surgery << patient_name << endl;
                to_surgery << last_time.Format("%d.%m.%Y %H:%M") << endl;
            }
        }

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
        course_to_file << m_spinCtrlProcedureCount->GetValue() << endl;
        course_to_file << "Days" << endl;
        course_to_file.close();
        m_buttonCreateCourseBackOnButtonClick(event);
    }
}
//Delete Courses/Patients
void Doctor_Frame::m_buttonDeleteCourseOnButtonClick(wxCommandEvent &event)
{
    auto* doctor_delete_course = new DeleteCourse_Frame(nullptr);
    doctor_delete_course->SetPosition(Doctor_Frame::GetPosition());

    ifstream courses_from_file("courses.txt");
    vector<string> lines;
    vector<string> titles;
    string line;
    while (getline(courses_from_file, line))
    {
        lines.push_back(line);
        if (line == "Title")
        {
            titles.push_back(*(lines.end()-2));
            lines.clear();
        }
    }
    for (const string &title : titles)
    {
        doctor_delete_course->m_listBoxDeleteCourse->Append(title);
    }
    doctor_delete_course->Show();
    Doctor_Frame::Close();
}
void Doctor_Frame::m_buttonDeletePatientOnButtonClick(wxCommandEvent &event)
{
    auto* doctor_delete_patient = new DeletePatient_Frame(nullptr);
    doctor_delete_patient->SetPosition(Doctor_Frame::GetPosition());

    ifstream patients_from_file("patients.txt");
    vector<string> lines;
    vector<string> names;
    string line;
    while (getline(patients_from_file, line))
    {
        lines.push_back(line);
        if (line == "Name")
        {
            names.push_back(*(lines.end()-2));
            lines.clear();
        }
    }
    for (int i=0; i<names.size(); i++)
    {
        doctor_delete_patient->m_listBoxDeletePatient->Append(names[i]);
    }

    doctor_delete_patient->Show();
    Doctor_Frame::Close();
}
void DeletePatient_Frame::m_buttonDeletePatientBackOnButtonClick(wxCommandEvent &event)
{
    auto* doctor_frame = new Doctor_Frame(nullptr);
    doctor_frame->SetPosition(DeletePatient_Frame::GetPosition());
    doctor_frame->Show();
    DeletePatient_Frame::Close();
}
void DeleteCourse_Frame::m_buttonDeleteCourseBackOnButtonClick(wxCommandEvent &event)
{
    auto* doctor_frame = new Doctor_Frame(nullptr);
    doctor_frame->SetPosition(DeleteCourse_Frame::GetPosition());
    doctor_frame->Show();
    DeleteCourse_Frame::Close();
}
void DeleteCourse_Frame::m_buttonDeleteCourseDeleteOnButtonClick(wxCommandEvent &event)
{
    string name;
    for (int i=0; i<m_listBoxDeleteCourse->GetCount(); i++)
    {
        if (m_listBoxDeleteCourse->IsSelected(i))
            name = m_listBoxDeleteCourse->GetString(i);
    }
    ifstream courses_file("courses.txt");
    ofstream temp_file("temp.txt");

    string line;
    bool start_deleting = false;
    bool last_line_procedures = false;

    while (getline(courses_file, line))
    {
        if (line == name)
        {
            start_deleting = true;
            last_line_procedures = false;
            continue;
        }
        if (line == "Days")
        {
            if (start_deleting)
            {
                start_deleting = false;
                last_line_procedures = true;
                continue;
            }
        }

        if (!start_deleting)
        {
            temp_file << line << std::endl;
        }
    }

    courses_file.close();
    temp_file.close();

    if (std::remove("courses.txt") != 0)
    {
        wxLogError("Ошибка удаления исходного файла!");
        return;
    }

    if (std::rename("temp.txt", "courses.txt") != 0)
    {
        wxLogError("Ошибка переименования временного файла!");
    }
    auto* doctor_frame = new Doctor_Frame(nullptr);
    doctor_frame->SetPosition(DeleteCourse_Frame::GetPosition());
    doctor_frame->m_buttonDeleteCourseOnButtonClick(event);
    DeleteCourse_Frame::Close();
}
void DeletePatient_Frame::m_buttonDeletePatientDeleteOnButtonClick(wxCommandEvent &event)
{
    string name;
    for (int i=0; i<m_listBoxDeletePatient->GetCount(); i++)
    {
        if (m_listBoxDeletePatient->IsSelected(i))
            name = m_listBoxDeletePatient->GetString(i);
    }
    ifstream patients_file("patients.txt");
    ofstream temp_file("temp.txt");

    string line;
    bool start_deleting = false;
    bool last_line_procedures = false;

    while (getline(patients_file, line))
    {
        if (line == name)
        {
            start_deleting = true;
            last_line_procedures = false;
            continue;
        }
        if (line == "Course")
        {
            if (start_deleting)
            {
                start_deleting = false;
                last_line_procedures = true;
                continue;
            }
        }

        if (!start_deleting)
        {
            temp_file << line << std::endl;
        }
    }

    patients_file.close();
    temp_file.close();

    if (std::remove("patients.txt") != 0)
    {
        wxLogError("Ошибка удаления исходного файла!");
        return;
    }

    if (std::rename("temp.txt", "patients.txt") != 0)
    {
        wxLogError("Ошибка переименования временного файла!");
    }

    auto* doctor_frame = new Doctor_Frame(nullptr);
    doctor_frame->SetPosition(DeletePatient_Frame::GetPosition());
    doctor_frame->m_buttonDeletePatientOnButtonClick(event);
    DeletePatient_Frame::Close();
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

        worker_patients_frame->SetTitle("МРТ");
        ifstream from_mri("MRI.txt");
        string line;
        vector<string> lines;
        int row = 0;
        while (getline(from_mri, line))
        {
            lines.push_back(line);
            if (lines.size() == 2)
            {
                worker_patients_frame->m_gridPatients->SetCellValue(row, 0, lines[0]);
                worker_patients_frame->m_gridPatients->SetCellValue(row, 1, lines[1]);
                lines.clear();
                row++;
            }
        }

        worker_patients_frame->Show();
        ChooseOffice_Frame::Close();
    }
    else if (m_listBoxChooseOffice->IsSelected(1))
    {
        selected_office = ECG_office;
        auto* worker_patients_frame = new Worker_Patients_Frame(nullptr);
        worker_patients_frame->SetPosition(ChooseOffice_Frame::GetPosition());

        worker_patients_frame->SetTitle("ЭКГ");
        ifstream from_ecg("ECG.txt");
        string line;
        vector<string> lines;
        int row = 0;
        while (getline(from_ecg, line))
        {
            lines.push_back(line);
            if (lines.size() == 2)
            {
                worker_patients_frame->m_gridPatients->SetCellValue(row, 0, lines[0]);
                worker_patients_frame->m_gridPatients->SetCellValue(row, 1, lines[1]);
                lines.clear();
                row++;
            }
        }

        worker_patients_frame->Show();
        ChooseOffice_Frame::Close();
    }
    else if (m_listBoxChooseOffice->IsSelected(2))
    {
        selected_office = FGDS_office;
        auto* worker_patients_frame = new Worker_Patients_Frame(nullptr);
        worker_patients_frame->SetPosition(ChooseOffice_Frame::GetPosition());

        worker_patients_frame->SetTitle("ФГ(Д)С");
        ifstream from_fgds("FG(D)S.txt");
        string line;
        vector<string> lines;
        int row = 0;
        while (getline(from_fgds, line))
        {
            lines.push_back(line);
            if (lines.size() == 2)
            {
                worker_patients_frame->m_gridPatients->SetCellValue(row, 0, lines[0]);
                worker_patients_frame->m_gridPatients->SetCellValue(row, 1, lines[1]);
                lines.clear();
                row++;
            }
        }

        worker_patients_frame->Show();
        ChooseOffice_Frame::Close();
    }
    else if (m_listBoxChooseOffice->IsSelected(3))
    {
        selected_office = CT_office;
        auto* worker_patients_frame = new Worker_Patients_Frame(nullptr);
        worker_patients_frame->SetPosition(ChooseOffice_Frame::GetPosition());

        worker_patients_frame->SetTitle("КТ");
        ifstream from_ct("CT.txt");
        string line;
        vector<string> lines;
        int row = 0;
        while (getline(from_ct, line))
        {
            lines.push_back(line);
            if (lines.size() == 2)
            {
                worker_patients_frame->m_gridPatients->SetCellValue(row, 0, lines[0]);
                worker_patients_frame->m_gridPatients->SetCellValue(row, 1, lines[1]);
                lines.clear();
                row++;
            }
        }

        worker_patients_frame->Show();
        ChooseOffice_Frame::Close();
    }
    else if (m_listBoxChooseOffice->IsSelected(4))
    {
        selected_office = Surgery;
        auto* worker_patients_frame = new Worker_Patients_Frame(nullptr);
        worker_patients_frame->SetPosition(ChooseOffice_Frame::GetPosition());

        worker_patients_frame->SetTitle("Операционная");
        ifstream from_surgery("Surgery.txt");
        string line;
        vector<string> lines;
        int row = 0;
        while (getline(from_surgery, line))
        {
            lines.push_back(line);
            if (lines.size() == 2)
            {
                worker_patients_frame->m_gridPatients->SetCellValue(row, 0, lines[0]);
                worker_patients_frame->m_gridPatients->SetCellValue(row, 1, lines[1]);
                lines.clear();
                row++;
            }
        }

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