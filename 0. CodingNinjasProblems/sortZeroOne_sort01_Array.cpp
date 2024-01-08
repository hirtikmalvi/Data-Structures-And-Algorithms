#include <iostream>
using namespace std;

void sortZeroesAndOne(int input[], int size)
{
    // Our solution must be kind of 0 0 0 1 1 1.

    int i = 0;
    int j = size - 1;
    // Loop till i crosses j
    while (i <= j)
    {

        // If it is true then Our element (0) is on left means its correct position. and increment i++.
        if (input[i] == 0)
            i++;

        // If it is true then Our element (1) is on right means its correct position. and decrement j--.
        else if (input[j] == 1)
        {
            j--;
        }

        // If it is true then Our elements 0 and 1 are not on its correct position. So swap them.
        else
        {
            swap(input[i], input[j]);
            i++;
            j--;
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << input[i] << " ";
    }
}

int main()
{
    int arr[100], n;
    cout << "Number of elements: (All elements must be 0 and 1): ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sortZeroesAndOne(arr, n);

    return 0;
}