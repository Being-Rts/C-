#include<iostream>
using namespace std;
int n,i,result;
int isprime(n)
    {
        int flag=0;
        for(i=2;i<=n;i++)
        {
            if(n%i==0)
            {
                return 0
                flag=1;
                break;
            }
        if flag=0
        return 1;
        }
    }
int main()
{
     // cout<<"Enter the number till you find prime"<<endl;
    result=isprime(n);
    cout<<result;
    
}