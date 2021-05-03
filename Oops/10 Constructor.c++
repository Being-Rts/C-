#include <iostream>
using namespace std;
class rectangle
{
private:
    int len, bre;

public:
    // rectangle()     // Non_Parameterized Constructor
    // {
    //     len = 0;
    //     bre = 0;
    // }
    //We can achieve same with non pareameterized by providing default options.So no need to Declare parameterized constructor
    rectangle(int l = 0, int b = 0) // Parameterized Constructor but can work as non-parameterized also if we give default value
    {
        if (l >= 0 && b >= 0)
        {
            len = l;
            bre = b;
        }
        else
            cout << "Wrong input " << endl;
    }
    rectangle(rectangle &r2) // Copy Constructor
    {
        len = r2.len;
        bre = r2.bre;
    }
    int area()
    {
        return len * bre;
    }
};
int main()
{
    rectangle r1(10, 3); //parameterized constructor
    rectangle r2(r1);    //copy constructor
    rectangle r3();      //non parameterized constructor
    cout << r1.area() << endl;
    cout << r2.area() << endl; //Copy constructor
}