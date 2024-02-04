#include <iostream>
using namespace std;

int fib(int n)
{
    /*if(n==0) //Recursion
      return 0;
    if(n==1)
      return 1;
    return fib(n-1)+fib(n-2);*/
    int a = 1;
    int b = 1;
    int newSum = 0;
    if (n == 1 || n == 2)
        return 1;
    for (int i = 3; i <= n; i++)
    {
        newSum = a + b;
        a = b;
        b = newSum;
    }
    return newSum;
}

int main()
{
    int n;
    cin >> n;

    int ans = fib(n);
    cout << ans << endl;
}
