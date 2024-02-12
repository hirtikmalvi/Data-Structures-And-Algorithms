/*
Coding Ninjas Problem: Find Minimum in Rotated Sorted Array
Inshort, finding minimum in a sorted or rotated sorted array.

Problem statement:
--> You are given an array 'arr' of size 'n' having unique elements that has been sorted in ascending order and rotated between 1 and 'n' times which is unknown.

--> The rotation involves shifting every element to the right, with the last element moving to the first position. For example, if 'arr' = [1, 2, 3, 4] was rotated one time, it would become [4, 1, 2, 3].

Input: 25 30 5 10 15 20
Output: 5
*/

// Solution using Recursion

#include <iostream>
using namespace std;

int findMin(int arr[], int start, int end)
{
    int mid = start + (end - start) / 2;

    if (start >= end)
        return arr[mid];

    if (arr[mid] > arr[end])
    {
        return findMin(arr, mid + 1, end);
    }
    else
    {
        return findMin(arr, start, mid);
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
    int start = 0, end = n - 1;
    cout << "The Pivot(Minimum) element in Sorted or Rotated sorted array: " << findMin(arr, start, end);

    return 0;
}