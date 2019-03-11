#include <iostream>
#include <cstring>
#include <typeinfo>
using namespace std;

int main()
{
  string a, b;

  cin >> a >> b;

  cout << "a = " << a << endl;
  cout << "b = " << b << endl;

  /*
   * print which begger
   */
  if (a > b)
    cout << a << endl;
  else cout << b << endl;

  /*
   * print which longger
   */
  cout << a.size() << ":" << b.size() << endl;
  if(a.size() > b.size())
    cout << a << endl;
  else cout << b << endl;

  auto t = a.size();
  string::size_type tt = 323456;

  cout << typeid(t).name() << endl;
  cout << typeid(tt).name() << endl;
}
