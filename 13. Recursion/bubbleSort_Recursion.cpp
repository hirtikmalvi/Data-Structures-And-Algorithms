#include <iostream>
using namespace std;

void BubbleSort(int arr[], int n)
{
    if (n == 0 || n == 1) // Base Case: Either Array is empty or Have only 1 element which is alreaddy sorted;
    {
        return;
    }

    for (int i = 0; i < n - 1; i++) 
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    BubbleSort(arr, n - 1); //At each iteration max. element will get sorted at the last positions of array. So n - 1.
}

int main()
{
    int arr[100], n;
    cout << "Number of elements: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    BubbleSort(arr, n);
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}