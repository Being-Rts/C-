#include <iostream>
using namespace std;
int g = 30; //Declared globally
int fun()
{
    int a = 5; // declared locally
    a++;
    ++g;
    cout << a << " is local in Fun & " << g << " is global" << endl;
}

int main()
{
    cout << "hi";
    fun();
}