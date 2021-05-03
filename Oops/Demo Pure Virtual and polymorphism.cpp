#include <iostream>
using namespace std;
class shape
{
public:
    virtual void area() = 0;
    virtual void perimeter() = 0;
};

class square : public shape
{
private:
    int side;
    float getLen();

public:
    square()
    {
        side = getLen();
    }

    void area()
    {
        cout << "Area of square " << side * side << endl;
    }
    void perimeter()
    {
        cout << "Perimeter of Square " << 4 * side << endl;
    }
};
float square::getLen()
{
    float s;
    cout << "Enter side of sqaure  " << endl;
    cin >> s;
    return s;
}

class circle : public shape
{
    float radius, getRadius();

public:
    circle()
    {
        radius = getRadius();
    }
    void area()
    {
        cout << "Area of Circle with radius " << radius << " is" << 3.14 * radius * radius << endl;
    }
    void parameter()
    {
        cout << "Circumference of circle " << 6.28 * radius << endl;
    }
};
float circle ::getRadius()
{

    float r;
    cout << "Enter radius " << endl;
    cin >> r;
    return r;
}

int main()
{
    shape *p = new square();
    p->area();
    p->perimeter();
    *p = new circle();
    p->area();
    p->perimeter();
}