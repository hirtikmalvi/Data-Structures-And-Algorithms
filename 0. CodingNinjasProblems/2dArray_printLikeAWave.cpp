// Love Babbar: Lecture 23
// Coding Ninjas Problem:  Print Like A Wave

/*
Problem statement
For a given two-dimensional integer array/list ‘ARR’ of size (N x M), print the ‘ARR’ in a sine wave order, i.e., print the first column top to bottom, next column bottom to top, and so on.

For eg:-
The sine wave for the matrix:-
1 2
3 4
will be [1, 3, 4, 2].
*/

// Uncomment for code

/*
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> answer;

    for(int col=0;col<mCols;col++){  //Mujhe Saare columns ke according row ke elements ko traverse karna hai
        if(col&1){ //For Odd Column --> Bottom Up Row traverse
            for(int row=nRows-1;row>=0;row--){
                answer.push_back(arr[row][col]);
            }
        }
        else{ //For 0 and Even Column --> Up Down Row Traverse
            for(int row=0;row<nRows;row++){
                answer.push_back(arr[row][col]);
            }
        }
    }
    return answer;
}
*/