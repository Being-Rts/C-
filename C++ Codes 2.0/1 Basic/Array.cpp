#include<iostream>
using namespace std;

int main()
{
    int A[10]={1,2,3,5,7,55,6,7,22,44};
    cout<<"Original Array: ";
    for(auto x:A)
        cout<<x<<" ";
    cout<<endl;
    return 0;
}