#include<iostream>
using namespace std;
class notDerived;
class Test
{
    private:
     int value=10;
    protected:
     int val2=20;
    public:
     int val3=30;
    friend void fun();
    friend notDerived;
};
class notDerived // we need to declare it before we can elaborate afterward
{
    Test t1;
    void func()
    {
        t1.value=20;
    }
};
 void fun()
{
     Test t;
     cout<<"Value of class variable is "<<t.value<<endl;
}
int main()
{
    fun();
}