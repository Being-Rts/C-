#include <iostream>
using namespace std;
class Test
{
public:
    int a;

private:
    int b;

protected:
    int c;
    friend void fun();
};
void fun()
{
    Test T;
    T.a = 10;
    T.b = 20;
    T.c = 30; // By Default an obecj created in function which is not in inherited class
    // will not have access of private and protected data
    //using friend function we can give access.
    cout << T.a << " " << T.b << " " << T.c << endl;
}
int main()
{
    fun();
}