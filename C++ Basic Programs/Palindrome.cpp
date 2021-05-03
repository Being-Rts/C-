#include<iostream>
using namespace std;
int main()
{
    int rev=0,n,m,numb;
    cout<<"Enter the number"<<endl;
    cin>>n;
    numb=n;
    while(n)
    {
        m=n%10;
        n=n/10;
        rev=rev*10+m;
    }
    cout<<"Reverse of "<<numb<<" is "<<rev;
    if(rev==numb)
    {
        cout<<" and it is Palindrome"<<endl;
    }
    else
    cout<<" and it is not Palindrome"<<endl;
    
}