/*
Leetcode 17: Letter Combinations of a Phone Number
Love Babbar: Lecture 38

Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.

A mapping of digits to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.

Example 1:
Input: digits = "23"
Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]

Example 2:
Input: digits = ""
Output: []

Example 3:
Input: digits = "2"
Output: ["a","b","c"]
*/

/*
class Solution {

void solutionletterCombinations(string digits,int index,string output,vector<string>& ans,string mapping[]){

    //Base case
    if(index >= digits.length()){ //If index goes out then save the temp output answer to main ans
        ans.push_back(output);
        return; //and return to previos function call
    }

    int indexOfMapping = digits[index] - '0'; // get the number in Integer and that will be index to the mapping string
    string mappedString = mapping[indexOfMapping]; //Get the string that is mapped with each digit. Ex. for 2 there is mapped string is "abc"

    for(int i=0;i < mappedString.length();i++){ //Take each character from that string
        output.push_back(mappedString[i]); //store it to output
        solutionletterCombinations(digits, index + 1, output, ans, mapping); //Call func. for next index
        output.pop_back(); //this removes last character stored in output before moving to next func call
        //This helps to reach the current func call to its previous call AS IT WAS.
        //This prevents from same character appearing for several times and even it was not needed in ans. Go to Love Babbar Video: L38
    }
}

public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans; //Final answer will be stored here
        if(digits.length()==0) return ans; //If digits array is empty then return empty ans.

        string output = ""; //To store temporary output
        int index = 0;
        //Mapping of digits with the characters of each digit
        string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solutionletterCombinations(digits, index, output, ans, mapping);
        return ans;
    }
};
*/