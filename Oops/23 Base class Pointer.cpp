#include <iostream>
using namespace std;
class basiccar
{
public:
    void start()
    {
        cout << "Car Started " << endl;
    }
};
class advancecar : public basiccar
{
public:
    void play()
    {
        cout << "Playing Music " << endl;
    }
};

int main()
{
    advancecar a;
    basiccar *ptr = &a;
    ptr->start();
    ptr->play(); //can't be accessed using base function because it is func of child
}