#include<iostream>
using namespace std;
// template class is used to define generic

/*
FUNCTION   OVERLOADING
int max(int x,int y)
{
    if (x>y)
       return x;
    else
       return y;
}
float max(float x, float y)
{
       if (x>y)
       return x;
    else
       return y;
}

*/
template<class T>
T maxim(T x, T y)
{
    return x>y?x:y;
}
int main()
{
 cout<<maxim(3,7);
 cout<<maxim(3.6,8.8);
}