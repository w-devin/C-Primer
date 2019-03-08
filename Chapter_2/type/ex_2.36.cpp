#include <iostream>
using namespace std;

int main()
{
  int a = 3, b = 4;
  decltype(a) c = a;    //int c = 3;
  decltype((b)) d = a;  //int &d = a;
  ++c;                
  ++d;

  /*
   * a = 4
   * b = 4
   * c = 4
   * d = a = 4
   */

  cout << a << endl;
  cout << b << endl;
  cout << c << endl;
  cout << d << endl;

}
