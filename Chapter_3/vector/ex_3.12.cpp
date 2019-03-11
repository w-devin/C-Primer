#include <iostream>
#include <vector>
using namespace std;

int main()
{
  std::vector<vector<int>> ivec;
  std::vector<vector<int>> svec = ivec;   
  std::vector<string> svec2(10, "hi");
  vector<string> ff{10, "hi"};

  for(auto s : svec2)
    cout << s << endl;
  for(auto s : ff)
    cout << s << endl;

}
