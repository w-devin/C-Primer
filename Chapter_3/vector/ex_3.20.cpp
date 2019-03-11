#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
  int n;
  vector<int> v;

  while(cin >> n)
    v.push_back(n);

  /* 
   * []
   */

  for(vector<int>::size_type i = 1; i < v.size(); i++)
    cout << v[i] + v[i - 1] << " ";
  cout << endl;

  for(vector<int>::size_type i = 0; i < v.size() / 2; i++)
    cout << v[i] + v[v.size() - i - 1] << " ";
  cout << endl;

  /*
   * iterator
   */
  for(vector<int>::iterator i = v.begin(); i + 1 != v.end(); i++)
    cout << *i + *(i + 1) << " ";
  cout << endl;

  for(vector<int>::iterator i = v.begin(), r = v.end() - 1; i != r; i++, r--)
    cout << *i + *r << " ";
  cout << endl;





}
