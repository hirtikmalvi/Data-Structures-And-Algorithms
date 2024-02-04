#include <iostream>
using namespace std;

void print(int n)
{
    if (n == 0)
    {
        cout << "Inside in Edge case if (n == 0)" << endl;
        return;
    }

    // cout << "Above RR at " << n << endl;

    print(n - 1);

    cout << "After RR n = " << n << endl;
}

int main()
{
    int n;
    cin >> n;
    cout << endl;
    print(n);
}