#include <iostream>
using namespace std;
//Deep Copy Constructor
class Test
{
    int a;
    int *p;

public:
    Test(int x)
    {
        a = x;
        p = new int[a];
    }
    Test(Test &t) //Copy
    {
        a = t.a;
        // p=t.p; // * This can cause problem because this will point to t without creating new.
        p = new int[a]; // Create new
    }
};

int main()
{
    Test T(5);
    Test t(6); //copy constructor
}