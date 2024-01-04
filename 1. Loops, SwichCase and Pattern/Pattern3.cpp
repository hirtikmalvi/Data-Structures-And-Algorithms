/*
_ _ _ 1
_ _ 2 2
_ 3 3 3
4 4 4 4

_ _ _ 1
_ _ 2 3
_ 4 5 6
7 8 9 10
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int space = n - i;
        while (space)
        {
            cout << "_ ";
            space--;
        }
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    /*
    _ _ _ 1
    _ _ 2 3
    _ 4 5 6
    7 8 9 10

    int n;
    cout << "Enter the n: ";
    cin >> n;
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        int space = n - i;
        while (space)
        {
            cout << "_ ";
            space--;
        }
        for (int j = 1; j <= i; j++)
        {
            cout << count++ << " ";
        }
        cout << endl;
    }*/
}