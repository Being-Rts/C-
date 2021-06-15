#include <iostream>
using namespace std;
class Base
{
public:
    Base()
    {
        cout << "Deafult of Base class " << endl;
    }
    Base(int x)
    {
        cout << "Parameterized of Base class " << x << endl;
    }
};

class Derived : public Base
{
public:
    Derived()
    {
        cout << "Default of Derived class" << endl;
    }
    Derived(int x)
    {
        cout << "Parameterized of Derived " << x << endl;
    }
};

int main()
{
    Base B();
    Derived D(6);
    Derived D1; //this will call base them
}