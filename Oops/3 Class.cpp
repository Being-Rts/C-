#include <iostream>
using namespace std;
class Rectangle //Class is collection of Data & Function
{
public: //By default class is private,Unless it is public we can not access.
    int length;
    int breadth;
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return (length + breadth) * 2;
    }
};
int main()
{
    Rectangle r1, r2; // Two object r1 , r2 of Rectangle type
    r1.length = 10;   //assigning length to Rectangle 1
    r1.breadth = 5;   //with '.' operator we can access Data or Fuction of Class
    r2.length = 20;
    r2.breadth = 10;
    cout << "Area of Rectangle 1 " << r1.area() << endl;
    cout << "Area of Rectangle 2 " << r2.area() << endl;
    cout << "Perimeter of Rectangle 1 " << r1.perimeter() << endl;
    cout << "Perimeter of Rectangle 2 " << r2.perimeter() << endl;
}
