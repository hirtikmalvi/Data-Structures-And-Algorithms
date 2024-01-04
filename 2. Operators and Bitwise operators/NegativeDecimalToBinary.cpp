//Following code is not Full code. it is inly for converting +Ve Dec to Binary and its 1s complement. 2s complement is wrong given by code.

#include <iostream>
#include <cmath>
using namespace std;

int DecToBinary(int n)
{
    int ans = 0;
    for (int i = 0; n != 0; n = n >> 1, i++)
    {
        int bit = n & 1;
        ans = (pow(10, i) * bit) + ans;
    }
    return ans;
}

int onesComplement(int n)
{
    int ans = 0;
    for (int i = 0; n != 0; n = n / 10, i++)
    {
        int bit = n % 10;
        ans += (1 - bit) * pow(10, i);
    }
    return ans;
}

int twosComplement(int n)
{
    return 
}

int main()
{
    int n, ans = 0;
    cout << "Enter the number: ";
    cin >> n;

    // Calculate the binary representation
    for (int i = 0; n != 0; n = n >> 1, i++)
    {
        int bit = n & 1;
        ans = (pow(10, i) * bit) + ans;
    }
    cout << "The Binary: " << ans << endl;

    // Calculate the 1's complement
    int onesComplement = 0;
    int position = 0;
    while (ans > 0)
    {
        int bit = ans % 10;
        onesComplement += (1 - bit) * pow(10, position);
        ans /= 10;
        position++;
    }

    cout << "The 1's complement: " << onesComplement << endl;

    // Calculate the 2's complement by adding 1 to the 1's complement
    int twosComplement = onesComplement + 1;
    cout << "The 2's complement: " << twosComplement << endl;

    return 0;
}
