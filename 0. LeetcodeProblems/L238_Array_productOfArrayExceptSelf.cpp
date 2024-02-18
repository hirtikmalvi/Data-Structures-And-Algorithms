// Leetcode 238: Product of Array Except Self
// https://www.youtube.com/watch?v=bNvIQI2wAjk&pp=ygUccHJvZHVjdCBvZiBhcnJheSBleGNlcHQgc2VsZg%3D%3D
/*
# TC : O(n) but gives TLE

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n,1);
        int i = 0, j = 0, tempAnswer=1;
        while(i<n && j<n){

            if(i!=j){
                tempAnswer *= nums[j];
            }
            // answer[i] = tempAnswer;
            j++;
            if(j>=n){
                j = 0;
                answer[i] = tempAnswer;
                i++;
                tempAnswer = 1;
            }
        }
        return answer;
    }
};
*/

/*
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //https://www.youtube.com/watch?v=bNvIQI2wAjk&pp=ygUccHJvZHVjdCBvZiBhcnJheSBleGNlcHQgc2VsZg%3D%3D
        int n = nums.size();
        int prefixProd = 1, postfixProd = 1;
        vector<int> answer(n,1);

        for(int i=1;i<n;i++){
            prefixPro *= nums[i-1];
            answer[i] = prefixPro;
        }
        for(int i=n-1;i>=0;i--){
            answer[i] *= postfixPro;
            postfixPro *= nums[i];
        }
        return answer;
    }
};
*/