#include <iostream>
using namespace std;
// PUBLIC PRIVATE PROTECTED
class rectangle
{
private:
    int length;
    int breadth;

protected:
    int b;

public:
    void setLength(int l) // Mutator
    {
        if (l > 0)
            length = l;
        else
            l = 1;
    }
    void setBreadth(int b)
    {
        if (b > 0)
            breadth = b;
        else
            b = 1;
    }
    int getLength() //Accessor
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    int area()
    {
        return getLength() * getBreadth();
    }
};
int main()
{
    rectangle r1;
    // r1.length = 10;
    // r1.breadth = 20; can't access because it is private
    r1.setLength(5);
    r1.setBreadth(7);
    cout << r1.area() << endl;
}