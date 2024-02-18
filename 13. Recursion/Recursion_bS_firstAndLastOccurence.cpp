/*
Problem: First and Last Position of an Element In Sorted Array.
Problem statement: You have been given a sorted array/list 'arr' consisting of ‘n’ elements. You are also given an integer ‘k’.
Now, your task is to find the first and last occurrence of ‘k’ in 'arr'.

Note :
1. If ‘k’ is not present in the array, then the first and the last occurrence will be -1.
2. 'arr' may contain duplicate elements.

Example:
Input: 'arr' = [0,1,1,5] , 'k' = 1
Output: 1 2

Explanation:
If 'arr' = [0, 1, 1, 5] and 'k' = 1, then the first and last occurrence of 1 will be 1(0 - indexed) and 2.
*/
#include <iostream>
using namespace std;

// following func. is to get First Occ. of the element using binary search.
int firstPosition(int arr[], int start, int end, int key, int &startAns)
{
    int mid = start + (end - start) / 2;

    if (start > end)
    {
        return startAns;
    }

    if (key == arr[mid])
    {
        startAns = mid;
        return firstPosition(arr, start, mid - 1, key, startAns);
    }
    else if (key < arr[mid])
    {
        return firstPosition(arr, start, mid - 1, key, startAns);
    }
    else
    {
        return firstPosition(arr, mid + 1, end, key, startAns);
    }
}

int lastPosition(int arr[], int start, int end, int key, int &endAns)
{
    int mid = start + (end - start) / 2;

    if (start > end)
    {
        return endAns;
    }

    if (key == arr[mid])
    {
        endAns = mid;
        return lastPosition(arr, mid + 1, end, key, endAns);
    }
    else if (key < arr[mid])
    {
        return lastPosition(arr, start, mid - 1, key, endAns);
    }
    else
    {
        return lastPosition(arr, mid + 1, end, key, endAns);
    }
}

void firstAndLastPosition(int arr[], int start, int end, int key) // This function will return our needed answer...
{
    int startAns = -1, endAns = -1;
    cout << "First and Last occurence: " << firstPosition(arr, 0, end, key, startAns) << " " << lastPosition(arr, 0, end, key, endAns);
}

int main()
{
    int arr[100], n, key;
    cout << "Number of elements: (All elements must be in sorted order): ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the Key(target) element: ";
    cin >> key;

    firstAndLastPosition(arr, 0, n - 1, key);

    return 0;
}
