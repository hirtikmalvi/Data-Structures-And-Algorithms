#include <iostream>
using namespace std;

int main()
{
    float a = 2.3;
    int a1 = int(a);
    cout << "Integer Part: " << int(a) << endl;
    cout << "Fractional Part: " << a - a1 << endl;
}