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
// void fun()
// {
//     Demo d;
// }
int main()
{
    Demo d; // Object created in heap and will be deleted automatically as destructor avlbl
}