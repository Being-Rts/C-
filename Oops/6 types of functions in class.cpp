#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;

public:
    //***TYPES*** OF***** FUNCTIONS***
    //*******CONSTRUCTOR**************
    Rectangle();
    Rectangle(int l, int b);
    Rectangle(Rectangle &r);
    //*******MUTATOR*******************
    void SetLength(int l);
    void SetLength(int b);
    //*********ACCESSOR***************
    int GetLength();
    int GetBreadth();
    //*********FACILITATORS************
    int area();
    int perimeter();
    //*********ENQUIRY**************
    int isSquare();
    //*********DESTRUCTOR***********
    ~Rectangle();
};

int main()
{
}