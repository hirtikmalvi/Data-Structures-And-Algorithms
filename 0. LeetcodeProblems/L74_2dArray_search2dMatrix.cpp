// Love Babbar: L74
// Leetcode 74: Search a 2D Matrix (//Kind of Binary search type problem)

/*
You are given an m x n integer matrix matrix with the following two properties:

Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target, return true if target is in matrix or false otherwise.

You must write a solution in O(log(m * n)) time complexity.
*/

/*
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        //Kind of Binary search type problem

        int row = matrix.size(); //No of ros
        int col = matrix[0].size(); //No of Columns
        int start = 0, end = row*col -1; //start and end
        int mid = start + (end - start)/2; //Mid

        while(start<=end){
            //The problem solved on the basis of BS in Linear array, but the problem is actually in 2D array, so we get row and col by dividing mid with col and modulo with col respectively.
            int element = matrix[mid/col][mid%col];

            if(element == target) //Element found
                return 1;
            else if(element < target){ //If mid wala element < target, then mid ke pichhe wale saare element < target, that's why we do start = mid + 1;
                start = mid + 1; //If mid wala element > target, then mid ke aage wale saare element > target, that's why we do end = mid - 1;
            }
            else{
                end = mid - 1;
            }
            mid = start + (end - start)/2; //Updating mid
        }
        return 0; //If itna sab karke bhi element na mile to return 0 means false, element not found!!!
    }
};
*/