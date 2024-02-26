// Leetcode 46:  Permutations

/*
46. Permutations

Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.

Example 1:
Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]

Example 2:
Input: nums = [0,1]
Output: [[0,1],[1,0]]

Example 3:
Input: nums = [1]
Output: [[1]]
*/

/*
class Solution {

//The Concept: Swap the element with itself and in next for loop's iteration swap the index'th element with j'th element.
//See the Love babbar notes for better clearity
void solutionPermute(vector<int> nums,vector<vector<int>>& ans, int index){
    if(index >= nums.size()){
        ans.push_back(nums);
        return;
    }

    for(int j = index; j < nums.size(); j++){
        swap(nums[index], nums[j]);
        solutionPermute(nums, ans, index + 1);
        //Backtracking
        swap(nums[index], nums[j]); //If we remove it, still it will work. because out nums vector is passes as an copy for each recursive call....
        //If nums vector was passed by reference then it is necessarily needed. otherwise it is fine.
    }
}

public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int index = 0;
        solutionPermute(nums, ans, index);
        return ans;
    }
};
*/