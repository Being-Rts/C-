#include <iostream>
using namespace std;
class base
{
public:
    virtual void f()
    {
        cout << "namastey base" << endl;
    }
};
class child : public base
{
public:
    void f() //overridden function
    {
        cout << "namastey derived" << endl;
    }
};
int main()
{
    base *ptr = new child();
    ptr->f(); //since  f() is overridden function and base object is pointing to child so by default it will call base fun
    // to call func of child use VIRTUAK keyword in base
}