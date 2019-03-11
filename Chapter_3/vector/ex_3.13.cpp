#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  vector<int> v1;               //0
  vector<int> v2(10);           //10 {0, 0, ......0}
  vector<int> v3(10, 42);       //10 {42, 42,42..42}
  vector<int> v4{10};           //1  {10}
  vector<int> v5{10, 42};       //2  {10, 42}
  vector<string> v6{10};        //10 {"", "", ...""}
  vector<string> v7{10, "hi"};  //10 {"hi", ..."hi"}

  for(auto s:v1) cout << s << " ";
  cout << endl;

  for(auto s:v2) cout << s << " ";
  cout << endl;

  for(auto s:v3) cout << s << " ";
  cout << endl;

  for(auto s:v4) cout << s << " ";
  cout << endl;

  for(auto s:v5) cout << s << " ";
  cout << endl;

  for(auto s:v6) cout << s << "'";
  cout << endl;

  for(auto s:v7) cout << s << " ";
  cout << endl;
}
