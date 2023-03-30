#include <iostream>
using namespace std;
int linearsearch(int key, int A[],int size)
{

        int i=0;
        while(i<size)
        {
            if(A[i]==key)
            {
                cout<<"Element found at index "<<i<<endl;
                return 0;
            }
            i++;
        }
        cout<<"Element is not found "<<endl;
        return -1;
}    

//construction of array
int main()
{
    int n,key;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int Array[n];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>Array[i];
    }
    cout<<"Enter the key to search: ";
    cin>>key;
    linearsearch(key,Array,n);
    return 0;
}