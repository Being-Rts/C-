#include<iostream>
using namespace std;
int main()
{
    int a[5]={12,20,34,5,6};
    //in for each loop we need not to worry about size of array
    for(auto x:a) //auto keyword automatically detects data type 
    {
        cout<<x<<" "; 
    }
    cout<<endl;
    int sum=0;
   //sum of array
    for(auto x:a)
    {
        sum+=x; 
    }
    cout<<"Sum of array: "<<sum<<endl;
    // max in array
    int max=a[0];
    for(auto x:a)
    {
        if (x>max)
        {
            max=x;
        }
         cout<<a[x];
    }
    cout<<"Max in array: "<<max<<endl;
    return 1;
}