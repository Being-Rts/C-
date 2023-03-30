#include<iostream>
using namespace std;
class Base
{
    public:
  virtual void fun()
   {
    cout<<"i am Base\n";
   }
};
class Derived :public Base
{
    public:
    void fun()
    {
    cout<<"I am Derived\n";
    }
};
int main()
{
    Derived B;
    B.fun();
    Base *p =new Derived;
    p->fun();

}