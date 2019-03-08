#include <iostream>
#include <string>
#include "Sales_data.h"
using namespace std;

int main()
{
  Sales_data data1, data2;

  ci >> data1.bookNo >> data1.units_sold >> data1.revenue;
  ci >> data2.bookNo >> data2.units_sold >> data2.revenue;

  cout << data1.bookNo << " " << data1.units_sold * data1.revenue << endl;
  cout << data2.bookNo << " " << data2.units_sold * data2.revenue << endl;
  
}
