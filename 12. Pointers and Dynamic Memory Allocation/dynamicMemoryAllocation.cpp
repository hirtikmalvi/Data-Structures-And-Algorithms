#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    /*{ run for n=1000000 it will stop for higher n
        int arr[n]; // Will Give Runtime Error at high n
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            arr[i] = i;
            cout << "Till " << arr[i] << endl;
        }
    }*/
    // Dynamic Memory Allocation
    { // it won't stop for any value of n
        int *arr = new int[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            arr[i] = i;
            cout << "Till " << arr[i] << endl;
        }
        // delete[] arr; //To delete the array created
    }
}