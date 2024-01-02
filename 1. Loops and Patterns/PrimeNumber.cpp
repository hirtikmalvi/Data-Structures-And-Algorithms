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

    // We check is any table exist except 1 and itself where the number n lies it in?
    for (int i = 2; i < n; i++) //That's why loop taken 2 to n(excluded).
    {
        if (n % i == 0) // If it lies then the isPrime is made false means the n is not Prime and break.
        {
            isPrime = 0;
            break;
        }
    }
    // Here it is checked the condition to print whether prime or not.
    if (isPrime == 0)
    {
        cout << n << " is not a Prime number";
    }
    else
    {
        cout << n << " is a Prime number";
    }
}