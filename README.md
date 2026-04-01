## PRG210-PROJECT COURSE MANANGEMENT SYSTEM NOTES & PLANNING

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

## 3. Cart:

## 4. Interfaces:

## 5. Main:
