#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
  vector<int> v1(10, 42);

  vector<int> v2{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};

  vector<int> v3(10);
  for(auto &x:v3)
    x = 42;

  vector<int> v4;
  for(int i = 0; i < 10; i++)
    v4.push_back(42);

  /////////////////////////////////////

  for(auto x : v1)
    cout << x << " " ;
  cout << endl;

  for(auto x : v2)
    cout << x << " " ;
  cout << endl;

  for(auto x : v3)
    cout << x << " " ;
  cout << endl;

  for(auto x : v4)
    cout << x << " " ;
  cout << endl;
}
