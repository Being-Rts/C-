#include <iostream>
using namespace std;
struct A
{
    int roll;
    char name[];
    float percent;
};
struct A S1
{
    12, "Rajesh", 67.6
};

int main()
{
    cout << S1.name;
}