#include "course.h"
#include <iostream>

Course::Course()
{
  course_number = "";
  course_name = "";
  course_schedule = "";
  course_cost = 0.0;
}

Course::Course(const string& number,const string& name, const string& schedule, const double& cost);
{
  course_number = number;
  course_name = name;
  course_schedule = schedule;
  course_cost = cost;
}

string Course::getcourse_number() const
{
  return course_number;
}

string Course::getcourse_name() const
{
  return course_name;
}

string Course::getcourse_schedule() const
{
  return course_schedule;
}

string Course::getcost() const
{
  return course_cost;
}

void Course::printCourse() const
{
  cout << course_number << " " << course_name << " (" << course_schedule << ") $" << price << endl;
}
