#include <iostream>
using namespace std;

int main()
{
    int n = 2;
    switch (n)
    {
    case 1:
        cout << "1st case";
        // break;
    case 2:
        cout << "2nd case";
        // continue;
    case 3:
        cout << "3rd case";
        break;
    default:
        cout << "Default case: ";
        break;
    }
}