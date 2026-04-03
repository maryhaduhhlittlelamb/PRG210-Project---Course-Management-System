#include "department.h"
#include <iostream>
using namespace std;

Department::Department()
{
  department_name = "";
  course_list = nullptr;
  course_count = 0;
}

Department::Department(const string& name)
{
  department_name = name;
  course_list = nullptr;
  course_count = 0;
}

Department::~Department()
{
  delete[] course_list;
}

void Department::addCourse(const Course& c)
{ 
  Course* temp = new Course[course_count + 1];
  
  for  (int i = 0; i < course_count; i++)
    temp[i] = course_list[i];
  
  temp[course_count] = c;
  delete[] course_list;
  course_list = temp;
  course_count++;
}

void Department::printCourses() const
{
  for (int i = 0; i < course_count; i++)
    course_list[i].printCourse();
}

string Department::getdepartment_name() const
{
  return department_name;
}

int Departent::getcourse_count() const
{
  return course_count;
}

Course Department::getCourse(int index) const
{
  return course_list[index];
{
