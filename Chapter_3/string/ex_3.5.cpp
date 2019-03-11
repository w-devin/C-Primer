#include <iostream>
#include <string>
using namespace std;


int main()
{
  string str;
  string ret = "";
  while(cin >> str)
  {
    ret += str + " ";
  }

  cout << ret << endl;
}
