#include <iostream>
using namespace std;
namespace first
{
    void fun()
    {
        cout << "First" << endl;
    }
}
namespace second
{
    void fun()
    {
        cout << "Second " << endl;
    }
}
using namespace first;
int main()
{
    first::fun();
    second::fun();
}