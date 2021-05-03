#include <iostream>
using namespace std;
class Demo
{
public:
    Demo()
    {
        cout << "Constructor of Demo" << endl;
    }
    ~Demo()
    {
        cout << "Constructor destroyed" << endl;
    }
};
void fun()
{
    Demo *p = new Demo(); //Object created dynamically
    delete p;             // need to be deleted
}
int main()
{
    fun();
}