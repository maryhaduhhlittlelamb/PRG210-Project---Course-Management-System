#include "cart.h"
#include <iostream>
using namespace std;

Cart::Cart()
{
  cart_list = nullptr;
  cart_count = 0;
}

Cart::~Cart()
{
  delete[] cart_list;
}

void Cart::addCourse(const Course& c)
{
  Course temp = new Course[cart_count + 1];
}

void
{
}

void
{
}

double 
{
}
