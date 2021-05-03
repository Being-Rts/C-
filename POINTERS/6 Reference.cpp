#include<iostream>
using namespace std;
int main()
{
    //Reference means Aliasing
    int x=10;
    int &y=x; // &y is Reference -> Aliasing of variable x
    //While Declaring y initilise it immediately (x & y are same)
    cout<<x<<endl;
    cout<<y<<endl;
    //alias doesn't have its own address
    cout<<&x<<" "<<&y<<endl; //X & Y has same address
    cout<<x++<<endl;
    cout<<++y<<endl;
}