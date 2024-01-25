#include <iostream>
using namespace std;

int getLength(char str[])
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char str[50];
    cout << "Enter the string: ";
    cin >> str;

    cout << "The length of the string is: " << getLength(str);
}