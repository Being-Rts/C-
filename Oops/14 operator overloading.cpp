#include <iostream>
using namespace std;
//addition of two complex numbers
class complex
{
public:
    int real, img;
    complex operator+(complex c)
    {
        complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.real = 5;
    c1.img = 7;
    c2.real = 6;
    c2.img = 9;
    c3 = c1 + (c2);
    cout << c3.real << "+" << c3.img << "i" << endl;
}