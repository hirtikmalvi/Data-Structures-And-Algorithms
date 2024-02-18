#include <iostream>
using namespace std;

bool isSorted(int *arr, int n)
{
    if (n == 0 || n == 1) // base case: Either Array is empty or Array has onnly 1 element
    {
        return 1;
    }

    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        return isSorted(arr + 1, n - 1);
    }
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "isSorted: " << isSorted(arr, n);
    delete[] arr;
}