#include<iostream>
using namespace std;
int main()
{
    int A[10]={1,2,34,42,234,100,256,26,29,69};
    int sum=0;
    for(int i=0;i<10;i++)
    {
        sum+=A[i];
    }
    cout<<sum<<endl;
}