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

    //To call parameterized construction of Base ->
    Derived(int x, int y) : Base(y)
    {
        cout << "Parameterized of Derived " << x << endl;
    }
};
int main()
{
    Derived D; //Parent class constructor will execute first as default then Derived class
    Derived D1(10);
    // Whenever Object of Derived class is created it execute Default Constructor of Parent class firstly then it will execute derived
    Derived D3(10, 20); // Calls Parameterized of Base
}