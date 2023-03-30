#include<iostream>
using namespace std;
class Demo
{
    int val;
    public:
    Demo()
    {
        cout<<"Enter the value- ";
        cin>>val;
    }
    
    void operator +() // Unary Operator overloading
    {
        val+=1;
    }
    void Display()
    {
        cout<<"\n"<<val;
    } 

};
int main()
{
    Demo d;
    +d;
    d.Display();
}
