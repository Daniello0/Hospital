#include "string"
#include "SFML/Graphics.hpp"
using namespace std;
using namespace sf;

struct my_Time
{
    unsigned int hours;
    unsigned int minutes;
};

struct Course {
    string course_name;
    string course_description;
    Office procedures[100];
    void create_course();
    void delete_course();
};

struct Patient
{
    string first_name;
    string last_name;
    int birth_date; //ddmmyyyy
    string diagnosis;
    string complaints;
    Course courses[100];

    void create_patient();
    void delete_patient();
};

struct Chamber : Patient
{
    int chamber_size = 4;
    int chamber_number;
};

struct Office
{
    string office_name;
    int office_number;
    my_Time office_opens_time;
    my_Time office_closes_time;
};

struct Department : Chamber
{
    string department_name;
};

struct Hospital : Department, Office
{

};