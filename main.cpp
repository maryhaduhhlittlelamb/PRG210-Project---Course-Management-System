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
  const int deptCount = 3;
  Department deptList[deptCount] = {
      Department("School of Information Technology Administration & Security (ITAS)"),
      Department("School of Software Design & Data Science (SDDS)"),
      Department("School of Electronics & Computer Engineering Technology (ECET)")
  };

  deptList[0].addCourse(Course("ITAS101", "Networking Fundamentals", "MWF 8-10", 500));
  deptList[0].addCourse(Course("ITAS201", "IT Security Basics", "TTh 2-4", 600));

  deptList[1].addCourse(Course("SDDS101", "Intro to Programming", "MWF 11-1", 520));
  deptList[1].addCourse(Course("SDDS201", "Object Oriented Programming", "TTh 11-1", 620));

  deptList[2].addCourse(Course("ECET101", "Digital Systems", "MWF 2-4", 550));
  deptList[2].addCourse(Course("ECET201", "Software Engineering", "TTh 8-10", 650));

  Cart cart;
  int choice = 0;
  
  while (choice != 3)
  {
    cout <<"\n🗂️ --- MAIN MENU ---- 🗂️\n";
    cout << admin
    cout student
    cout exit

  }
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
