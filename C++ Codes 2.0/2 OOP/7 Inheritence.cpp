#include<iostream>
using namespace std;
class Base
{
    public:
    Base()
    {
        cout<<"Non Parametric Constructor of Base class is called \n";
    }
    Base(int x)
    {
        cout<<" Parametric Constructor of Base class is called with value "<<x<<endl;
    }
};

class Derived : public Base
{
    public:
    Derived()
    {
        cout<<"Non Parametric Constructor of Derived class is called \n";
    }
    Derived(int x):Base(x)
    {
        cout<<"Non Parametric Constructor of Base class is called with value "<<x<<endl;
    }
};

int main()
{
    // Derived D; // This will call Non param of base then non param of derived
    Derived D(6);
    // Parametric Constructor of Base class is called with value 6
    // Non Parametric Constructor of Base class is called with value 6
}