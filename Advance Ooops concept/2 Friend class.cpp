#include <iostream>
using namespace std;
class Test2; // Just a definition of new class because we are going to make it friend class

class Test
{
protected:
    int a = 21;

private:
    int b = 51;

public:
    int c = 101;

    friend Test2;
};

class Test2 //new claass not inheriting Test class
{
public:
    Test T;
    void fun()
    {
        cout << T.a << T.b << T.c << endl;
    }
};
int main()
{
    Test2 T2;
    T2.fun();
}