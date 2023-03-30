#include<iostream>
using namespace std;
int main()
{
    int x=10;
    int &y=x; //y is alias of x
    x++; 
    y++;   // Reference doesn't aquires memory
    cout<<y<<endl;
}