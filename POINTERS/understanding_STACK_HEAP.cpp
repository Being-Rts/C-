#include<iostream>
using namespace std;
int main()
{
    int A[5]={1,2,3,4,5}; //A[] is in Stack
    int *p;
    p=new int[5]; //Heap
    A[2]=100;
    p[0]=1000;
    p[3]=899;
    cout<<A[0]<<" "<<A[2]<<endl;
    cout<<p[0]<<" "<<p[1]<<" "<<p[3]<<endl;
    delete p; //deleting heap array
    cout<<p[0]<<endl;
}
