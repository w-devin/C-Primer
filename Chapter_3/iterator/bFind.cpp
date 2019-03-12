#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool bFind(const vector<int> &v, int x)
{
  auto l = v.cbegin();
  auto r = v.cend();

  while(l < r)
  {
    auto mid = l + (r - l) / 2;
    if(*mid == x) return true;
    else if(*mid <= x) l = mid + 1;
    else r = mid - 1;
  }
  return false;
}

int main()
{
  vector<int> v{1, 2, 4, 5, 6, 7, 8, 9, 10};

  cout << bFind(v, 4) << endl;

}
