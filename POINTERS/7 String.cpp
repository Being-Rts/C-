// STRING
//1- Using Char Array
//2- Class String
#include <iostream>
using namespace std;
int main()
{
    char x = 'A'; // A is char
    //ways to declare String Using Array
    char y[] = "A"; // A is String
    char S[] = "Hello";
    char T[] = {'H', 'E', 'L', 'L', 'O', '\0', 'H', 'I'};
    char *P = "Hello"; //This will generate warning that C++ forbids converting a string to char
    //better to string in place of char :)
    cout << S;
}