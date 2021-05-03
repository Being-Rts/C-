#include<iostream>
using namespace std;
int main()
{
    int A[]={100,200,300,400,500};
    int *p=A;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<++p<<endl;
    cout<<*p<<endl;
    cout<<*(p+3)<<endl;
    int *q;
    q=&A[4];
    int c=q-p; //shows distance between P & Q pointer
    cout<<c<<endl;

}