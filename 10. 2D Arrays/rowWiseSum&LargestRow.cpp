#include <iostream>
using namespace std;

void rowWiseSum(int arr[][3], int row, int col)
{

    int max = INT_MIN, maxRowindex = -1;
    cout << "Row Wise Sum: ";
    for (int i = 0; i < row; i++) // Row Wise
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        if (sum > max)
        {
            max = sum;
            maxRowindex++;
        }
        cout << sum << " ";
    }
    cout << "\nThe Largest Row is " << maxRowindex + 1;
}

int main()
{
    int arr[3][3];
    cout << "Enter elements in an Array: ";
    for (int i = 0; i < 3; i++) // Row Wise
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++) // Row Wise
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    rowWiseSum(arr, 3, 3);
}