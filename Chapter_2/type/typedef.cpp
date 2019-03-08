#include <iostream>
using namespace std;

int main()
{
  /*
   * using and typedef
   */

  using a = int *;

  int i = 324;
  const a p = &i;

  *p = 234;
  cout << *p << " " << i << endl;

  int r = 23456;
  //p = &r; //errer! the p is 'int *const'

  cout << *p << " " << i << endl;



}
