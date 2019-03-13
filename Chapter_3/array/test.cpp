#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
  char s1[] = "this is a test for string";
  char s2[] = "is true";

  char *p = &s1[2];
  char *pr = s2;

  cout << s1 << endl;
  cout << p << endl;

  cout << p - pr << endl;


}
