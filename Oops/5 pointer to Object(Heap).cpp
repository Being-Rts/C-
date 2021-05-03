//C++ Gives option to create Object in Heap or Stack. We can create anywhere
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
    Rectangle *p = new Rectangle; //Object created in Heap pointed by p
    p->length = 15;               //-> Dereferencing
    p->breadth = 10;
    cout << p->area() << endl;
}