//Striver's Video : https://youtu.be/OyZFFqQtu98?list=PLgUwDviBIf0rGlzIn_7rsaR2FQ5e6ZOL9

/*
Leetcode 39. Combination Sum
Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.

The same number may be chosen from candidates an unlimited number of times. Two combinations are unique if the frequency of at least one of the chosen numbers is different.

Example 1:
Input: candidates = [2,3,6,7], target = 7
Output: [[2,2,3],[7]]
Explanation:
2 and 3 are candidates, and 2 + 2 + 3 = 7. Note that 2 can be used multiple times.
7 is a candidate, and 7 = 7.
These are the only two combinations.

Example 2:
Input: candidates = [2,3,5], target = 8
Output: [[2,2,2,2],[2,3,3],[3,5]]

Example 3:
Input: candidates = [2], target = 1
Output: []
*/

/*
class Solution
{

public:
    void solCombinationSum(vector<int> &candidates, int target, int index, vector<vector<int>> &ans, vector<int> output)
    {

        if (index >= candidates.size())
        {
            if (target == 0)
            {
                ans.push_back(output);
            }
            return;
        }

        // Exclude
        solCombinationSum(candidates, target, index + 1, ans, output); // We go with different index and do not include element

        // Include
        if (candidates[index] <= target)
        {
            output.push_back(candidates[index]);
            // Here everytime we subtract current element from target. By doing this repeatedly, we get everytime new target value, when target becomes zero then our answer is there. otherwise just return.
            solCombinationSum(candidates, target - candidates[index], index, ans, output);
            // output.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        int index = 0;
        vector<vector<int>> ans;
        vector<int> output; // Temp answer
        solCombinationSum(candidates, target, index, ans, output);
        return ans;
    }
};
*/
