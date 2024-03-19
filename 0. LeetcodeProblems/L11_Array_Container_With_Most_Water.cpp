/*
Leetcode 11: Container With Most Water

You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.

Example 1:
Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.
*/

/*
// https://youtu.be/ZHQg07n_tbg?feature=shared
class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0; //We want Area of Max Water Stored b/w two walls.
        int left = 0, right = height.size() - 1; //Two pointer to make this code TC O(n)
        while(left < right){
            // To keep the water when one wall is > second wall, we choose small small. that means upto small wall's height
            // we can store water
            //So we do min(height[left],height[right] and to find area we do min(height[left],height[right]) * (right - left).
            //After that whatever is Max we keep that.
            maxWater = max(min(height[left],height[right]) * (right - left), maxWater);

            //Suppose right wall is > left wall. Here in this problem we need Max Water. So is left wall < right wall
            //Then left wall no longer needed so we do left++ and vice verca for right--.
            if(height[left] < height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxWater;
    }
};
*/