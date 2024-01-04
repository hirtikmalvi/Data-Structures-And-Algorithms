// Love Babbar DSA: Lecture 8
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
    int a, b;
    cout << "Enter the numbers a and b: ";
    cin >> a >> b;
    cout << "The number of set bits in " << a << " is: " << setBits(a) << endl;
    cout << "The number of set bits in " << b << " is: " << setBits(b) << endl;
    cout << "Total set bits: " << setBits(a) + setBits(b);

    return 0;
}