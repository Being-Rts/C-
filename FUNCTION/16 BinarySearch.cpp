//need to refine
#include <iostream>
using namespace std;
int BinarySearch(int A[], int n, int key)
{
    int mid, low = 0, high = n - 1;
    mid = (low + high) / 2;
    while (low <= high)
    {
        if (A[mid] == key)
        {
            cout << key << " found at " << mid;
            return 1;
        }
        else if (key <= A[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    cout << key << " not found";
}
int main()
{
    int Array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 15, 24, 66, 77, 88};
    int no_of_elements = sizeof(Array) / sizeof(Array[0]);
    int key;
    cout << "Enter the element to search ";
    cin >> key;
    BinarySearch(Array, no_of_elements, key);
}