#include <iostream>
#include <vector>
#include <string>
#include <typeinfo>
using namespace std;

int main()
{
  int n[3][4]{{1, 2, 3}};

  for(int i = 0; i < 3; ++i)
  {
    for(int r = 0; r < 4; ++r)
      cout << n[i][r] << " ";
    cout << endl;
  }

  //////////////////////////////////////////////////////
  for(int (&i)[4] : n)
  //必须加引用,否则会被当做指针处理
  {
    for(int &r : i)
      cout << r << " ";
    cout << endl;
  }

  for(auto &i : n)
  {
    for(auto &r : i)
      cout << r << " ";
    cout << endl;
  }

  //////////////////////////////////////////////////////
  for(int (*i)[4] = begin(n); i != end(n); ++i)
  {
    for(int *r = begin(*i); r != end(*i); ++r)
      cout << *r << " ";
    cout << endl;
  }

  for(auto i = begin(n); i != end(n); ++i)
  {
    for(auto r = begin(*i); r != end(*i); ++r)
      cout << *r << " ";
    cout << endl;
  }


}
