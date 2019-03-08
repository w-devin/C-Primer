#include <iostream>
#include <cstring>
#include <typeinfo>
using namespace std;

int main()
{
  const int i = 42;
  auto j = i;                   //int j = i; 
  const auto &k = i;            //const int &k = 42;
  auto *p = &i;                 //const int *p = &i;
  const auto j2 = i, &k2 = i;   //const int j2 = i; const int &k2 = i;


  cout << typeid(i).name() << endl;
  cout << typeid(j).name() << endl;
  cout << typeid(k).name() << endl;
  cout << typeid(p).name() << endl;
  cout << typeid(j2).name() << endl;
  cout << typeid(k2).name() << endl;
  
}
