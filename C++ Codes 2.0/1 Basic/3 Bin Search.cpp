#include<iostream>
using namespace std;
int main()
{
    int A[10]={11,12,13,14,15,16,17,18,19,20};
    int l=0,h=9,key,mid;
    cout<<"Enter key to search- ";
    cin>>key;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(A[mid]==key)
        {
            cout<<"Element found at index "<<mid<<endl;
            return 0;
        }

        else if(key<A[mid])
            h=mid-1;

        else 
            l=mid+1;
   
    }
    cout<<"Element not found"<<endl; 
}
  