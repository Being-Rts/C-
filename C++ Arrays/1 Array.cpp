#include<iostream>
using namespace std;
int main()
{
    float A[]={1.4,2,3,4.5,'H',6.5,'z',8,9,10};
    for(auto x:A) //foreach
    {
    cout<<x<<"\t";
    }
cout<<endl;
}