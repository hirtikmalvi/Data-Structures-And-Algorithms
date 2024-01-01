// LoveBabbar DSA: Video 5 at 39:46
// https://youtu.be/yjdQHb2elqI?list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA&t=2676

#include <iostream>
using namespace std;

int main()
{
    int n;
    bool isPrime = 1;
    cout << "Enter the number: ";
    cin >> n;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    if (isPrime == 0)
    {
        cout << n << " is not a Prime number";
    }
    else
    {
        cout << n << " is a Prime number";
    }
}