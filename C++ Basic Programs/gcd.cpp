//prog to find gcd of two numbers
#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"To Find GCD of two numbers ";
    cout<<"Enter two numbers"<<endl;
    cin>>m>>n;
    cout<<endl;
    int num1=m;
    int num2=n;
    while(m!=n)
    {
        if (m>n)
            m=m-n;
        else if (n>m)
            n=n-m;
    }
    cout<<"GCD of "<<num1<<" ,"<<num2<<" is "<<m <<endl;

}
