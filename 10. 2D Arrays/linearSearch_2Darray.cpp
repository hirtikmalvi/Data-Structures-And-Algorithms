#include <iostream>
using namespace std;

bool isPresent(int arr[][4], int key, int rowSize, int colSize)
{
    for (int i = 0; i < rowSize; i++) // Row Wise
    {
        for (int j = 0; j < colSize; j++)
        {
            if (arr[i][j] == key)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int arr[3][4];
    cout << "Enter elements in an Array: ";
    for (int i = 0; i < 3; i++) // Row Wise
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++) // Row Wise
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int key;
    cout << "Enter the key element: ";
    cin >> key;

    if (isPresent(arr, key, 3, 4))
    {
        cout << "Key found!!!";
    }
    else
    {
        cout << "Key NOT found!!!";
    }
    return 0;
}