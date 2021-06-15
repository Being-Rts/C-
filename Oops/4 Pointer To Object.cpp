#include <iostream>
using namespace std;
class Rectangle //Class is collection of Data & Function
{
public: //By default class is private,Unless it is public we can not access.
    int length;
    int breadth;
    int area()
    {
        return (length * breadth);
    }
    int perimeter()
    {
        return (length + breadth) * 2;
    }
};
int main()
{
    Rectangle r; //Object created in stack
    Rectangle *p;
    int *ptr;
    p = &r;
    p->length = 15; //-> Dereferencing
    p->breadth = 10;
    cout << p->area() << endl;
    cout << r.area() << endl; //same as p->area()
    // ptr = &r; if we assign avalue then typr should be same
}