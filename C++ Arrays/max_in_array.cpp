#include<iostream>
using namespace std;
int main()
{
 int a[]={2,4,66,44,75,56,89,98,76,4,32,23,4};
 int max=a[0];
 for(int i:a)
 {
     if (i>max)
     max=i;
     
 }   
 cout<<"Maximum element in array is "<<max<<endl;
}