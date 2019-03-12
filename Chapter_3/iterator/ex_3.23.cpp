#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
  vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};

  for(auto i = v.begin(); i != v.end(); ++i)
    *i = 2 * (*i);

  for(auto i:v)
    cout << i << " " << endl;


}
