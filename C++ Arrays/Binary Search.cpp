//BinarySearch
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int a[12]={10,20,30,34,40,50,56,60,70,80,83,89}; // In Binary Search Array should be in Sorted order
int low=0,high=11,mid,key;
cout<<"Enter the key "<<endl;
cin>>key;
while(low<=high)
    {
        mid=(low+high)/2;
        if (key==a[mid]) 
            {
                cout<<"Found at  "<<mid<<endl;
                return 0;
            }
        else if (key<a[mid])
            high=mid-1;
        else 
            low=mid+1;
        
    }
cout<<"Key not Found"<<endl;
}