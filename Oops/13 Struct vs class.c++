#include <iostream>
using namespace std;
//In C struct only contains Data but in C++ struct contains data and function both
// Struct is similar to Class but difference is by default class has Data & Fuc - PRIVATE &
// Struct has Data and class Public.
struct Demo
//class Demo    It will make x,y & display() Private
{
    int x;
    int y;
    void display()
    {
        cout << x << " " << y << endl;
    }
    friend void hey();
};
void hey()
{
    Demo K;
    cout << K.x << K.y;
}

int main()
{
    Demo d;
    d.x = 101;
    d.y = 501;
    d.display();
    hey();
}