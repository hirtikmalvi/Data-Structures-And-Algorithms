#include <iostream>
using namespace std;

void BubbleSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        bool isSwapped = false;
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwapped = true;
            }
        }
        if (isSwapped == false)
        {
            return;
        }
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
    BubbleSort(arr, n);
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}