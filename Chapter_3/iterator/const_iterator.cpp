#include <iostream>
#include <vector>
#include <string>
#include <typeinfo>
using namespace std;

int main()
{
  /*
   *iterator & const_iterator
   */

  vector<int> v{1, 2, 3, 6, 2, 4};

  vector<int>::iterator i1 = v.begin();
  vector<int>::const_iterator i2 = v.begin();
  auto i3 = v.cbegin();

  cout << typeid(i1).name() << endl;
  cout << typeid(i2).name() << endl;
  cout << typeid(i3).name() << endl;



  const vector<int> cv{1, 2, 3, 4, 5, 2};

  //vector<int>::iterator c1 = cv.begin();  //const -> non-const
  vector<int>::const_iterator c2 = cv.begin();
  auto c3 = v.cbegin();

  //cout << typeid(c1).name() << endl;
  cout << typeid(c2).name() << endl;
  cout << typeid(c3).name() << endl;





}
