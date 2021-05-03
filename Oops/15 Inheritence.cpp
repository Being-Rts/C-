#include <iostream>
using namespace std;
class Rectangle
{
public:
    int len = 8;
    int bre = 7;
    void display()
    {
        cout << len << " " << bre << endl;
    }
};
class Cuboid : public Rectangle //Inheriting Rectangle to achieve Reusability instead of Redesigning
{
public:
    int ht = 3;
    void show()
    {
        cout << len << " " << bre << " " << ht << endl;
    }
};

int main()
{
    Rectangle R1;
    R1.display();
    Cuboid C1;
    C1.display();
    C1.show();
}