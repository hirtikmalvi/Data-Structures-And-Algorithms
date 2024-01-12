/*
Coding Ninjas Problem: Find Minimum in Rotated Sorted Array
Inshort, finding minimum in a sorted or rotated sorted array.

Problem statement:
--> You are given an array 'arr' of size 'n' having unique elements that has been sorted in ascending order and rotated between 1 and 'n' times which is unknown.

--> The rotation involves shifting every element to the right, with the last element moving to the first position. For example, if 'arr' = [1, 2, 3, 4] was rotated one time, it would become [4, 1, 2, 3].

Input: 25 30 5 10 15 20
Output: 5
*/

#include <iostream>
using namespace std;

int findMin(int arr[], int size)
{
    int start = 0, end = size - 1;

    int mid = start + (end - start) / 2;

    // Since it is Rotated sorted array, we find out solution with respect to last(end) element. The conditions are according to the end element. Means we will move towards the small element. The following condition are also help the to reach the smallest element.

    while (start < end)
    {
        if (arr[mid] > arr[end]) // Means the element at mid is greater than end element.
        {
            start = mid + 1; // So we move towards it(end element.) by increasing start.
        }
        else // Means the element at mid is smaller than end element.
        {
            end = mid; // So we move towards it by decreasing end.
        }
        mid = start + (end - start) / 2;
    }

    return arr[start]; // arr[mid]; can also be used
}

int main()
{
    int arr[100], n, key;
    cout << "Number of elements: (All elements must be in sorted or rotated sorted order): ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The Pivot(Minimum) element in Sorted or Rotated sorted array: " << findMin(arr, n);

    return 0;
}
