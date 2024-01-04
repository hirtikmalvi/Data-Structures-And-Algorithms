// Love Babbar DSA: Lecture 8 at 46:22
#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1; // Initial assumming 1 as multiplication is going to take place.
    for (int i = 1; i <= n; i++)
    {
        fact *= i; // Suppose 5! = 1 x 2 x 3 x 4 x 5  --> So, multiplying i with fact and storing it in fact itself iteratively.
    }
    return fact;
}

int nCr(int n, int r)
{
    // nCr=n!/[r!*(n-r)!]
    int numerator = factorial(n);
    int denominator = factorial(r) * factorial(n - r);
    return numerator / denominator;
}

int main()
{
    int n, r;
    cout << "Enter the n and r: ";
    cin >> n >> r;
    cout << n << "C" << r << "=" << nCr(n, r);

    return 0;
}