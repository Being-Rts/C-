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
    T.c = 30;
}
int main()
{
}