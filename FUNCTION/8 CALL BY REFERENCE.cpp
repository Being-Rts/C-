/*
 CALL BY REFERENCE
 References in C++ is Aliasing
Key Idea-> In  CALL BY REFERENCE machine code doesn,t consider formal function
as seperate piece of code. It consider it as a part of main() function.
passing address in formal parameters aliases the actual parameters. So any changes 
in  called function is reflected in main function. No function is called it is just a
part of main()
 :) 
                    
                    ****IMPORTANT****
No activation record for formal parameters is created. It is 100% equivalent as writing piece of code
seperately as wring in main ........ 
I repeat no activation record is created in call by reference method. It only aliases the names of actual parameter
                     ****************
            -------------------
            | HEAP
            |
            |------------------
            |STACK
            |
            |------------------
            |CODE              |
            |                  |
            | a/x   b/y    temp|
            |                  |
            -------------------

*/

#include<iostream>
void swap(int &x,int &y) // Syntax is same as Call by value but in formal parameters we pass address of actual parameters
{
    int temp=x;
    x=y;
    y=temp;
}
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers a & b"<<endl;
    cin>>a>>b;
    swap(a,b); // a,b are Actual Parameters
    cout<<endl;
    cout<<"value of a is "<<a<<" & value of b is"<<b<<endl;

}