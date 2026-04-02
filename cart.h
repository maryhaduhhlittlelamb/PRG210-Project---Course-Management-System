#ifndef CART_H
#define CART_H

#include "course.h"
using namespace std;

class Cart 
{
private:
    Course* cart_list;
    int cart_count;

public:
    Cart();
    ~Cart();

    void addCourse(const Course& c);
    void removeCourse(const string& courseNumber);
    void printCart() const;
    double getTotal() const;
};

#endif
