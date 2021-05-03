#include<iostream>
using namespace std;
int main()
{
    int i,size;
    cout<<"Enter the size of array "<<endl;
    cin>>size;
    int arr[size];
    for(i=0;i<size;i++)
    {
    cout<<"Enter the element "<<endl;
    cin>>arr[i];
    }

    for(int x=size;x>=0;x--)
    {
        cout<<arr[x]<<"\t";
    }
cout<<endl;
}
