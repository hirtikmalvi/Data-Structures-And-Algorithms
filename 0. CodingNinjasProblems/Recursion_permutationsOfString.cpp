// Coding Ninjas: Permutations of a String
//Same as Permutation in Array (Leetcode 46)
// Love Babbar: L39

/*
Problem statement
You are given a string 'STR' consisting of lowercase English letters. Your task is to return all permutations of the given string in lexicographically increasing order.

String A is lexicographically less than string B, if either A is a prefix of B (and A ≠ B), or there exists such i (1 <= i <= min(|A|, |B|)), that A[i] < B[i], and for any j (1 <= j < i) A[i] = B[i]. Here |A| denotes the length of the string A.

For example :
If the string is “bca”, then its permutations in lexicographically increasing order are { “abc”, “acb”, “bac”, “bca”, “cab”, “cba” }.
Note:
Given string contains unique characters.
*/

/*
#include<bits/stdc++.h>

void solGeneratePermutations(int index, vector<string>& ans, string str){
    if(index >= str.length()){
        ans.push_back(str);
        return;
    }

    for(int j=index; j < str.length(); j++){
        swap(str[index], str[j]);
        solGeneratePermutations(index + 1, ans, str);
        // swap(str[index], str[j]);
    }
}

vector<string> generatePermutations(string &str)
{
    vector<string> ans;
    // string output; //Temp answer
    int index = 0;
    solGeneratePermutations(index, ans, str);
    sort(ans.begin(), ans.end());
    return ans;
}
*/