#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {10, 20, 30};
    v.push_back(70);
    v.push_back(79);
    vector<int>::iterator itr;
    cout << "Using iterator" << endl;
    for (itr = v.begin(); itr != v.end(); itr++)
        cout << *itr << endl;
}