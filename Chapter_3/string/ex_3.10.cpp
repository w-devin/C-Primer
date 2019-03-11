#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s;
  string ret = "";

  getline(cin, s);

  for(auto &c : s)
    if(!ispunct(c))
      ret += c;
  cout << ret << endl;
}
