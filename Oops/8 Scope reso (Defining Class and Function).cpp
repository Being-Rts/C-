#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;

public:
    void RectangleSides();
    // Rectangle(int l, int b);
    Rectangle(Rectangle &r);
    void SetLength(int l) { l = length; };   //In-Line Function
    void SetBreadth(int b) { b = breadth; }; //In-Line Function
    int GetLength() { cout << length; };
    int GetBreadth() { cout << breadth; };
    int area();
    int perimeter();
    bool isSquare();
    ~Rectangle();
};
int main()
{
    Rectangle R1;
    R1.RectangleSides();
    R1.isSquare();
    R1.area();
    R1.perimeter();
}

//Defination using Scope Resolution Operator ::
void Rectangle::RectangleSides()
{
    cout << "Enter Length" << endl;
    cin >> length;
    cout << "Enter Length" << endl;
    cin >> breadth;
}
Rectangle::Rectangle(int l, int b)
{
    l = length;
    b = breadth;
}
int Rectangle::area()
{
    cout << length * breadth << endl;
}
int Rectangle::perimeter()
{
    cout << 2 * (length + breadth) << endl;
}
bool Rectangle::isSquare()
{
    cout << (length == breadth) << endl;
}
