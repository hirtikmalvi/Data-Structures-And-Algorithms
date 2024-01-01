/*
just change cout in second loop means j loop accordingly.
* * * *
_ * * *
_ _ * *
_ _ _ *

1 1 1 1
_ 2 2 2
_ _ 3 3
_ _ _ 4

1 2 3 4
_ 2 3 4
_ _ 3 4
_ _ _ 4
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
        int space = i - 1;
        while (space)
        {
            cout << "_ ";
            space--;
        }
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    /*
    1 2 3 4
    _ 2 3 4
    _ _ 3 4
    _ _ _ 4

    int n;
    cout << "Enter the n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int space = i - 1;
        int count = i;
        while (space)
        {
            cout << "_ ";
            space--;
        }
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << count++ << " ";
        }
        cout << endl;
    }*/
}