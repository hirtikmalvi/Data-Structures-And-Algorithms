// Leetcode 78: Subsets
// Love Babbar: Lecture 37

// Subset and Subsequences of string both are same problem(Conding Ninja)

// Suppose you're given a = {1,2,3}
// Then {1} is subset of {1,2,3},  {2} is subset of {1,2,3}, {2,3} is subset of {1,2,3} and same {}, {3}, {1,2}, {1,3} and {1,2,3} are also subsets of {1,2,3} | No. of subsets : 2^no.of elements = 8
// Set of all the subsets is called POWER SET. Power Set = {{},{1}{2},{3},{1,2},{1,3},{2,3},{1,2,3}}

// And we have to find that Power set.

/*
Given an integer array nums of unique elements, return all possible subsets (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.

Example 1:
Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]

Example 2:
Input: nums = [0]
Output: [[],[0]]
*/

/*
class Solution {

void subsetRecursionSol(vector<int> nums, vector<int> output, int index, vector<vector<int>>& ans){
    //base case Or we can say end point of recursion
    if(index >= nums.size()){
        ans.push_back(output); //Before returning to previous call save the temporary output to ans.
        return;
    }

    //Exclude
    subsetRecursionSol(nums, output, index + 1, ans);

    //Include
    int element = nums[index];
    output.push_back(element);
    subsetRecursionSol(nums, output, index + 1, ans);
}

public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int index = 0;
        subsetRecursionSol(nums, output, index, ans);
        return ans;
    }
};
*/