#include <iostream>
using namespace std;
int LinearSearch(int A[], int key, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (A[i] == key)
        {
            cout << key << " is found at " << i << "th index " << endl;
            return 1;
        }
    }
    cout << "Sorry Dude! We couldn,t find " << key << endl;
}
int main()
{
    int Array[] = {23, 43, 56, 78, 87, 65, 78, 33, 55, 12, 58, 99, 33, 98, 14, 15};
    int item;
    cout << "Enter the item to search " << endl;
    cin >> item;
    int num_of_elements = sizeof(Array) / sizeof(Array[0]); // This gives total number of elements in array
    LinearSearch(Array, item, num_of_elements);
}