/*
Day 8 : Second largest element in the array
Problem statement
You have been given an array/list 'ARR' of integers. Your task is to find the second largest element present in the 'ARR'.

Note:
a) Duplicate elements may be present.

b) If no such element is present return -1.
Example:
Input: Given a sequence of five numbers 2, 4, 5, 6, 8.

Output:  6

Explanation:
In the given sequence of numbers, number 8 is the largest element, followed by number 6 which is the second-largest element. Hence we return number 6 which is the second-largest element in the sequence.
*/

/*
#include <bits/stdc++.h>
int findSecondLargest(int n, vector<int> &arr)
{
    int largest = arr[0], secondlargest = INT_MIN;

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondlargest = largest;
            largest = arr[i];
        } else if (arr[i] < largest && arr[i] > secondlargest) {
            secondlargest = arr[i];
        }
    }

    return secondlargest == INT_MIN ? -1 : secondlargest;
}
*/