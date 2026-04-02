#include "department.h"
#include <iostream>
using namespace std;

Department::Department()
{
  department_name = "";
  course_list = nullptr;
  course_count = 0;
}

Department::~Department()
{
  delete[] course_list;
}

void
{
}

void
{
}

string Department::getdepartment_name() const
{
  return department_name;
}
