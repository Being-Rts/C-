#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter the number"<<endl;
    cin>>n;
    while(n)
    {
        i=n%10;
        cout<< i<<"\t";
        n=n/10;
    }
}