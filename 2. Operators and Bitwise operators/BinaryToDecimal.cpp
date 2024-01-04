#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, ans = 0;
    // Taking Binary number as decimal. It is we know that we are entering binary but system considers it as Decimal.
    // So Process performed with kept in mind that it is Binary number but actually it is Decimal.
    cout << "Enter the Binary: ";
    cin >> n;
    for (int i = 0; n != 0; n = n / 10, i++) // Since it is decimal we're using n / 10.
    {
        int digit = n % 10;
        if (digit == 1) // where ever 1 detected get the power of 2 accordingly and add it to the sum.
        {
            ans = ans + pow(2, i);
        }
    }
    cout << "The Decimal: " << ans;
}