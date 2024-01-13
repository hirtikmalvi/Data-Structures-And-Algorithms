#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0, end = size - 1;
    // int mid = (start + end) / 2; // Leads to memory Overflow.
    int mid = start + (end - start) / 2; // Optimised solution and prevents from memory Overflow.

    while (start <= end)
    {
        if (key == arr[mid])
            return mid;
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int arr[100], n, key;
    cout << "Number of elements: (All elements must be in sorted order): ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the Key(target) element: ";
    cin >> key;
    if (binarySearch(arr, n, key) == -1)
        cout << "Element not found!";
    else
        cout << "Element found at index " << binarySearch(arr, n, key);

    return 0;
}
