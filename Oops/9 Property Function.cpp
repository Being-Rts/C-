//  Property Functions
//  1. Muatator   2. Accessor
#include <iostream>
using namespace std;
class Rectangle
{
private: //If I make it Public Data can be mishandled.private means we dont have direct access to data.
         // Private does Data Hiding
    int len, breadth;

public:
    void setLength(int l) // This function is used to set data and called "MUTATOR"
    {
        if (l > 0) //length can,t be negative
            len = l;
        else
        {
            cout << "Len cant be zero or negative" << endl;
            len = 1; // Setting Len 1 by Default
        }
    }
    void setBreadth(int b) //"MUTATOR"
    {
        if (b > 0)
            breadth = b;
        else
        {
            cout << "breadth can not be zero or negative " << endl;
            breadth = 1;
        }
    }
    int getLength() // This function is used to access data and called ACCESSOR
    {
        return len;
    }
    int getBreadth() //ACCESSOR
    {
        return breadth;
    }
    int area()
    {
        return len * breadth;
    }
};
int main()
{
    Rectangle R1;
    // R1.len = 10 Can't be accessed because len is set to be private;
    R1.setLength(10);
    R1.setBreadth(7); // Setting data by Muatator Function
    cout << R1.area() << endl;
    cout << R1.getLength() << endl; // Getting Data by Accessor Function
    cout << R1.getBreadth() << endl;
}