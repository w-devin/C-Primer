#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
  vector<int> v(10, 0);
  auto i = v.begin();

  int n;
  while(cin >> n)
    ++*(i + n / 10);

  for(auto i : v)
    cout << i << " ";
  cout << endl;
    


}
