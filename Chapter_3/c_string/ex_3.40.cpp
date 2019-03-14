#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

int main()
{
  string s = "Hello";
  const char *cs = s.c_str();
  cout << s << endl;
  cout << cs << endl;

  const char *cc = "Hello World";
  string sc(cc);

  cout << cc << endl;
  cout << sc << endl;

  char str[100];
  strcpy(str, cs);
  strcat(str, cc);

  cout << str << endl;
}
