//Love Babbar DSA: Lecture 8 at 33:00
#include <iostream>
using namespace std;

float pow(float a, float b)
{
    float ans = 1.0;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}

// float pow(float a, float b)
// {
//     float sum = 0;
//     int a1 = int(a);
//     sum = powerInteger(int(a), b) + (2 * int(a) * (a - int(a))) + powerInteger((a - int(a)), b);
//     return sum;
// }

int main()
{
    float b, a;
    cout << "Enter the base(a) and exponent(b) a^b: ";
    cin >> a >> b;
    cout << a << "^" << b << "=" << pow(a, b);
    // if ()
    // {
    // }
    return 0;
}