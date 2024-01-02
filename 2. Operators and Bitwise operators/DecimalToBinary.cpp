#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, ans = 0;
    cout << "Enter the number: ";
    cin >> n;
    for (int i = 0; n != 0; n = n >> 1, i++)
    {
        int bit = n & 1;
        ans = (pow(10, i) * bit) + ans;
        // n = n >> 1;
    }
    cout << "The Binary: " << ans;
}