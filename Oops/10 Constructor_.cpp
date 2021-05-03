#include <iostream>
using namespace std;
class Rectangle
{
private: //If I make it Public Data can be mishandled.private means we dont have direct access to data .
    int len, breadth;

public:
    void setLength(int l) // This function is used to set data and called "MUTATOR"
    {
        if (l > 0) //length can,t be negative
            len = l;
        else
            cout << "Len cant be zero or negative" << endl;
        len = 0;
    }
    void setBreadth(int b) //"MUTATOR"
    {
        if (b > 0)
            breadth = b;
        else
            cout << "breadth can not be zero or negative " << endl;
        breadth = 0;
    }
    int getLength() // This function is used to access data and called ACCESSOR
    {
        return len;
    }
    int getBreadth() //ACCESSOR
    {
        return breadth;
    }
};
int main()
{
}