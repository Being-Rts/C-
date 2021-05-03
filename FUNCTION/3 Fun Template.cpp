#include<iostream>
using namespace std;
template <class T>
T maxim(T a, T b)
{
    return a>b?a:b;
}
/*int maxim(int a, int b)
{
    return a>b?a:b;
}
float maxim(float a, float b)
{
    return a>b?a:b;
}
*/

int main()
{
cout<<maxim(316,32)<<endl;
cout<<maxim(21.7,21.6)<<endl;    
// We can call same function using different type of arguments
}