// Strivers Lecture for better Understanding
// Love Babbar: Lecture 36

#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int start, int end)
{
    int pivot = arr[start]; // Taking first element as Pivot Element
    int i = start, j = end; // i and j
    while (i < j)           // Keep executing till i < j
    {
        // Reason of doing following is to place the pivot ele at correct position where all the elements on left of pivot is less then pivot and all the elements on right of pivot is greter than pivot
        while (arr[i] <= pivot && i <= end) // Keep incrementing i till you find element > pivot
        {
            i++;
        }
        while (arr[j] > pivot && j >= start) // Keep decrementing j till you find element <= pivot
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[start], arr[j]); // This will place the pivot element at its correct place where all lefts < pivot and all rights > pivot
    // Left elements of pivot ele < pivot ele < Right elements of pivot ele
    return j;
}

void qSort(vector<int> &arr, int start, int end)
{                     // Base case
    if (start >= end) // Single Element as arr = {1} start = end = 0 | Empty Array as arr = {} start = 0 and end = -1
    {
        return;
    }
    int p = partition(arr, start, end); // Make two parts as left and right and the pivot element is at its correct position
    qSort(arr, start, p - 1);           // Left Part
    qSort(arr, p + 1, end);             // Right Part
}

int main()
{
    vector<int> arr;
    int n;
    cout << "Number of elements: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        arr.push_back(element);
    }
    qSort(arr, 0, n - 1);

    cout << "Sorted Array: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}