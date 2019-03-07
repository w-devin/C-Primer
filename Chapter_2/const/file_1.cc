#include <iostream>
#include "file_1.h"
using namespace std;

extern const int bufSize;
constexpr int tt = 123;

constexpr int getConst(int n)
{
  return n + 12;
}

int main()
{
  /*
  cout << bufSize << endl;


  int i = 12;

  const int &a = i;

  i = 334;
  cout << a << endl;

  const double d = 3.1415;
  const int &b = d;

  cout << b << endl;

  const double *p = &d;

  cout << *p << endl;

  const double _ = 3456;
  p = &_;
  */

  /*
  double pi = 3.14;
  const double db = 2.34;

  double *const dp = &pi;
  const double *const pp = &db;
  

  cout << pi << " " << *dp << endl;
  
  *dp = 1.23;
  cout << pi << " " << *dp << endl;

  *pp = 2345;
  cout << *pp << " " << db << endl;

  const int a = 1, &b = 23;
  */

  /*
  int i = 0;
  int *const p1 = &i;
  const int ci = 42;
  const int *p2 = &ci;
  const int *const p3 = p2;
  const int &r = ci;

  const int * p = p3;
  */

  int i = 12;
  constexpr int mf = 12;
  constexpr int tt = getConst(12);

  cout << tt << endl;

  constexpr const int *p = nullptr;



  return 0;
}
