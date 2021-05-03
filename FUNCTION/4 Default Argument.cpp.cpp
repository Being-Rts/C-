#include<iostream>
using namespace std;
int sum(int a, int b, int c=0) // here C is default argument. If it receives any value it will put in fuction else it will set c=0
{
    return a+b+c;
}
int main()
{
 cout<<sum(2,3,4)<<"SUM OF 2,3,4"<<endl;
 cout<<sum(2,3)<<" Sum of 2,3"<<endl;
}