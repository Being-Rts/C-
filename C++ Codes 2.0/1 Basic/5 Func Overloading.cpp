#include<iostream>
using namespace std;
int sum(int a, int b)
{
    return a+b;

}
// float sum(int a, int b) CAN NOT OVERLOAD WITH SAME ARGUMETS
float sum(int a, float b) // OVERLOADING
{
    return a+b;
}
float sum(int a, int b,int c) // OVERLOADING
{
    return a+b+c;
}
int main()
{
 cout<<sum(1.4,2)<<endl;
 cout<<sum(1,2,3)<<endl;
}