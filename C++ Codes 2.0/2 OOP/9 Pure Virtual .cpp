#include<iostream>
using namespace std;
class Car
{
    public:
    virtual void start() = 0; //Pure virtual function mus be overridden in  derived
    virtual void stop() = 0;
    void price();
};
class Innova : public Car
{
 public:
 void start()
 {
    cout<<"Innova Started\n";
 }
 void stop()
 {
    cout<<"Innova Stopped\n";
 }
};
class Thar : public Car
{
 public:
 void start()
 {
    cout<<"Thar Started\n";
 }
 void stop()
 {
    cout<<"Thar Stopped\n";
 }
};
int main()
{
   /* Innova I;
    I.start();
    I.stop();
    Thar T;
    T.start();
    T.stop(); */
    Car *c=new Innova(); //Pointer of class Car and Object Innova.
    c->start();
    c->stop();
    c=new Thar();
    c->start();
    c->stop();
    Car C;
    C.start();
}