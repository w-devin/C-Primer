#include <iostream>
#include <vector>
#include <typeinfo>
using namespace std;

int main()
{
  vector<int>::size_type a;
  vector<string>::size_type b;
  string::size_type c;

  cout << typeid(a).name() << endl;
  cout << typeid(b).name() << endl;
  cout << typeid(c).name() << endl;

}
