#include <iostream>
using namespace std;

int main()
{
    int n, a = 0, b = 1; // a and b are starting terms as 0 and 1.
    cout << "Enter the terms: ";
    cin >> n;

    cout << a << " ";
    cout << b << " ";
    for (int i = 3; i <= n; i++) // As first two terms are already printed we start for loop from 3 to n. such that it produces n terms.
    {
        int nextTerm = a + b; // Sum of Previous two numbers.
        cout << nextTerm << " ";
        a = b;        // Changing the a to predecessor term.
        b = nextTerm; // Changing b to successor term which is sum of previous two terms.
    }
}