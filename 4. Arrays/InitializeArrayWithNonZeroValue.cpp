#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arrayWithZero[100] = {0}; // It is easy for to initialize entire array with zero(0)
    // int arrayWithNonZero[100] = {[0 ... 99] = -1}; // To intialize entire array with Non Zero value this method used. (Designated )
    int arrayWithNonZero[100];
    fill_n(arrayWithNonZero, 100, -1);
    cout << "With Zero: " << arrayWithZero[0] << arrayWithZero[10] << arrayWithZero[27] << arrayWithZero[55] << arrayWithZero[95] << endl;
    cout << "With Non Zero: " << arrayWithNonZero[0] << arrayWithNonZero[10] << arrayWithNonZero[27] << arrayWithNonZero[55] << arrayWithNonZero[95];

    return 0;
}