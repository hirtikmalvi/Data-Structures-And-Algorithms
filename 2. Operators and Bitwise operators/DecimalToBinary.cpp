#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, ans = 0;
    cout << "Enter the number: ";
    cin >> n;
    // just combined while loop's conidtion and i together. can be separated as while(n!=0) and i inside while.
    for (int i = 0; n != 0; n = n >> 1, i++)
    {
        int bit = n & 1;
        ans = (pow(10, i) * bit) + ans;
    }
    cout << "The Binary: " << ans;
}