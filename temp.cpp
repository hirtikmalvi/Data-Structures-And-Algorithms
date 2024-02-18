// Strivers Lecture for better Understanding
// Love Babbar: Lecture 36

#include <iostream>
#include <vector>
using namespace std;

void findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    double median;
    int m = nums1.size(), n = nums2.size();
    vector<int> sortedArray;
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (nums1[i] < nums2[j])
        {
            sortedArray.push_back(nums1[i]);
            i++;
        }
        else
        {
            sortedArray.push_back(nums2[j]);
            j++;
        }
    }
    while (i < m)
    {
        sortedArray.push_back(nums1[i]);
        i++;
    }
    while (j < n)
    {
        sortedArray.push_back(nums2[j]);
        j++;
    }

    if ((m + n) % 2 == 0)
    { // Even Size
        int tempIndex = m + n - 1;
        median = (sortedArray[tempIndex / 2] + sortedArray[(tempIndex + 1) / 2]) / 2;
    }
    else
    { // Odd Size
        median = sortedArray[(m + n - 1) / 2];
    }

    cout << "Merged Array: ";

    for (int i = 0; i < m + n; i++)
    {
        cout << sortedArray[i] << " ";
    }
}

int main()
{
    vector<int> arr1;
    vector<int> arr2;
    // vector<int> sortedArray;
    int m, n;
    cout << "Number of elements of m & n: ";
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        int element;
        cin >> element;
        arr1.push_back(element);
    }
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        arr2.push_back(element);
    }

    findMedianSortedArrays(arr1, arr2);

    // cout << "Sorted Array: ";

    // for (int i = 0; i < n; i++)
    // {
    //     cout << sortedArray[i] << " ";
    // }
    return 0;
}