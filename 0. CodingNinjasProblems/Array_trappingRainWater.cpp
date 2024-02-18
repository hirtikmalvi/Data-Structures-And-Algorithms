/*
Problem statement
You have been given a long type array/list 'arr’ of size 'n’.


It represents an elevation map wherein 'arr[i]’ denotes the elevation of the 'ith' bar.


Print the total amount of rainwater that can be trapped in these elevations.



Note :
The width of each bar is the same and is equal to 1.
Example:
Input: ‘n’ = 6, ‘arr’ = [3, 0, 0, 2, 0, 4].

Output: 10
*/

/*
long long getTrappedWater(long long* arr, int n) {

    long long trappedWater = 0;
    int left = 0, right = n - 1;
    long long leftMax = 0, rightMax = 0;

    while(left<=right){ //Two Pointer Method
        //Assuming Two part in the array. we need to decide whether to go right or left.

        //Here(Only 1 Time), I am assuming that there is no right part.[Go to notes]
        //Process the following for Only Left part
        if(arr[left]<=arr[right]){
            if(arr[left]>=leftMax){
                leftMax=arr[left];
            }
            else{
                trappedWater += leftMax - arr[left];
            }
           left++;
        }

        //Right Part
        else{
            if(arr[right]>=rightMax){
                rightMax = arr[right];
            }
            else{
                trappedWater += rightMax - arr[right];
            }
            right--;
        }
    }
    return trappedWater;
}
*/