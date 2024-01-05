// Leetcode 1009
/*The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.
For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
Given an integer n, return its complement.
Given n=5 --> In Binary 101  ===>>> 1's Complement = 010 which is 2 and that is our ans.
*/

#include <iostream>
using namespace std;

int bitwiseComplement(int n)
{
    //~n will convert all the bits 0 -> 1 and 1 -> 0. but we need only necessary bits to be inverted.
    // So getting this mask will help.
    if (n == 0)
    {
        return 1;
    }
    int m = n, mask = 0;
    while (m != 0)
    {
        mask = (mask << 1) | 1; // everytime adding bit 1 from right side doing logical or | operation. making mask exact the number of    last set bit found on n from right to left.
        m = m >> 1;             // To get the last 1 in the m(n) to get exact the shift number of set bits.
    }
    return (~n) & mask; // This will perform as 111...010 & 000...111 --> 000...010
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << "1's complement: " << bitwiseComplement(n);
    return 0;
}