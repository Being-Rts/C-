#include <iostream>
using namespace std;
class parent
{
public:
    void f()
    {
        cout << "I am function" << endl;
    }
};
class child : protected parent
{
public:
    void f() // Redifining function of parent= Over Riding
    {
        cout << "I am fun";
    }
};

int main()
{
    parent p;
    p.f();
    child c;
    c.f();
}