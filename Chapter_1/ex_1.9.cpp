#include <iostream>

using namespace std;

int main()
{
    int ret = 0;
    int i = 50;

    while(i <= 100)
        ret += i++;

    cout << ret << endl;
}