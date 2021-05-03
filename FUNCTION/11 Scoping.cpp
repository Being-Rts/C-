#include <iostream>
using namespace std;
int g = 101; //g is global variable
int main()
{
    int g = 51; //g is local inside function
    cout << "Local value of g " << g << endl;
    cout << "Global value of g " << ::g << endl; //accessing global value directly
}