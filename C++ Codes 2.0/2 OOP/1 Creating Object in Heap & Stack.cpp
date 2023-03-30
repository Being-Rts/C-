#include<iostream>
using namespace std;
class Rectangle
{
    public:
        int len , breadth;
        int area()
        {
            return len*breadth;
        }
        int perimeter()
        {
            return 2*(len+breadth);
        }
};
int main()
{
    Rectangle r1; // This is created in Stack
    r1.len=10;
    r1.breadth=15;
    Rectangle *r2= new Rectangle();
    r2->len=5;
    r2->breadth=10;
    cout<<"Area of Object created in stack memory is "<<r1.area()<<endl;
    cout<<"Area of Object created in heap memory is "<<r2->area() <<endl;
}