#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
  /*
   * constexpr?
   */
  /*
  int i;
  cin >> i;
  int n[i];

  cout << sizeof(n) << endl;
  */

  /*
   *invalid array assignment
   *
  int a[] = {1, 2, 3, 4};
  int b[4];
  b = a;
  */

  int arr[10];
  int *ptrs[10];
  //int &refs[10] = ptrs;     //can not declaration of 'refs' as array fo references
  int (*Parray)[10] = &arr;
  int (&arrRef)[10] = arr;
  int *(&array)[10] = ptrs;

  /*
   * string
   */

  //char s[10] = "HelloWorld"; //initializer-string for array of chars is too long


}
