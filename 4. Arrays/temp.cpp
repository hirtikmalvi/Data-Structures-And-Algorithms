#include <bits/stdc++.h>
void sort012(int *arr, int n)
{
    // sort(arr,arr+n);
    int countArray[3] = {0};
    for (int i = 0; i < n; i++)
    {
        countArray[arr[i]]++;
    }
    int i = 0, j = 0;
    //    int count = 0;
    while (i < 3 && j < n)
    {
        int count = countArray[i];
        if (count > 0)
        {
            arr[i] = i;
            count--;
            j++;
        }
        if (count == 0)
        {
            i++;
        }
    }
    // for(int j=0;j<n;j++){
    //     cout<<arr[j]<<" ";
    // }
}