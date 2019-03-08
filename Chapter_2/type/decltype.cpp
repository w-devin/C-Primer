#include <iostream>
#include <typeinfo>
using namespace std;

double fun()
{
  cout << "f() is running" << endl;
  return 1234.5;
}

int main()
{
  //literal or var
  int i = 123;
  decltype(1) a = 3;
  cout << a << endl;
  cout << typeid(a).name() << endl;

  decltype(&a) e;
  cout << e << endl;
  cout << typeid(e).name() << endl;

  decltype((i)) f = i;  //f is a reference

  //function
  decltype(fun()) b = 234;
  cout << b << endl;
  cout << typeid(b).name() << endl;

  decltype(fun) c;
  cout << typeid(c).name() << endl;


}
