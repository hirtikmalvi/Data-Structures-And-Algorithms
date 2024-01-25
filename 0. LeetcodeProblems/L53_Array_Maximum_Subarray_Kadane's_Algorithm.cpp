/*
Problem: Leetcode 53. Maximum Subarray (Kadane's Algorithm)
Given an integer array nums, find the subarray with the largest sum, and return its sum.

Example 1:
Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.

Example 2:
Input: nums = [1]
Output: 1
Explanation: The subarray [1] has the largest sum 1.

Example 3:
Input: nums = [5,4,-1,7,8]
Output: 23
Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.
*/

// Uncomment for Function

/*
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int currentSum = 0, maxSum = INT_MIN;
        for (int i = 0; i < nums.size(); i++)
        {
            currentSum += nums[i];
            if (currentSum > maxSum)
            {
                maxSum = currentSum;
            }
            if (currentSum < 0)
            {
                currentSum = 0;
            }
        }
        return maxSum;
    }
};
*/

#include <bits/stdc++.h>
