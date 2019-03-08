#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class test{
public:
    test(){
        cout << "initing" << endl;
    }

    void print(){
        cout << "printing" << endl;
    }
};

int _int = 3;

int main()
{
    /*
    signed char c2 = 256; //256 compilation error
    cout << c2 << endl;
    */

    /*
    unsigned u1 = 10, u2 = 42;
    cout << u1 - u2 << endl;
    cout << u2 - u1 << endl;
    */

   /*
   cout << "this is a " "string" 
            "test" << endl;
    cout << "\x61" << endl;
    */

   /*
   test a;
   a.print();
   */

    /*
    int a = {3.14};
    cout << a << endl;
    */

    /*
    string a = "string";

    for(string::iterator i = a.begin(); i != a.end(); i++)
        cout << i << endl;
    */

    /*
    int _aInt = 1;
    int _Aint = 2;
    int __ = 4;

    cout << _aInt << endl;
    cout << _Aint << endl;
    cout << _int << endl;
    cout << __ << endl;
    */

  int *p1 = nullptr;
  int *p2 = 0;
  int *p3 = NULL;
  cout << p1 << endl;
  cout << p2 << endl;
  cout << p3 << endl;



  
}
