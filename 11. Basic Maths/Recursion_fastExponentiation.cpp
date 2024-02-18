// Love Babbar: L24
// Coding Ninjas Problem:  Modular Exponentiation

//--> Love Babbar's approach has less steps than Striver but striver has explained very well with quite more steps. At the end both have used same logic just implementation is different.
// LB: https://youtu.be/KdePjukNs98?list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA&t=2358
// Striver: https://youtu.be/l0YC3876qxg?feature=shared

/*
Problem statement
You are given a three integers 'X', 'N', and 'M'. Your task is to find ('X' ^ 'N') % 'M'. A ^ B is defined as A raised to power B and A % C is the remainder when A is divided by C.
*/

// Following code is as per Love Babbar
/*
#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {
    int res = 1;

    while(n>0){

        if(n&1){
            res = (1LL * res * (x%m))%m;
        }
        x = (1LL * (x%m) * (x%m))%m;
        n = n >> 1;
    }
    return res;
}
*/

#include <iostream>
using namespace std;

// It is simpe code for getting a^b with TC = log(n). Using Recursion
int modularExponentiation(int a, int b)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a;
    int ans = modularExponentiation(a, b / 2);

    if (b % 2 == 0)
    {
        return ans * ans;
    }
    else
    {
        return a * ans * ans;
    }
}

int main()
{
    int a, b; // a^b
    cout << "Enter a and b: ";
    cin >> a >> b;

    cout << a << "^" << b << " = " << modularExponentiation(a, b);
}