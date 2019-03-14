#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
  const char ca[] = {'h', 'e', 'l', 'l', 'o'};
  const char *cp = ca;

  getchar();
  while(*cp)
  {
    cout << *cp << endl;
    ++cp;
  }

}
