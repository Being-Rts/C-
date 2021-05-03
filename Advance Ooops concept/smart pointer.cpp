#include <iostream>
using namespace std;
class rectangle
{
    int length, breadth;

public:
    rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    int area()
    {
        return length * breadth;
    }
};
int main()
{
    rectangle *p = new rectangle(10, 5);
    cout << p->area() << endl;
    p = new rectangle(19, 4); // p assigned to new memory but old memory is not deleted yet
    cout << p->area() << endl;
    cout << p->area();
}