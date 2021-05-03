#include <iostream>
using namespace std;
class test
{
private:
    int a, b;

public:
    static int count;
    test()
    {
        a = 10;
        b = 20;
        count++;
    }
    static int getCount()
    {
        return count;
    }
};
int test::count = 0;
int main()
{
    cout << test::count << endl;
    test t1; //accessing static members through objects
    cout << t1.count << endl;
    cout << t1.getCount() << endl; //access static data member using function
}