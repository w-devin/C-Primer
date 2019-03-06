#include <iostream>
using namespace std;

int main()
{
    int l, r;

    cout << "input l and r:";
    cin >> l >> r;

    if(l > r) l = l^r, r = l^r, l = l^r;

    while(l <= r)
        cout << l++ << " ";
    cout << endl;

}