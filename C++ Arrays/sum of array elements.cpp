#include<iostream>
using namespace std;
int main()
{
 int A[]={23,45,22,11,23,45,67,888,766};   
 int sum=0;
 for(int a:A)
 {
     sum=sum+a;
 }
 cout<<sum<<endl;
}