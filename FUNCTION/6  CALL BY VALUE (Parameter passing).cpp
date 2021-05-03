/*
*****************N*O*T*E*S****************************
Three methods of passing paramaeters in C++
1. PASS BY VALUE 
2. PASS BY ADDRESS
3 PASS BY REFERENCE

1. PASS BY VALUE - Values are copied to function (Formal) 
and changes done in Formal won't reflect in Actual Function

******************************************************
*/
#include<iostream>
void swap(int x,int y) // x,y are cFormal Parameters 
{
    int temp=x;
    x=y;
    y=temp;
}
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers a & b\t ";
    cin>>a>>b;
    swap(a,b); // a,b are Actual Parameters
    cout<<endl;
    cout<<"value of a is "<<a<<" & value of b is"<<b<<endl;

}