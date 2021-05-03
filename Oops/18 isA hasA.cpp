#include <iostream>
using namespace std;
/*
There are two ways we can use a class in other 1. by inheriting , 2. By using it's object
*/
class parent
{
    /*
    ----------This class "isA"
    */
};
class base : public parent
{
    // inheriting features of class parent
    // This class "hasA"
};
class use
{
    parent p;
    //using parent as object
}