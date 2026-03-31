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
    double course_cost;

public
    Course();
    Course(const string& number, const string& name, const string& schedule, const double cost);

    string getcourse_number() const;
    string getcourse_name() const;
    string getcourse_schedule() const;
    double getcourse_cost() const;

    void printCourse() const;
};

#endif
