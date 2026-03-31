#ifndef COURSE_H
#define COURSE_H

#include <string>
using namespace std;

class Course {
private:
    string course_number;
    string course_name;
    string schedule;
    double price;
public
    Course();
    Course(const string& course_number, const string& course_name, const string& schedule, const double price);

    string getcourse_number() const;
    string getcourse_name() const;
    string getschedule() const;
    double getprice() const;

    void printCourse() const;
};

#endif
