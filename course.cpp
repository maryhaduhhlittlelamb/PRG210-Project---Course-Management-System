#include "course.h"
#include <iostream>

Course::Course()
{
  course_number = "";
  course_name = "";
  course_schedule = "";
  course_price = 0.0;
}

Course::Course(const string& course_number,const string& course_name, const string& course_schedule, const double& course_price);
{
}

string Course::getcourse_number() const
{
  return course_number;
}

string Course::getcourse_name() const
{
  return course_number;
}

string Course::getschedule() const
{
  return course_number;
}

string Course::getprice() const
{
  return course_number;
}
