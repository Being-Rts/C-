#include <iostream>
using namespace std;
int g = 30; //Declared globally
void fun()
{
    int a = 5; // declared locally
    a++;
    ++g;
    cout << a << " is local in Fun & " << g << " is global" << endl;
    // cout << b << endl; Here I tried to print b which is static but due to it's limited scope we can't access.
}
void fun2()
{
    static int b = 10; //b is static var which will act as Global but it's scope is within fun2() only
    ++b;
    ++g;
    cout << b << " is static in fun2() & " << g << " is global " << endl;
}

int main()
{
    cout << "hi" << endl;
    fun();
    fun();
    fun2();
    fun2();
}