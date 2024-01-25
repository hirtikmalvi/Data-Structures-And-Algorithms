//Love Babbar: Lecture 22
//GeeksForGeeks Problem: Maximum Occuring Character

/*
Given a string str of lowercase alphabets. The task is to find the maximum occurring character in the string str. If more than one character occurs the maximum number of time then print the lexicographically smaller character.

Example 1:

Input: str = testsample
Output: e
Explanation: e is the character which is having the highest frequency.
*/ 


//Uncomment for function
/*

class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        int count[26]={0};
        for(int i=0;i<str.length();i++){
            count[str[i]-'a']++;
        }

        int max = -1, maxIndex = 0;
        for(int i=0;i<26;i++){
            if(count[i]>max){
                max = count[i];
                maxIndex = i;
            }
        }
        return maxIndex + 'a';
    }

};

*/