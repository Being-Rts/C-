#include<iostream>
using namespace std;
int main()
{
    int *p=new int[5]; //Initialised an Array In Heap
    p[0]=1; p[1]=2;p[2]=3;p[3]=4;p[4]=5; //Inserted values in Array
    cout<<p[1]<<endl;
    cout<<p[4]<<endl;
    cout<<p<<endl;
    cout<<*(p+3)<<endl; //Here Value in Array at P[3] will br printed
    // delete p; //Delete memory before setting pointer to null otherwise MEMORY LEAK will occur
    p=nullptr; // p is not pointing to any memory. We are setting P as Null
    cout<<p<<endl; 
    cout<<*(p+3)<<endl; //Since Pointer is not pointing to array now It won't  Print any value
//At Line 11 we are setting p=nullptr , but array is still in the heap and WE have no Access to it.
//This is called memory Leak
//To resolve this Problem We must delete Array before setting Pointer to Null

}