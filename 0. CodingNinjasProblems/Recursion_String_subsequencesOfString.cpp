// Coding Ninja: Subsequences of String (Subsets in LC 78)
// Love Babbar: Lecture 37

// Subset and Subsequences of string both are same problem(Conding Ninja)

/*
Problem: Subsequences of String

Problem statement
You are given a string 'STR' containing lowercase English letters from a to z inclusive. Your task is to find all non-empty possible subsequences of 'STR'.

A Subsequence of a string is the one which is generated by deleting 0 or more letters from the string and keeping the rest of the letters in the same order.

Example:
Input: abc
Output: a ab abc ac b bc c
All possible subsequences of abc are : “a” , “b” , “c” , “ab” , “bc” , “ac”, “abc” [Empty set is not taken here, reason: Was not asked for empty set]
*/

/*
#include <bits/stdc++.h>

//Same problem as Leetcode 78: Subsets
void subSeqSol(string str, string output, vector<string>& ans, int index){

    //base case
    if(index >= str.length()){
        if(output.length() > 0){
            ans.push_back(output);
        }
        return;
    }

    //Exclude
    subSeqSol(str, output, ans, index + 1);

    //Include
    char charStr = str[index];
    output.push_back(charStr);
    subSeqSol(str, output, ans, index + 1);
}

vector<string> subsequences(string str){

    vector<string> ans;
    string output = "";
    int index = 0;

    subSeqSol(str, output, ans, index);
    return ans;
}
*/