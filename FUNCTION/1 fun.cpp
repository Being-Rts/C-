#include<iostream>
using namespace std;
int add(int x,int y)
{
    int z=x+y;
    cout<< z;
}
int main()
{
    int a,b;
    cout<<"Enter a & b";
    cin>>a;
    cin>>b;
    add(a,b);
}