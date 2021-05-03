#include <iostream>
using namespace std;
int total, item, minus_items;
int main()
{
    total = 0;
    minus_items = 0;
    while (1)
    {
        cout << "enter # to add\n";
        cout << "Enter 0 to stop" << endl;
        cin >> item;
        if (item == 0)
            break;
        if (item < 0)
        {
            ++minus_items;
            continue;
        }
        total += item;
        cout << "Total is " << total << endl;
    }
    cout << "Final Total " << total << endl;
    cout << "minus total " << minus_items << endl;
}