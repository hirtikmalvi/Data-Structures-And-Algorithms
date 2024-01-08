#include <iostream>
using namespace std;

void alternateSwap(int arr[], int size)
{
    for (int i = 0; i < size - 1; i += 2)
    {
        int j = i + 1;
        if (j >= size)
        {
            break;
        }
        swap(arr[i], arr[j]);
        j = 0;
    }
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
    alternateSwap(arr, n);
    cout << "Alternately Swapped Array elements: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
//         i j
// 0 1 2 3 4 5
// 1 2 3 4 5 6

//         i j(5)
// 0 1 2 3 4
// 1 2 3 4 5