#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  std::vector<string> v;
  string str;

  while(cin >> str)
    v.push_back(str);

  for(auto &s:v)
    for(char &c:s)
      if(islower(c))
        c -= 'a' - 'A';

  for(auto s:v)
    cout << s << endl;

}
