// Coding Ninja: Rat In A Maze
//  Love Babbar: L40

/*
Problem statement
You are given a starting position for a rat which is stuck in a maze at an initial point (0, 0) (the maze can be thought of as a 2-dimensional plane). The maze would be given in the form of a square matrix of order 'N' * 'N' where the cells with value 0 represent the maze’s blocked locations while value 1 is the open/available path that the rat can take to reach its destination. The rat's destination is at ('N' - 1, 'N' - 1). Your task is to find all the possible paths that the rat can take to reach from source to destination in the maze. The possible directions that it can take to move in the maze are 'U'(up) i.e. (x, y - 1) , 'D'(down) i.e. (x, y + 1) , 'L' (left) i.e. (x - 1, y), 'R' (right) i.e. (x + 1, y).

Note:
Here, sorted paths mean that the expected output should be in alphabetical order.
For Example:
Given a square matrix of size 4*4 (i.e. here 'N' = 4):
1 0 0 0
1 1 0 0
1 1 0 0
0 1 1 1
Expected Output:
DDRDRR DRDDRR
i.e. Path-1: DDRDRR and Path-2: DRDDRR

The rat can reach the destination at (3, 3) from (0, 0) by two paths, i.e. DRDDRR and DDRDRR when printed in sorted order, we get DDRDRR DRDDRR.
*/

/*
#include <bits/stdc++.h>

bool isSafe(int x, int y, vector<vector<int>>visited, vector<vector<int>>arr, int n){
    if((x >= 0 && x < n) && (y >= 0 && y < n) && (visited[x][y] == 0) && (arr[x][y] == 1) ){
        return true;
    }
    return false;
}

void solveSearchMaze(int n,vector<vector<int>>visited,vector<string>&ans,vector<vector<int>>&arr,string path,int x,int y){
    //Base Case
    if(x == n -1 && y == n - 1) {
        ans.push_back(path);
        return;
    }
    visited[x][y] = 1;

    //Choices Are: D, L, R, U

    //Down
    int newX = x + 1;
    int newY = y;

    if(isSafe(newX, newY, visited, arr, n)){
        path.push_back('D');
        solveSearchMaze(n, visited, ans, arr, path, newX, newY);
        path.pop_back();
    }

    //Left
    newX = x;
    newY = y - 1;

    if(isSafe(newX, newY, visited, arr, n)){
        path.push_back('L');
        solveSearchMaze(n, visited, ans, arr, path, newX, newY);
        path.pop_back();
    }

    //Right
    newX = x;
    newY = y + 1;

    if(isSafe(newX, newY, visited, arr, n)){
        path.push_back('R');
        solveSearchMaze(n, visited, ans, arr, path, newX, newY);
        path.pop_back();
    }

    //Up
    newX = x - 1;
    newY = y;

    if(isSafe(newX, newY, visited, arr, n)){
        path.push_back('U');
        solveSearchMaze(n, visited, ans, arr, path, newX, newY);
        path.pop_back();
    }

    visited[x][y] = 0;
}

vector <string> searchMaze(vector<vector<int>>& arr, int n) {
    vector <string> ans;

    if(arr[0][0] == 0){
        return ans;
    }

    int srcX = 0;
    int srcY = 0;

    vector<vector<int>> visited = arr;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            visited[i][j] = 0;
        }
    }

    string path = ""; //As a temp answer (path)
    solveSearchMaze(n, visited, ans, arr, path, srcX, srcY);
    sort(ans.begin(), ans.end());
    return ans;
}
*/