/* Print following pattern [Love Babbar DSA Video.4 at TimeStamp:51:45]
https://youtu.be/dr-pLeJBr38?list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA&t=3105
 * * * *
 * * *
 * *
 *
 */

// Here, for Rows we have i and for columns we have j. So, Rows = i and Cols(Columns) = j.
// In Any Pattern Solving Problem just try to relate j(columns) with the number of i(rows).
// In above problem, we have n = 4, i(rows) = 4 and j(columns) = 4. So we made a formula based on n and i(rows) which is n-i+1.
// For i = 1, First Row, we have to print 4 times * which is equal to n. this gives start to loop.
// As we move further in 2nd row, i = 2, * decreases by one. So to move further the above formula hepls.
// Steps almosyt remains same for other problems also just need to identify the pattern of solving pattern(Problem).

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}