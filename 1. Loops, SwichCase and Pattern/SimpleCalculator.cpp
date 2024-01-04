#include <iostream>
using namespace std;

int main()
{
    float a, b;
    cout << "Enter the a and b: ";
    cin >> a >> b;

    char ch;
    cout << "Enter the operation from +, -, *, /, % : ";
    cin >> ch;

    switch (ch)
    {
    case '+':
        cout << a << "+" << b << "=" << (a + b);
        break;
    case '-':
        cout << a << "-" << b << "=" << (a - b);
        break;
    case '*':
        cout << a << "*" << b << "=" << (a * b);
        break;
    case '/':
        cout << a << "/" << b << "=" << (a / b);
        break;
    case '%':
        cout << a << "%" << b << "=" << (int(a) % int(b));
        break;
    default:
        cout << "Enter the valid operation!!!";
        break;
    }
}