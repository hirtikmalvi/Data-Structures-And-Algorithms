/*
Problem statement:  Intersection Of Two Sorted Arrays
You are given two arrays 'A' and 'B' of size 'N' and 'M' respectively. Both these arrays are sorted in non-decreasing order. You have to find the intersection(Same Elements) of these two arrays.
Intersection of two arrays is an array that consists of all the common elements occurring in both arrays.

*/

/*
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    vector<int> matchings;

    int i = 0;
    int j = 0;

    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            matchings.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    return matchings;
}

int main()
{

    return 0;
}
*/