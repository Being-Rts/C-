#include <iostream>
using namespace std;
int main()
{
    int x = 20;
    // cout << x++ << endl; Not possible to modify constant
    const int *p = &x; //pointer is constant
    // ++*p; can't modify const
    cout << *p << endl;
}