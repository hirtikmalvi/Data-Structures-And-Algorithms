//Love Babbar DSA: Lecture 8
#include <iostream>
using namespace std;

int main()
{
    int amount, note100 = 0, note50 = 0, note20 = 0, note1 = 0;
    cout << "Enter the Amount: ";
    cin >> amount;

    int sum = 0;
    int temp = amount;
    if (temp >= 100)
    {
        note100 = temp / 100;
        temp = temp % 100;
    }
    if (temp >= 50)
    {
        note50 = temp / 50;
        temp = temp % 50;
    }
    if (temp >= 20)
    {
        note20 = temp / 20;
        temp = temp % 20;
    }
    if (temp >= 1)
    {
        note1 = temp / 1;
        temp = temp % 1;
    }
    cout << "Required 100 rs Notes: " << note100 << endl;
    cout << "Required 50 rs Notes: " << note50 << endl;
    cout << "Required 20 rs Notes: " << note20 << endl;
    cout << "Required 1 rs Notes: " << note1 << endl;

    return 0;
}

// #include <iostream>
// using namespace std;

// int main()
// {
//     int amount, note100 = 0, note50 = 0, note20 = 0, note1 = 0;
//     cout << "Enter the Amount: ";
//     cin >> amount;

//     int remainingAmount = amount;

//     // Calculate 100 rs notes
//     if (remainingAmount >= 100)
//     {
//         note100 = remainingAmount / 100;
//         remainingAmount %= 100;
//     }

//     // Calculate 50 rs notes
//     if (remainingAmount >= 50)
//     {
//         note50 = remainingAmount / 50;
//         remainingAmount %= 50;
//     }

//     // Calculate 20 rs notes
//     if (remainingAmount >= 20)
//     {
//         note20 = remainingAmount / 20;
//         remainingAmount %= 20;
//     }

//     // Calculate 1 rs notes
//     if (remainingAmount >= 1)
//     {
//         note1 = remainingAmount;
//     }

//     cout << "Required 100 rs Notes: " << note100 << endl;
//     cout << "Required 50 rs Notes: " << note50 << endl;
//     cout << "Required 20 rs Notes: " << note20 << endl;
//     cout << "Required 1 rs Notes: " << note1 << endl;

//     return 0;
// }