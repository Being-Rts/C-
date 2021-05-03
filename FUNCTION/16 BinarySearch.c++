#include <iostream>
using namespace std;
int BinarySearch(int A[], int n, int key)
{
    int mid, low = 0, high = n;
    mid = (low + high) / 2;
    while (low < high)
    {
        if (A[mid] == key)
            cout << key << " found at " << mid;
        else if (key < mid)
            high = high - 1;
        else if (key > A[mid])
            low = mid + 1;
    }
    cout << key << " not found";
    return 1;
}
int main()
{
    int Array[] = [ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 ];
    int no_of_elements = sizeof(Array) / sizeof(Array[0]);
    int key;
    cout << "Enter the element to search ";
    cin >> key;
    BinarySearch(Array, no_of_elements, key);
}