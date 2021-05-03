#include<iostream>
using namespace std;
int main()
{
    int x,*p; //declaration of pointer
    x=100;
    p=&x; //initialization
    cout<<"value of x is- "<<x<<endl;
    cout<<"Address of p is- "<<&p<<endl;
    cout<<"Address of x is- "<<&x<<endl;
    cout<<"value of p is- "<<p<<endl;
    cout<<"value of *p is- "<<*p<<endl; //*p -> dereferencing pointer

}