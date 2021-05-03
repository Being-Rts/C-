#include <iostream>
using namespace std;
class Data
{
    int a, b, c;

public:
    Data()
    {
        cout << "Welcome to C++" << endl;
    }
    friend int sum();
};
int sum()
{
    Data D;
    cout << "Enter two numbers" << endl;
    cin >> D.a >> D.b;
    D.c = D.a + D.b;
    return D.c;
}

int main()
{
    cout << sum() << endl;
}