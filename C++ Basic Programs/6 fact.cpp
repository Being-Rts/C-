#include<iostream>
using namespace std;
int main()
{ 
int fact=1,n,i;
cout<<"Enter the number to find factorial"<<endl;
cin>>n;
if (n<=1)
{
    cout<<1;
}
else if (n>1)
for(i=1;i<=n;i++) 
{
    fact*=i;

}
cout<<"Factorial of "<<n<<" is "<< fact<<endl;
}
