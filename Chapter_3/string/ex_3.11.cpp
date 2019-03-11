#include <iostream>
#include <string>
using namespace std;

int main()
{
  const string s = "keep out!";
  for(auto &c : s)
  {
    //if(!isalpha(c)) c = '_';    //error: asignment of read-only reference 'c'
    cout << c << endl;
  }
}
