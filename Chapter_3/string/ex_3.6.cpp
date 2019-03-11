#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
  string s;
  cin >> s;

  /*
   * for_each
   */
  string temp = s;
  for(char &c : temp)
    if(isalpha(c))
      c = 'X';
  cout << temp << endl;

  /*
   * for
   */
  temp = s;
  for(string::size_type i = 0; i < temp.size(); i++)
    if(isalpha(temp[i]))
      temp[i] = 'X';
  cout << temp << endl;

  /*
   * iterator
   */
  temp = s;
  for(string::iterator i = temp.begin(); i != temp.end(); i++)
    if(isalpha(*i))
      *i = 'X';
  cout << temp << endl;

  /*
   * while
   */
  temp = s;
  string::size_type i = 0;
  while(i < temp.size())
  {
    if(isalpha(temp[i]))
      temp[i] = 'X';
    i++;
  }
  cout << temp << endl;


}
