#include <iostream>
using namespace std;

int main()
{
    // There are many way to initialize the 2D Arrays

    //  int arr[2][3] = {1, 2, 3, 4, 5, 6}; //One Way
    // for (int i = 0; i < 2; i++) // Row Wise
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < 3; i++) // Column Wise
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         cout << arr[j][i] << " ";
    //     }
    //     cout << endl;
    // }

    /*
    int arr[3][4] = {{1, 11, 111, 1111}, {2, 22, 222, 2222}, {3, 33, 333, 3333}}; // Second Way
    for (int i = 0; i < 3; i++)  // Row Wise
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    */

    // Input taking and printing. we can print output as Row wise or column wise. here row wise is taken

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

    /*
    int arr[3][4];
    cout << "Enter elements in an Array: ";
    for (int i = 0; i < 4; i++) // Column Wise
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[j][i];
        }
    }

    for (int i = 0; i < 3; i++) // Column Wise
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }*/
}