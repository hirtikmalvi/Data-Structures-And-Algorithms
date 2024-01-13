// Binary Search

#include <iostream>
#include <algorithm>
using namespace std;

// To get the Integer part of Square Root of the number!
int sqrtIntegerPart(int x)
{
    // Code is same as Binary Search
    int start = 0, end = x;
    long long int sqrt = -1;
    long int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (mid * mid == x)
        {
            return mid;
        }
        else if (mid * mid > x)
        {
            end = mid - 1;
        }
        else
        {
            sqrt = mid;
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
        // sqrt = mid;
    }
    return sqrt;
}

// To get the remaining part(Float Part) of the number!
double sqrtWithMorePrecision(int n, int precesion, int sqrtInt)
{
    double factor = 1;
    double ans = sqrtInt;
    // Precision means how many digits you want after the decimal point.
    for (int i = 0; i < precesion; i++)
    {
        factor = factor / 10; // Every time it gets 0.1, 0.01, 0.001 ....
        // adding factor to the ans after increasing it.
        for (double j = ans; j * j < n; j += factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int arr[100], n, key;
    cout << "Enter the number: ";
    cin >> n;

    int sqrtInt = sqrtIntegerPart(n);
    cout << "Integer part Square root of " << n << " is: " << sqrtInt << endl;
    cout << "Square root of " << n << " is: " << sqrtWithMorePrecision(n, 5, sqrtInt);

    return 0;
}
