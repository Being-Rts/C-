#include<iostream>
using namespace std;
int main()
{
    //If sum of factors of a number = 2*number . It is called Perfect number.
    int n,i,sum=0;
    cout<<"Enter Number "<<endl;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        if (n%i==0)
        {
            sum=sum+i;
        }
    }
    // cout<<sum<<endl;       
    if (sum==2*n)
    {
    cout<<n<< " is Perfect number"<<endl;
    }
    else
    cout<<n<<" not a perfect number"<<endl;
}