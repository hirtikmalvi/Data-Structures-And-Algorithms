// Leetcode 1281 Difference of Product and Sum of digits of a number. n = 234 --> (2*3*4)-(2+3+4)=15

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int sum = 0, product = 1;
    for (; n != 0; n = n / 10)
    {
        sum += n % 10;
        product *= n % 10;
    }
    cout << product - sum;
}