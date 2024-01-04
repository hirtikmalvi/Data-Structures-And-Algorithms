// Love Babbar DSA: Lecture 8
#include <iostream>
using namespace std;

int FibonacciSequence(int n)
{
    int a = 0;
    int b = 1, nextInt = 0;
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    if (n >= 3)
    {
        for (int i = 3; i <= n; i++)
        {
            nextInt = a + b;
            a = b;
            b = nextInt;
        }
    }
    return nextInt;
}

int main()
{
    int n;
    cout << "Enter the nth term: ";
    cin >> n;
    cout << "The " << n << "th term is: " << FibonacciSequence(n);
}