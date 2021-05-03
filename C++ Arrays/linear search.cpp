//Linear Search
#include<iostream>
using namespace std;
int main()
{
    int k,i;
    int Arr[]={1,32,4,34,55,66,45,48,775,554,33,200,66,45};
    int len=sizeof(Arr)/4;
    cout<<"Enter the key to search "<<endl;
    cin>>k;
    for(i=0;i<len;i++)
    {
        if (Arr[i]==k)
        {
        cout<<k<<" is present at index "<<i<<endl;
        return 0;
        }
    }
    cout<<"Key not found\n";
    
}