#include<iostream>
using namespace std;

int * fun() // fun() which returns a pointer of type integer
{
            //int x=101;
            //return &x; // This will throw an error because after execution of fun() x will be deleted from stack
                    //so it can not return address of local variable.
            
            
            // Create memory in Heap area 
    int *p=new int[5];   // using keyword new indicates memory in Heap
    for(int i=0;i<5;i++)
    {
        p[i]=i*5;
    }
    cout<<"Address of p "<<p<<endl;
    return p;

}
int main()
{
    int *q = fun();
    cout<<"Address of q "<<q<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<q[i]<<endl;
    }
}