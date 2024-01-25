/*
Love Babbar: Lecture 21
Problem statement: Add Two Array
You are given two numbers 'A' and 'B' in the form of two arrays (A[] and B[]) of lengths 'N' and 'M' respectively, where each array element represents a digit. You need to find the sum of these two numbers and return this sum in the form of an array.

Note:

1. The length of each array is greater than zero.

2. The first index of each array is the most significant digit of the number. For example, if the array A[] = {4, 5, 1}, then the integer represented by this array is 451 and array B[] = {3, 4, 5} so the sum will be 451 + 345 = 796. So you need to return {7, 9, 6}.

3. Both numbers do not have any leading zeros in them. And subsequently, the sum should not contain any leading zeros.
*/

/*
#include <bits/stdc++.h>
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
    int i = n-1;
    int j = m-1;
    int carry = 0;
    vector<int> temp;

    //For 123 + 321 Or Till both array size satiesfies
    while(i>=0 && j>=0){
        int value1 = a[i];
        int value2 = b[j];
        int sum = value1 + value2 + carry;
        carry = sum / 10;
        int actualInsertVal = sum % 10;
        temp.push_back(actualInsertVal);
        i--;
        j--;
    }

    //For Remaining of Array a as 1 2 3 + 3
    while(i>=0){
        int sum = a[i] + carry;
        carry = sum / 10;
        int actualInsertVal = sum % 10;
        temp.push_back(actualInsertVal);
        i--;
    }
    //For Remaining of Array b as 3 + 3 2 1
    while(j>=0){
        int sum = b[j] + carry;
        carry = sum / 10;
        int actualInsertVal = sum % 10;
        temp.push_back(actualInsertVal);
        j--;
    }

    //For Remaining of single carry at last (if carry is there)
    while(carry!=0){
        int sum = carry;
        carry = sum / 10;
        int actualInsertVal = sum % 10;
        temp.push_back(actualInsertVal);
    }

    a=temp;
    reverse(a.begin(),a.end());
    return a;
}
*/