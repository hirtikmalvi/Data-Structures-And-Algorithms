#include <iostream>
using namespace std;

void numberToWord(int n, string words[])
{
    if (n == 0)
    {
        return;
    }

    int digit = n % 10;
    n = n / 10;

    numberToWord(n, words);

    cout << words[digit] << " ";
}

int main()
{
    int number;
    cin >> number;
    string words[10] = {"zero",
                        "one",
                        "two",
                        "three",
                        "four",
                        "five",
                        "six",
                        "seven",
                        "eight",
                        "nine"};

    numberToWord(number, words);
}