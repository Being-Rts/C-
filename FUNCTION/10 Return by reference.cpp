#include<iostream>
using namespace std;
int & fun(int &a)
{
    cout<<a<<endl;
    return a; // return address of a as specified in int & fun()
}
int main()
{
    int x=101;
    cout<<"Value of x before entering into fun() "<<x<<endl;
    fun(x)=25;
    cout<<"Value of x aftere entering into fun() "<<x<<endl;
    //Here fun(x) is acting as L-Value. since fun() is returning address of parameter that is poassed.

}