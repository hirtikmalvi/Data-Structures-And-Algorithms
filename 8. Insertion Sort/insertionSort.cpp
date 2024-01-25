#include <iostream>
using namespace std;

void InsertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++) // Rounds. if n=5, then rounds will be 1,2,3,4 (1 to n-1).
    {
        int j = i - 1; // Previous element of i.
        int temp = arr[i];

        while (j >= 0)
        {
            if (temp < arr[j]) // Checking whether the previous element arr[j] > temp(current i)
            {
                arr[j + 1] = arr[j]; // If true then, Shifting elements +1 index till the condition becomes false.
            }
            else
            {
                break;
            }
            j--;
        }
        arr[j + 1] = temp; // When condition becomes false, j extra 1 index pichhe, so we need to place our temp at right place by using this condition.
    }
}

// Other Optimised Way
/*void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (temp < arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}*/

int main()
{
    int arr[100], n;
    cout << "Number of elements: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    InsertionSort(arr, n);
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}