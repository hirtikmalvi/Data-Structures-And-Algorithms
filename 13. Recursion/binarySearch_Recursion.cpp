#include <iostream>
using namespace std;

bool binarySearch(int *arr, int start, int end, int key) // isPresent()
{
    int mid = start + (end - start) / 2;

    // base case: Element not found
    if (start > end)
    {
        return 0;
    }

    // base case: Element Founf
    if (arr[mid] == key)
    {
        return 1;
    }

    if (arr[mid] < key)
    {
        return binarySearch(arr, mid + 1, end, key);
    }
    else
    {
        return binarySearch(arr, start, mid - 1, key);
    }
}

int main()
{
    int size, key;
    cin >> size >> key;
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "isPresent: " << binarySearch(arr, 0, size, key);
    delete[] arr;
}