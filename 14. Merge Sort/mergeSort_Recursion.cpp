// Strivers Lecture for better Understanding
// Love Babbar: Lecture 35

#include <iostream>
#include <vector>
using namespace std;

void mergeArrays(vector<int> &arr, int start, int mid, int end)
{
    vector<int> temp;
    int left = start;
    int right = mid + 1;

    while (left <= mid && right <= end)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left++]);
        }
        else
        {
            temp.push_back(arr[right++]);
        }
    }
    while (left <= mid)
    {
        temp.push_back(arr[left++]);
    }
    while (right <= end)
    {
        temp.push_back(arr[right++]);
    }
    for (int i = start; i <= end; i++)
    {
        arr[i] = temp[i - start];
    }
}

void mergeSort(vector<int> &arr, int start, int end)
{

    if (start == end)
    {
        return;
    }
    int mid = start + (end - start) / 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    mergeArrays(arr, start, mid, end);
}

int main()
{
    vector<int> arr;
    int n;
    cout << "Number of elements: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        arr.push_back(element);
    }
    mergeSort(arr, 0, n - 1);

    cout << "Sorted Array: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}