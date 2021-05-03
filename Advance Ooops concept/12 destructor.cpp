#include <iostream>
using namespace std;
class Base
{
public:
    Base()
    {
        cout << "constructor of base class is created  " << endl;
    }
    virtual ~Base()
    {
        cout << "Constructor of base is destroyed  " << endl;
    }
};
class derived : public Base
{
public:
    derived()
    {
        cout << "cons of derived created  " << endl;
    }
    ~derived()
    {
        cout << "cons of derived destroyed  " << endl;
    }
};
int main()
{
    Base *p = new derived(); // Base pointer ius pointing to derived class; Created dynamicxally in Heap
    delete p;                // by default it will deaalocate constructor of base . We need to put Destructor of Base as virtual
}
