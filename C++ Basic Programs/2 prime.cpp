//Program to find wheather a number is prime or not
#include<iostream>
using namespace std;
int main()
{
        int n,i,flag=0;
        cout<<"Enter the number"<<endl;
        cin>>n;
        for(i=2;i<=n-1;i++)
        {
            if (n%i==0)
            {
            cout<<"not prime"<<endl;
            flag=1;
            break;
            }
        }
    if (flag==0)
    {
    cout<<"prime"<<endl;
    }
}
