// Sequential Search or Linear Search
#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
            return i;
    }
    return 0;
}

int main()
{
    int arr[100], n, key;
    cout << "Number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the key: ";
    cin >> key;
    int x = linearSearch(arr, n, key);
    if (x)
        cout << key << " found at index " << x;
    else
        cout << "Element not found!!!";
    return 0;
}