## PRG210-PROJECT COURSE MANANGEMENT SYSTEM NOTES & PLANNING

**Files Needed:**
- Course
  - course.h
  - course.cpp
- Department
  - department.h
  - department.cpp
- Cart
  - cart.h
  - cart.cpp
- main.cpp

## 1. Course:

**course.h:**
- Class Definition
  - class Course
- Private Members
  - course number
  - course name
  - schedule
  - cost
- Public Constructor
  - add const so it wont change anything inside
- Public Getters
  - use get
- Print Function
  - add void

**course.cpp:**
- Constructor Implementation
  - this is default
  - set the strings to empty and double to zero.
- Getter Implementations
  - with parameters
  - return the value of private member to where it belongs to
  - return the stored info when needed
- Print Function Implementation
  - to display a course without manually typing each field

## 2. Department:

**department.h:**
- Class Definition
  - class Department
- Private Members
  - department name
  - dynamic array of Course objects
  - course count (how many of the courses stored)
- Public Constructor
  - default constructor
  - constructor that sets the department name
- Destructor
  - deletes the dynamic array to avoid memory leaks
- Public Functions
  - addCourse() - adds a new course to the department
  - pirntCourse() - prints all courses
  - getdepartment_name() - returns the department name
    
**department.cpp**
- Constructor Implementation
  - default sets name to empty
  - course_count = 0
  - course_list = nullptr
  - parameterized sets the name and initializes course_count = 0
- Destructor
  - deleted the dynamic array using delete[]
- addCourse
  - create a new array with size + 1
  - copies old courses into new array
  - add the new course at the end
  - delete old array
  - update course_count
- printCourse
  - loops through the array
  - calls printCourse() for each Course object
- getdepartment_name()
  - returns the department name

## 3. Cart:

**cart.h**
- Class Definition
  - class Cart
- Private Members
  - dynamic array of Course objects
  - course count
- Public Constructor
  - default constructor
- Destructor
  - delete the dynamic array
- Public Functions
  - addCourse() - adds a course to the cart
  - removeCourse() - removes a course
  - printCart() - prints all courses in the cart
  - getTotal() - adds up the prices of all courses

**cart.cpp**
- Constructor Implementation
  - set count to 0
  - set pointer to nullptr
- Destructor
  - delete the dynamic array
- addCourse()
  - same idea as Department
  - create new array with +1 size
  - copy old courses
  - add the new one
  - delete old array
  - update count
- removeCourse()
  - find the course by number
  - shift everythging left
  - shrink the array
- printCart()
  - loop through the array
  - call printCourses()
- getTotal()
  - loop through all courses
  - add up the cost
  - return the total

## 4. Main:

**main.cpp**
- Create Department(s)
  - School of Information Technology & Security
  - School of Software Design & Data Science
  - School of Electronics & Software Engineering
- Create a Cart Object
- Main Menu
  - Admin
  - Student
  - Exit
- Admin Menu
  - pick a department
  - add course
  - print courses
  - back
- Admin Actions
  - enter course number
  - enter course name
  - enter schedule
  - enter cost
  - add to the selected department
- Student Menu
  - pick a department
  - view courses
  - add to cart
  - remove from cart
  - view cart
  - checkout
  - back
- Student Actions
  - choose a department
  - see all courses in that department
  - add course by course number
  - removes course by course number
  - view cart
  - show total cost
- Admin Interface
  - add a course to a department
  - print all courses in a department
  - go back to the main menu
- Student Interface
  - view courses
  - add course to cart
  - remove course from cart
  - view cart
  - checkout (show total)
  - go back
