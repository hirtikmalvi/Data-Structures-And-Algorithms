/*
Leetcode Problem 283. Move Zeroes

Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
Note that you must do this in-place without making a copy of the array.

Example 1:
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]

Example 2:
Input: nums = [0]
Output: [0]
*/

/*

This problem is divided in 2 parts.
void moveZeroes(vector<int>& nums) {
        int j=0, k = nums.size()-1;

//Part1: Keeping Non-zero elements of the left part
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[j++]=nums[i];
            }
        }

//Part2: Once the Non zero elements are on at its position, we put 0 on the rest of the position. here j helps alot.
        while(j<nums.size()){
            nums[j]=0;
            j++;
        }
    }
*/