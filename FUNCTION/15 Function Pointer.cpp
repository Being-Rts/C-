#include <iostream>
using namespace std;
int max(int x, int y)
{
    x > y ? cout << x << " is greater" : cout << y << " is greater" << endl;
    return 1;
}

int min(int x, int y)
{
    x < y ? cout << x << " is minimum" : cout << y << " is minimum" << endl;
    return 1;
}

int main()
{
    int (*fp)(int, int); //fp is a pointer to func which takes two integer as arguments
    fp = max;            // fp is assigned with address of max function
    (*fp)(100, 200);     // passing argumnt using fp pointer to max function
    fp = min;            // we reassigned value of fp by pointing it to min function now instead of max
    (*fp)(100, 200);     // passing arguments to min function
}