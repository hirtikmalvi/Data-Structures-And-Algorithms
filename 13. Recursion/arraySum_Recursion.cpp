#include <iostream>
using namespace std;

int getSum(int *arr, int n)
{
    if (n == 0) //base case: array is empty
    {
        return 0;
    }
    if (n == 1) //Base Case: Array has only 1 element
    {
        return arr[0];
    }

    return arr[0] + getSum(arr + 1, n - 1);
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

    cout << "Sum: " << getSum(arr, n);
    delete[] arr;
}