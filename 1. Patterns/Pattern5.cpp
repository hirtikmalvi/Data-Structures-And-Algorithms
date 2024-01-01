/*
1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1
*/
// Divided above pattern in two part which same as done many patterns before (pattern 2 or 3 or 4). There was space instead of *.
// So replaced space with * and done as it is.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the n: ";
    cin >> n;
    int count = n;

    for (int i = 1; i <= n; i++)
    {
        // First Part
        {
            for (int j = 1; j <= n - i + 1; j++)
            {
                cout << j << " ";
            }
            int space1 = i - 1;
            while (space1)
            {
                cout << "* ";
                space1--;
            }
        }
        // Second Part
        {
            int space2 = i - 1;
            while (space2)
            {
                cout << "* ";
                space2--;
            }
            for (int k = 1; k <= n - i + 1; k++)
            {
                cout << count-- << " ";
            }
            count = n - i;
        }
        cout << endl;
    }
}