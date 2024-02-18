// Coding Ninjas Problem: Allocate Books
/*
Problem statement
Given an array ‘arr’ of integer numbers, ‘arr[i]’ represents the number of pages in the ‘i-th’ book.
There are ‘m’ number of students, and the task is to allocate all the books to the students.

Allocate books in such a way that:
1. Each student gets at least one book. (Each students have books > 1)
2. Each book should be allocated to only one student. (If ith book has been assigned then it must not assign to another student )
3. Book allocation should be in a contiguous manner. (Assign ith,then i+1th ... nth book) (Not like ith, nth , i+1th)

You have to allocate the book to ‘m’ students such that the maximum number of pages assigned to a student is minimum.(Explained in following example)

If the allocation of books is not possible, return -1.

Example:
Input: ‘n’ = 4 ‘m’ = 2
‘arr’ = [12, 34, 67, 90]

Output: 113

Explanation: All possible ways to allocate the ‘4’ books to '2' students are:

12 | 34, 67, 90 - the sum of all the pages of books allocated to student 1 is ‘12’, and student two is ‘34+ 67+ 90 = 191’, so the maximum is ‘max(12, 191)= 191’.

12, 34 | 67, 90 - the sum of all the pages of books allocated to student 1 is ‘12+ 34 = 46’, and student two is ‘67+ 90 = 157’, so the maximum is ‘max(46, 157)= 157’.

12, 34, 67 | 90 - the sum of all the pages of books allocated to student 1 is ‘12+ 34 +67 = 113’, and student two is ‘90’, so the maximum is ‘max(113, 90)= 113’.

We are getting the minimum in the last case. min(191,157,113)

Hence answer is ‘113’.
*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool isPossible(vector<int> &arr, int n, int m, int mid)
{
    int studentCount = 1;
    int pageSum = 0;
    // int sum = 0;

    for (int i = 0; i < n; i++)
    {

        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;
            if (studentCount > m || arr[i] > mid)
            {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int bSBookAllo(vector<int> &arr, int start, int end, int &ans, int n, int m)
{
    int mid = start + (end - start) / 2;

    if (start > end)
    {
        return ans;
    }

    if (isPossible(arr, n, m, mid))
    {
        ans = mid;
        return bSBookAllo(arr, start, mid - 1, ans, n, m);
    }
    else
    {
        return bSBookAllo(arr, mid + 1, end, ans, n, m);
    }
}

int findPages(vector<int> &arr, int n, int m)
{

    if (m > n)
    {
        return -1;
    }

    int start = 0;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    int end = sum;
    int ans = -1;

    return bSBookAllo(arr, start, end, ans, n, m);
}

// We take inputs as number of books n(size of array), no of pages arr[i](array elements) and no of students m.