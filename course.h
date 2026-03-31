#ifndef COURSE_H
#define COURSE_H

#include <string>
using namespace std;

class Course 
{
private:
    string course_number;
    string course_name;
    string course_schedule;
    double course_price;

public
    Course();
    Course(const string& course_number, const string& course_name, const string& couse_schedule, const double course_price);

    string getcourse_number() const;
    string getcourse_name() const;
    string getcourse_schedule() const;
    double getcourse_price() const;

    void printCourse() const;
};

#endif
