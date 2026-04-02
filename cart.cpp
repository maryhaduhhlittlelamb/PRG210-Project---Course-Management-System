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
  Course* temp = new Course[cart_count + 1];

  for (int i = 0; i < cart_count; i++)
    temp[i] = cart_list[i];

  temp[cart_count] = c;

  delete[] cart_list;
  cart_list = temp;
  cart_count++;
}

void Cart::RemoveCourse(const string& course_number)
{
  if (cart_count == 0)
    return;

  int index = -1;

  for (int i = 0; i < cart_count; i++)
    {
      if (cart_list[i].getcourse_number() == course_number
      {
        index = i;
        break;
      }
    }

  if(index == -1)
    return;

  Course* temp = new Course[cart_count - 1];

  for (int i = 0, j = 0; i < cart_count; i++)
    {
      if (i != index)
      {
        temp[j] = cart_list[i];
        j++;
      }
    }

  delete[] cart_list;
  cart_list = temp;
  cart_count--;
}

void Cart::printCart() const
{
  for (int i = 0; i < cart_count; i++)
    cart_list[i].printCourse();
}

double Cart::getTotal() const
{
  double total = 0.0;

  for (int i = 0; i < cart_count; i++)
    total += cart_list[i].getcourse_cost();

  return total;
}
