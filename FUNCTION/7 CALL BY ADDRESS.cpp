/*
*********************************
2 CALL BY ADDRESS
*/
#include<iostream>
void swap(int *x,int *y) // x,y are cFormal Parameters 
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers a & b"<<endl;
    cin>>a>>b;
    swap(&a,&b); // a,b are Actual Parameters & We are passing addresses of a & b
    cout<<endl;
    cout<<"value of a is "<<a<<" & value of b is "<<b<<endl;

}