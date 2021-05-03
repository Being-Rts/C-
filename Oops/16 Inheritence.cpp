#include <iostream>
using namespace std;
class rectangle
{
    int len, bre;

public:
    rectangle(int l = 0, int b = 0)
    {
        setLength(l);
        setBreadth(b);
    }
    int getLength() { return len; }
    int getBreadth() { return bre; }
    void setLength(int l) { len = l; }
    void setBreadth(int b) { bre = b; }
    bool isSquare();
    // ~rectangle(); //destructor
    int area()
    {
        return (getLength() * getBreadth());
    }
    int perimeter()
    {
        return 2 * (getLength() + getBreadth());
    }
};
class cuboid : public rectangle
{
    int hght;

public:
    cuboid(int h = 0)
    {
        setHeight(h);
    }
    void setHeight(int h) { hght = h; }
    int getHeight() { return hght; };
    int volume()
    {
        return getLength() * getBreadth() * getHeight();
    }
    //~cuboid(); //destructor
};

int main()
{
    rectangle r1(10, 5);
    cout << "Area " << r1.area() << endl;
    cout << "Perimeter " << r1.perimeter() << " cm" << endl;
    cuboid c1(5);
    c1.setLength(4);
    c1.setBreadth(5);
    cout << "Volume of cuboid " << c1.volume() << " cm^3" << endl;
}