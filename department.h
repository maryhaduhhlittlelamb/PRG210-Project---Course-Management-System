#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include "course.h"
using namespace std;

class Department
{
private:
    string department_name;
    Course* course_list;
    int course_count;

public:
    Department();
    Department(const string& name);
    ~Department();

    void addCourse(const Course& c);
    void printCourses() const;

    string getdepartment_name() const;

    int getcourse_count() const;
    Course getCourse(int index) const;
};

#endif
