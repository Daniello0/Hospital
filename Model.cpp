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
    void create_course();
    void delete_course();
};

struct Patient : Course
{
    string first_name;
    string last_name;
    int birth_date; //ddmmyyyy
    string diagnosis;
    string complaints;
    void create_patient();
    void delete_patient();
};

struct Chamber : Patient
{
    int chamber_size = 4;
};

struct Office
{
    string office_name;
    int office_number;
    my_Time office_opens_time;
    my_Time office_closes_time;
    void create_office();
    void delete_office();
};

struct Department : Chamber
{
    string department_name;
    void create_department();
    void delete_department();
};

struct Hospital : Department, Office
{
    void create_hospital();
    void delete_hospital();
};

struct Button : RectangleShape
{
    Font font;
    Color main_button_color = Color(255, 105, 0);
    Color pressed_button_color = Color(200, 82, 0);
    void create_button()
    {
        this->setSize(Vector2f(175, 100));
        this->setOutlineThickness(1);
        this->setOutlineColor(Color::Black);
        this->setFillColor(main_button_color);
    }
};