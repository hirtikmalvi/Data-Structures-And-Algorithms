// This Problem is Combination of both previously solved problems Binary Search and Pivot(Minimum) element in Sorted Rotated array.
// Coding Ninja PRroblem:  Search In Rotated Sorted Array
/*
Problem statement
You have been given a sorted array/list 'arr' consisting of ‘n’ elements. You are also given an integer ‘k’.
Now the array is rotated at some pivot point unknown to you.

For example, if 'arr' = [ 1, 3, 5, 7, 8], then after rotating 'arr' at index 3, the array will be 'arr' = [7, 8, 1, 3, 5].
Now, your task is to find the index at which ‘k’ is present in 'arr'.

Note :
1. If ‘k’ is not present in 'arr', then print -1.
2. There are no duplicate elements present in 'arr'.
3. 'arr' can be rotated only in the right direction.

Example:
Input: 'arr' = [12, 15, 18, 2, 4] , 'k' = 2
Output: 3

Explanation:
If 'arr' = [12, 15, 18, 2, 4] and 'k' = 2, then the position at which 'k' is present in the array is 3 (0-indexed).
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int findPivot(int arr[], int size)
{
    int start = 0, end = size - 1;

    int mid = start + (end - start) / 2;

    // Since it is Rotated sorted array, we find out solution with respect to last(end) element. The conditions are according to the end element. Means we will move towards the small element. The following condition are also help the to reach the smallest element.

    while (start < end)
    {
        if (arr[mid] >= arr[end]) // Means the element at mid is greater than end element.
        {
            start = mid + 1; // So we move towards it(end element.) by increasing start.
        }
        else // Means the element at mid is smaller than end element.
        {
            end = mid; // So we move towards it by decreasing end.
        }
        mid = start + (end - start) / 2;
    }

    return start; // arr[mid]; can also be used
}

int binarySearch(int arr[], int s, int e, int key)
{
    int start = s, end = e;
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

int searchElement(int arr[], int n, int k)
{
    int pivot = findPivot(arr, n);
    if (k >= arr[pivot] && k <= arr[n - 1])
    {
        return binarySearch(arr, pivot, n - 1, k);
    }
    else
    {
        return binarySearch(arr, 0, pivot - 1, k);
    }
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

    cout << "Enter the Key: ";
    cin >> key;

    cout << "The key element in Sorted or Rotated sorted array is at index: " << searchElement(arr, n, key);

    return 0;
}
