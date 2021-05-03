#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 0, c;
    try
    {
        if (b == 0)
            throw 10.9;
        c = a / b;
        cout << c;
    }
    catch (double e)
    {
        cout << "Division by zero "
             << " Error code " << e << endl;
    }
    cout << "bye" << endl;
}