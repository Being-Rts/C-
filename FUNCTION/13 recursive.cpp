#include <iostream>
using namespace std;
void rec(int n)
{
    if (n > 0)
    {
        cout << n << " ";
        rec(n - 1);
    }
}
int main()
{
    int times;
    cout << "How many time do you ant to call rec function  ";
    cin >> times;
    rec(times);
}