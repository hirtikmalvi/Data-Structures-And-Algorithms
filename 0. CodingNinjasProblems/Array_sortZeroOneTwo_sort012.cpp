/*
Problem statement: Sort 0 1 2
You have been given an integer array/list(ARR) of size 'N'. It only contains 0s, 1s and 2s. Write a solution to sort this array/list.
Note : Try to solve the problem in 'Single Scan'. ' Single Scan' refers to iterating over the array/list just once or to put it in other words, you will be visiting each element in the array/list just once.
*/

#include <iostream>
using namespace std;

void sort012(int arr[], int n)
{
    // sort(arr,arr+n); Ready to go approach 🙂
    int countArray[3] = {0}; // Making array for counting frequency of 0, 1, 2 and initializing all 3 position with 0.
    for (int i = 0; i < n; i++)
    {
        countArray[arr[i]]++; // Storing frequency count
    }
    int i = 0, j = 0; // i for countArray and j for main arr array. to make sure the loop is within the size of both the Arrays.
    //    int count = 0;
    while (i < 3 && j < n) // i is fixed as 3 since there are only 3 ele. as 0,1,2 and j < n(arr size).
    {
        // int count = countArray[i];
        if (countArray[i] > 0)
        {
            arr[j] = i;      // Assign particular index i to the arr. Because our index of countArray are same as our 0s 1s and 2s.
            countArray[i]--; // Decreasing freq. count.
            j++;             // Increasing j for the next position of arr.
        }
        if (countArray[i] == 0) // if countArray becomes 0 for ith index then start new ith index.
        {
            i++;
        }
    }
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
}

int main()
{
    int arr[100], n;
    cout << "Number of elements: (All elements must be 0, 1 and 2): ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort012(arr, n);

    return 0;
}