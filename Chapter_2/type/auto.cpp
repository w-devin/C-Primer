#include <iostream>
#include <typeinfo>
#include <string>
using namespace std;

struct aType{
  int a;
  double b;
  string c;
};

int main()
{
  //auto

  int r = 3.14;
  auto pp = &r;
  const int *const p = &r;

  cout << sizeof(pp) << endl;

  cout << typeid(r).name() << endl;
  cout << typeid(pp).name() << endl;
  cout << typeid(p).name() << endl;

  aType bb;

  cout << typeid(bb).name() << endl;
}
