#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
  int a = 3, b = 4;
  decltype(a) c = a;      //int c = 3;
  decltype(a = b) d = a;  //int d = 3;

  cout << c << " " << typeid(c).name() << endl;
  cout << d << " " << typeid(d).name() << endl;


}
