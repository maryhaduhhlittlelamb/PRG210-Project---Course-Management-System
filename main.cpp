#include <iostream>
#include <string>
#include "course.h"
#include "department.h"
#include "cart.h"
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
    cout << "1. Admin\n";
    cout << "2. Student\n";
    cout << "3. Exit\n";
    cout << "Enter Your Choice: ";
    cin >> choice;

    if (choice == 1)
    {
      admin_menu(deptList, deptCount);
    }
    else if (choice == 2)
    {
      student_menu(deptList, deptCount, cart);
    }
    else if (choice == 3)
    {
      cout << "Exiting Program...\n";
    }
  }
  
  return 0;
}

void admin_menu(Department deptList[], int deptCount)
{
  int choice = 0;
  
  while (choice != 3)
  {
    cout <<"\n👩🏻‍🏫 --- ADMIN MENU ---- 👩🏻‍🏫\n";
    cout << "1. Add Course\n";
    cout << "2. Print Courses\n";
    cout << "3. Back\n";
    cout << "Enter Your Choice: ";
    cin >> choice; 

    if (choice == 1)
    {
      cout << "\nSelect A Department:\n";
      for (int i = 0; i < deptCount; i++)
        cout << i + 1 << deptList[i].getdepartment_name() << endl;

      int d;
      cout << "Enter Department Number: "
      cin >> d;

      if 
    }
  }
}

void student_menu(Department deptList[], int deptCount, Cart& cart)
{
  int choice = 0;
  while (choice != 6)
  {
  }
}
