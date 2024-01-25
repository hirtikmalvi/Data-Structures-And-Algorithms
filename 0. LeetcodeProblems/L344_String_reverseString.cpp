#include <iostream>
using namespace std;

void reverseString(char str[], int n)
{
    int start = 0, end = n - 1;
    while (start < end)
    {
        swap(str[start++], str[end--]);
    }
}

int main()
{
    char str[50];
    int n;
    cout << "Enter the size and string: ";
    cin >> n >> str;

    reverseString(str, n);
    for (int i = 0; i < n; i++)
    {
        cout << str[i] << " ";
    }
}