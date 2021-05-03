#include <iostream>
using namespace std;
class innova
{
public:
    static int price;
    innova()
    {
    }
    static int innovaPrice()
    {
        return price;
    }
};
int innova::price = 3400056; //will be same for all objects of innova
int main()
{
    cout << innova::innovaPrice() << endl; //accessing static member directly w/o creating object
    innova my;
    cout << my.innovaPrice() << endl;
}