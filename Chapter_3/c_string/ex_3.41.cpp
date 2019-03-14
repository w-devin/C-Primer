#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
  int a[]{1, 2, 3, 4, 5, 7, 888, 23};
  vector<int> n(begin(a), end(a));

  for(int x : n)
    cout << x << " ";
  cout << endl;


}
