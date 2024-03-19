/*
Problem statement
Ninja is playing with intervals. He has an array of intervals called ‘Arr’ having ‘N’ intervals.

However, he doesn’t like overlapping intervals. So you must help Ninja by merging all the overlapping intervals in ‘Arr’ and return an array of non-overlapping intervals.

Note:
Two intervals [L1, R1] and [L2, R2] such that L1 <= L2, are said to be overlapping if and only if L2 <= R1.
For example:
For ‘N’ = 4, and
‘Arr’ = {{1, 3}, {2, 4}s, {3, 5}, {6, 7}}
We can see that {1, 3} and {2, 4} overlap, so if we merge them, we get {1, 4}.
Now ‘Arr’ becomes: {{1, 4}, {3, 5}, {6, 7}}
Still, we observe that {1, 4} and {3, 5} overlap, hence we merge them into {1, 5}.
Hence, ‘Arr’ becomes {{1, 5}, {6, 7}}.
*/

/*
#include<vector>

vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &arr){
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end()); //First we sort the array
    int n = arr.size();  //Array Size

    //Here we have only TWO COLUMNS and MULTIPLE ROWS
    for(int i = 0 ; i < n ; i++){ //For loop for each pair ex: [1, 6] => arr[i][0] = 1 and arr[i][1] = 6

    // (i) If ans Array is empty....
    // (ii) OR check the condition that if the new arriving pair's arr[i][0](First Ele) > ans.back()[1](Second Ele), that means for current pair overlapping is not possible with previous pairs...
        if(ans.empty() || arr[i][0] > ans.back()[1]){
            ans.push_back(arr[i]); // then push the current pair
        }
        else{
            //Else{...} means overlapping exists, then just to do following Updation operation to existing ans array recent(last) pair's second ele.
            // take the max ele from (the last(recent) pair's second ele ans.back()[1] and current pair's second ele arr[i][1])
            ans.back()[1] = max(ans.back()[1], arr[i][1]);
        }

    }
    return ans;

}
*/