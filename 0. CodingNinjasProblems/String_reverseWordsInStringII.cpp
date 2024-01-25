/*
Love Babbar: Lecture 22
Problem statement
You are given a string ‘STR’ containing space-separated words. A word is a sequence of non-space characters. Your task is to reverse the order of words in ‘STR’.

Note: Try to do it in-place without allocating extra space.

Example:
‘STR’ = “when in doubt use brute force”
The reverse order of words in ‘STR’ is: “force brute use doubt in when”.
Note:
1. ‘STR’ does not contain any leading or trailing spaces.
2. The words are always separated by a single whitespace character.
*/

// Uncomment for code.
/*
#include <bits/stdc++.h>

string reverseOrderWords(string str) {

    // string temp = "";
    int i = 0;
    // int currentIdx=i;
    int prevIdx = i;
    reverse(str.begin(), str.end());

    while(i<str.size()){
        if(str[i]!=' '){
            i++;
            // prevIdx++;
        }
        else{
            reverse(str.begin()+prevIdx,str.begin()+i);
            prevIdx=i+1;
            i++;
        }
        if(i>=str.size()){
            reverse(str.begin()+prevIdx,str.end());
        }

    }
    return str;
}
*/