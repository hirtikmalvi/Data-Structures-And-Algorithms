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
int firstPosition(int arr[], int size, int key)
{
    int start = 0, end = size - 1, ans = -1; // At starting ans = -1, because if not found element then it will return -1.
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (key == arr[mid])
        {
            ans = mid;     // Storing the mid in ans. the reason is there is also possiblilties of getting the same element in left part. Suppose array is 1 3 3 5 6 first our mid will be at index 2. but there is also another 3 beside the index 2.
            end = mid - 1; // So decreasing end = mid - 1 to get on left part.
        }
        else if (key < arr[mid])
            end = mid - 1;
        else
            start = mid + 1;
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastPosition(int arr[], int size, int key)
{
    int start = 0, end = size - 1, ans = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (key == arr[mid])
        {
            ans = mid;
            start = mid + 1; // the same here as above but going to right part to check whether same element as key is there or not.
        }
        else if (key < arr[mid])
            end = mid - 1;
        else
            start = mid + 1;
        mid = start + (end - start) / 2;
    }
    return ans;
}

void firstAndLastPosition(int arr[], int n, int k) // This function will return our needed answer...
{
    cout << "First and Last occurence: " << firstPosition(arr, n, k) << " " << lastPosition(arr, n, k);
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

    firstAndLastPosition(arr, n, key);

    return 0;
}
