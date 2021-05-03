#include <iostream>
using namespace std;
/*
Car is a generalized term with some basic and necessary features.
If any class is inheriting it, it must override all its basic function in .
To force other class that are being implemented using basic functions we assign '0' to virtual fn.
Virtual in the sence car isn't exist physically its a genaralised term as Shape which has its 
entity like Rectangle, Triangle, 
*/
class car
{
public:
    virtual void start() = 0; // Settinng =0 will make it pure virtual.
    virtual void stop() = 0;  // which is meant that implemention of these func is necessary in other class that are inheriting it.
};
class benz : public car
{
public:
    void start()
    {
        cout << "Benz started" << endl;
    }
    void stop()
    {
        cout << "Benz stopped" << endl;
    }
};
class venue : public car
{
public:
    void start()
    {
        cout << "Venue started";
    }
    void stop()
    {
        cout << "Venue stopped" << endl;
    }
};
int main()
{
    car *c = new benz(); // creating an reference pointer of car that is pointing to benj class
    c->stop();
    c = new venue();
    c->start();
}