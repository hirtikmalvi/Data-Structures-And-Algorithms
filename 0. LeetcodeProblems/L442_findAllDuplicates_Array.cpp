/*
442. Find All Duplicates in an Array : Leetcode
Problem statement:
Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears once or twice, return an array of all the integers that appears twice.
You must write an algorithm that runs in O(n) time and uses only constant extra space.
Example 1:

Input: nums = [4,3,2,7,8,2,3,1]
Output: [2,3]
Example 2:

Input: nums = [1,1,2]
Output: [1]
Example 3:

Input: nums = [1]
Output: []
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//Function is True. not be able to print answer in main. function working fine...
vector<int> findDuplicates(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    vector<int> ans;
    int count;
    for (int i = 0; i < nums.size() - 1;)
    {
        count = 1;
        if (nums[i] == nums[i + 1])
        {
            ans.push_back(nums[i]);
            count++;
        }
        i = i + count;
    }
    return ans;
}

int main()
{
    vector<int> arr;
    int n;
    cout << "Enter the no. of elements upto n (Duplicate must be present exactly twice): ";
    cin >> n;
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    vector<int> x = findDuplicates(arr);
    // cout << findDuplicates();
    
    return 0;
}
