#include <iostream>
using namespace std;
class parent
{
private:
    int a;

protected:
    int b;

public:
    int c;
    void funparent()
    {
        a = 10;
        b = 20;
        c = 30;
        cout << a << " " << b << " " << c << endl;
    }
};
class child : public parent // inheriting publically
{
protected:
    int b;

public:
    void funparent()
    {
        // a = 100; inaccessible because  a is private in parent
        b = 200;
        c = 300;
        cout << b << " " << c << endl;
    }
};
class grandchild : private child // all accessible data or fun will be stored in private access
{
    void funparent()
    {
        b = 3454;
        child ch; // object can only access public data
        // ch.b = 77; // b is protected can't be accessed by object but we can access using inherited class
        ch.c = 56;
    }
};

int main()
{
}