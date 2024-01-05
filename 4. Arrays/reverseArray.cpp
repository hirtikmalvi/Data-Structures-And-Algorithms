#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
    int start = 0, end = size - 1;
    for (int start = 0; start <= end; start++, end--)
    {
        swap(arr[start], arr[end]);
    }
    cout << "Reversed Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<<" ";
    }
}

int main()
{
    int arr[100], n;
    cout << "Number of elements: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    reverseArray(arr, n);
    return 0;
}