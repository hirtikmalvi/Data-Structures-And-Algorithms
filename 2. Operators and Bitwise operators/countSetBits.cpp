#include <iostream>
using namespace std;

int setBits(int n)
{
    int count = 0;
    while (n != 0)
    {
        if (n & 1)
            count++;
        n = n >> 1;
    }
    return count;
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "The number of set bits in " << n << " is: " << setBits(n);

    return 0;
}