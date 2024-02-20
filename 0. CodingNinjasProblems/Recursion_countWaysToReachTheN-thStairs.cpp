// Coding Ninjas: Count Ways To Reach The N-th Stairs
//  Love Babbar: L32
//  Following code is giving TLE because the problem is based on Dynamic Programming.

/*
You are climbing a staircase. It takes n steps to reach the top.
Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

Example 1:
Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps

Example 2:
Input: n = 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step
*/

#include <iostream>
using namespace std;

int countDistinctWays(int nStairs)
{
    if (nStairs < 0)
        return 0;
    if (nStairs == 0)
        return 1;
    return countDistinctWays(nStairs - 1) + countDistinctWays(nStairs - 2);
}

int main()
{
    int n;
    cin >> n;

    int ans = countDistinctWays(n);
    cout << ans << endl;
}