#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <iostream>
#include <string>
using namesspace std;

struct Sales_data{
  string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
}; 

#endif
