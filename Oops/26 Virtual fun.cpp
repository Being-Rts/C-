#include <iostream>
using namespace std;
class car
{
public:
    virtual void start()
    {
        cout << "car started" << endl;
    }
    virtual void stop()
    {
        cout << "car stopped" << endl; // There is no need of any inside statement . only declaration of skelton is important
    }
};
class benz : public car
{
    void start()
    {
        cout << "Benz started";
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
    // car c;
    // c.start(); // this will execute staret function of car class by default.
    //            // to make it execute start() of benz make start() of car Virtul
    car *c = new benz(); // creating an reference pointer of car that is pointing to benj class
    c->stop();
    c = new venue();
    c->start();
}