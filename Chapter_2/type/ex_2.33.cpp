#include <iostream>
#include <cstring>
using namespace std;


int main()
{
  int i = 0, &r = i;
  auto a = r;             //int a = -1;

  const int ci = i, &cr = ci;
  auto b = ci;            //int b = 0 
  auto c = cr;            //int c = 0;
  auto d = &i;            //int *d = i;
  auto e = &ci;           //const int *e = &ci;
  const auto f = ci;      //const int f = 0;
  auto &g = ci;           //const int &g = ci;
  //auto &h = 42; //errer: only const reference can be literal type
  const auto &j = 42;     //const int&j = 42;
  auto k = ci, &l = i;    //int k = 0, &l = i;
  auto &m = ci, *p = &ci; //const int &m = ci, *p = &ci;
  //auto &n = i, *p2 = &ci; //inconsistent deduction for 'auto':'int' and then 'const int'
  
  a = 42; //a = 42;
  b = 42; //b = 42;
  c = 42; //c = 42;
  //d = 42; //d = err?
  //e = 42; //e = err?
  //f = 42; //err
  //g = 42; //err 
  
  
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
  cout << "c = " << c << endl;
  cout << "d = " << d << endl;
  cout << "e = " << e << endl;
  cout << "f = " << f << endl;
  cout << "g = " << g << endl;


}
