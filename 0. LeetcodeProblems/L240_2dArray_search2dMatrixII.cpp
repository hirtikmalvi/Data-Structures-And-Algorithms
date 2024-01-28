// Love Babbar: L23
//  Leetcode 240: Search a 2D Matrix II (Kind of Binary Search type problem)

/*
Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom.
*/

//Code with explanation
//Uncomment for code
/*
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size(); //No of Rows
        int col = matrix[0].size(); //No of Columns
        int rowIndex = 0, colIndex = col - 1; //Assume it like i and j

        while(rowIndex < row && colIndex >= 0){ //
            int element = matrix[rowIndex][colIndex];  //Current Element

            if(element == target){ //If equal then return 1 means found...
                return 1;
            }
            else if(element < target){ //Agar current element < target, to current row me target exist hi nahi karega, may be wo next row me ho
                    rowIndex++; //That's why rowIndex++, to move to next row
            }
            else{ //Agar element > target, to current column me target exist nahi karega, may be wo previous column me ho..
                colIndex--; //That's why colIndex--, to move previous column
            }
        }

        return 0; //Agar itna sab karke bhi target na mile to return 0 means false
    }
};
*/