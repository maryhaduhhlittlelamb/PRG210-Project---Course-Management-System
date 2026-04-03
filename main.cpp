#include <iostream>
#include <string>
#include "course.h"
#include "department.h"
#icnlude "cart.h"
using namespace std;

void admin_menu(Department deptList[], int deptCount);
void student_menu(Department deptList[], int deptCount, Cart& cart);

int main()
{
  const int deptCount = 3 
  Department deptList[deptCount] = {
      Department("School of Information Technology Administration & Security (ITAS)"),
      Department("School of Software Design & Data Science (SDDS)"),
      Department("School of Electronics & Computer Engineering Technology (ECET)")
  };
  deptlist[].addCourse(Course("number", "name", "schedule", cost));
  deptlist[].addCourse(Course("number", "name", "schedule", cost));

  deptlist[].addCourse(Course("number", "name", "schedule", cost));
  deptlist[].addCourse(Course("number", "name", "schedule", cost));

  deptlist[].addCourse(Course("number", "name", "schedule", cost));
  deptlist[].addCourse(Course("number", "name", "schedule", cost));

  Cart cart;
  int choice = 0;

  return 0;
}

void admin_menu(Department deptList[], int deptCount)
{
  int choice = 0;
  while (choice != 3)
  {
  }
}

void student_menu(Department deptList[], int deptCount, Cart& cart)
{
  int choice = 0;
  while (choice != 6)
  {
  }
}
