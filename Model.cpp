#include "string"
#include "fstream"

using namespace std;

struct my_Time
{
    unsigned int hours;
    unsigned int minutes;
};

struct Office
{
    string office_name;
    int office_number = 0;
    wxDateTime office_opens_time;
    wxDateTime office_closes_time;
};

struct Procedure
{
    string procedure_name;
    int procedure_number;
};

struct Courses {
    int count;
    int GetCount()
    {
        count = 0;
        string line;
        ifstream courses_from_file("courses.txt");
        while (getline(courses_from_file, line))
        {
            if (line == " ")
                count++;
        }
        courses_from_file.close();
        return count;
    }
};

struct Patient
{
    string first_name;
    string last_name;
    wxDateTime birth_date;
    string diagnosis;
    string complaints;
    Courses courses[100];
};

struct Department
{
    string department_name;
};

struct Hospital : Department, Office{};

struct Doctor : Courses, Department
{

};

Office ECG_office;
Office MRI_office;
Office CT_office;
Office FGDS_office;
Office Surgery;

Office selected_office;