// Love Babbar: L24
//  Coder Army:  https://youtu.be/BXocVkXthOE?t=2325
// Coding Ninjas:  Factorial Of Large Number

/*
Problem statement
Given an integer ‘N’, you are supposed to return the factorial of the given integer in the form of a string.

Input is 1 to 500. find factorial for any of 1 to 500. which produces huge number with hundreds of digits. No data type can handle it. that's why this approach is used.
*/

/*
#include <bits/stdc++.h>

void multiplyDigits(vector <int> &arr, int &size, int multiplier){

    int carry = 0;
    for(int i = 0; i<size ; i++){
        int result = multiplier * arr[i]; //Multiplying Each Digit
        result = result + carry; //Producing final result by adding carry
        arr[i] = result % 10; //Digit is placed in array
        carry = result / 10; //carry is stored if any.
    }
    while(carry > 0){ //if carry != 0(It may be produced by multiplying last digits that's why carry is there)
        arr[size] = carry % 10; ////Carry is placed in to the array
        size++;  //Size increased(No of positions)
        carry = carry / 10; //Way to make carry zero.
    }
}

string calculateFactorial(int n)
{
    string str="";
    vector <int> arr(2000, 0); //Digits of factorial is large, so taken more sized vector/array.
    arr[0] = 1; //for n = 0, because 0! = 1;
    int size = 1; //At starting only single digit is there.


    for(int i=2;i<=n;i++){
        //main logic is this function
        multiplyDigits(arr, size, i); //For each number
    }

    for(int i=size-1;i>=0;i--){
        str += to_string(arr[i]);  //Number to digit conversion + Reverse of arr array.
    }
    return str;
}
*/
