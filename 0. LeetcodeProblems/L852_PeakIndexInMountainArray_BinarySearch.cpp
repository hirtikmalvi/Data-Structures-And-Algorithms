// Leetcode 852. Peak Index in a Mountain Array
/*
An array arr is a mountain if the following properties hold:

arr.length >= 3
There exists some i with 0 < i < arr.length - 1 such that:
arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
arr[i] > arr[i + 1] > ... > arr[arr.length - 1]
Given a mountain array arr, return the index i such that arr[0] < arr[1] < ... < arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1].
You must solve it in O(logn) time complexity.

Example 1:
Input: arr = [0,1,0]
Output: 1

Example 2:
Input: arr = [0,2,1,0]
Output: 1

Example 3:
Input: arr = [0,10,5,2]
Output: 1
*/

#include <iostream>
#include <algorithm>
using namespace std;

int peakIndexInMountainArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] < arr[mid + 1])
            start = mid + 1;
        else
            end = mid;
        mid = start + (end - start) / 2;
    }
    return mid;
}

int main()
{
    int arr[100], n, key;
    cout << "Number of elements: (All elements must be in Mountain sorted order): ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Peak Element in Mountain Array found at index " << peakIndexInMountainArray(arr, n);

    return 0;
}
