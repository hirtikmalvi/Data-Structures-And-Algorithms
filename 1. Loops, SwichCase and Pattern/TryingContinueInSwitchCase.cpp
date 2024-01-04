#include <iostream>
using namespace std;

int main()
{
    int i = 2;
    switch (i)
    {
    case 1:
        cout << "This is case 1";
        break;

    case 2:
        cout << "This is case 2 with Continue keyword...";
        // continue; //Continue keyword only used in Loop. Since Switch case is conditional that's why.

    default:
        cout << "This is default case...";
        break;
    }
}