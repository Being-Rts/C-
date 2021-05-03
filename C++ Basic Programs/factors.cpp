//Prog to find Factorial
#include<iostream>
#include<math.h>
using namespace std;
int main()
{ 
    int n,i,m;
    cout<<"Enter the number to find all factors\t";
    cin>>n;
    //m=ceil(n/2);
    for(i=1;i<=n;i++)    
    {
       if(n%i==0)
       cout<<i<<"\t";
    }
    cout<<endl;
}