#include <iostream>
using namespace std;

void SelectionSort(int arr[], int n)
{
    if (n == 0 || n == 1) // Base Case: Either Array is empty or Have only 1 element which is alreaddy sorted;
    {
        return;
    }

    int minIndex = 0;           // storing index of first ele at each index
    for (int i = 1; i < n; i++) // Consider it as j loop iterative Sel Sort
    {
        if (arr[i] < arr[minIndex])
        {
            minIndex = i;
        }
    }
    swap(arr[minIndex], arr[0]);
    SelectionSort(arr + 1, n - 1); // At each iteration, first element will be at its position so next arr ele onwards arr + 1 and by doing that size of arr will be -1 at each time
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
    SelectionSort(arr, n);
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}