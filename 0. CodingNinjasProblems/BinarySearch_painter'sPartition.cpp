// Coding Ninjas Problem: Painter's Partition Problem (Exactly same as Book Allocation Problem)
/*
Problem statement
Given an array/list of length ‘n’, where the array/list represents the boards and each element of the given array/list represents the length of each board. Some ‘k’ numbers of painters are available to paint these boards. Consider that each unit of a board takes 1 unit of time to paint.

You are supposed to return the area of the minimum time to get this job done of painting all the ‘n’ boards under a constraint that any painter will only paint the continuous sections of boards.

Example :
Input: arr = [2, 1, 5, 6, 2, 3], k = 2
Output: 11

Explanation:
First painter can paint boards 1 to 3 in 8 units of time and the second painter can paint boards 4-6 in 11 units of time. Thus both painters will paint all the boards in max(8,11) = 11 units of time. It can be shown that all the boards can't be painted in less than 11 units of time.
*/

/*
bool isPossible(vector<int> arr, int k, int n, int mid){
    int painterCount = 1;
    int timeSum = 0;

    for(int i=0;i<n;i++){
        if(timeSum+arr[i]<=mid){
            timeSum+=arr[i];
        }
        else{
            painterCount++;

            if(painterCount>k||arr[i]>mid)
                return false;

            timeSum=arr[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    int start = 0, sum = 0, n=boards.size();
    // int end =accumulate(boards.begin(),boards.end(),0);
    for(int i=0;i<n;i++){
        sum+=boards[i];
    }
    int end = sum;
    int mid = start + (end-start)/2;
    int ans = -1;

    // if(k>n){
    //     return -1;
    // }
    while(start<=end){
        if(isPossible(boards,k,n,mid)){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}
*/