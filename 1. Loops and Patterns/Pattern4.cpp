/*
_ _ _ 1
_ _ 1 2 1
_ 1 2 3 1 2
1 2 3 4 1 2 3

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
        // Space Block
        {
            int space = n - i;
            while (space)
            {
                cout << "  ";
                space--;
            }
        }
        // Middle Pattern
        {
            for (int j = 1; j <= i; j++)
            {
                cout << j << " ";
            }
        }
        // Last Pattern which starts from i - 1.
        {
            int start = i - 1;
            while (start)
            {
                cout << start-- << " ";
            }
        }
        cout << endl;
    }

    
}