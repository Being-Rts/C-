#include <iostream>
using namespace std;
class Base
{
public:
    void f1()
    {
        cout << "F1 is called " << endl;
    }
};
class Child : public Base
{
public:
    void f2()
    {
        cout << "F2 is called" << endl;
    }
};

int main()
{
    Child C;        //Object of Child class
    Base *ptr = &C; // pointer object of base pointing to Child
    ptr->f1();      // Base class pointer is trying to access F1 which is in base - It is accessible
    ptr->f2();     // cat't be accessed
}