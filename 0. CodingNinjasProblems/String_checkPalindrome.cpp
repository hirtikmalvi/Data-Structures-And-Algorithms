/*
Problem statement
Given an alphabetical string ‘S’. Determine whether it is palindrome or not. A palindrome is a string that is equal to itself upon reversing it.

For example:
‘S’ = racecar
The reverse of ‘S’ is: racecar
Since ‘S’ is equal to its reverse. So ‘S’ is a palindrome.
Hence output will be 1.
*/

#include <iostream>
using namespace std;

bool isPalindrome(char s[], int size)
{
    int start = 0, end = size - 1;

    while (start <= end)
    {
        if (s[start] != s[end])
        {
            return 0;
        }
        else
        {
            start++;
            end--;
        }
    }
    return 1;
}

int main()
{
    char str[50];
    int n;
    cout << "Enter the size and string: ";
    cin >> n >> str;

    if (isPalindrome(str, n))
    {
        cout << str << " is Palindrome...";
    }
    else
    {
        cout << str << " is NOT Palindrome...";
    }
}