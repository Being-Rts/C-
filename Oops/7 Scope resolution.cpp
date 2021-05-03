#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length, breadth;

public:
    Rectangle()
    {
        cout << "Enter Length and Breadth " << endl;
        cin >> length;
        cin >> breadth;
    }
    int area() //In-Line function (Inline function generates in main fn. in machine code so It should not be complex
    // In-Line function should be simpler )
    {
        cout << "Area is  " << length * breadth << endl;
    }
    int perimeter();
};
int Rectangle::perimeter() // :: is Scope resolution operator that indicates compiler that perimeter func that is declared
                           // in class is defined outside. It will return value to main after execution
{
    cout << "Perimeter is " << 2 * (length + breadth) << endl;
}

int main()
{
    Rectangle R;
    R.area();
    R.perimeter();
}