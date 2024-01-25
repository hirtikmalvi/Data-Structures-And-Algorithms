/*
Problem statement
Ninja has been given two sorted integer arrays/lists ‘ARR1’ and ‘ARR2’ of size ‘M’ and ‘N’. Ninja has to merge these sorted arrays/lists into ‘ARR1’ as one sorted array. You may have to assume that ‘ARR1’ has a size equal to ‘M’ + ‘N’ such that ‘ARR1’ has enough space to add all the elements of ‘ARR2’ in ‘ARR1’.

For example:

‘ARR1’ = [3 6 9 0 0]
‘ARR2’ = [4 10]
After merging the ‘ARR1’ and ‘ARR2’ in ‘ARR1’.
‘ARR1’ = [3 4 6 9 10]
*/

// Uncomment for the code...

// 1. Simple Way
/*

// This approch has 2 parts. 
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
    vector<int> temp;
    int i = 0, j = 0;
    // vector<int> temp;

    //Part1: This loop works till the array size which is smaller. and the we take a temp vector to store sorted array as ans.
    while(i<m&&j<n){
        if(arr1[i]<arr2[j]){
            temp.push_back(arr1[i]);
            i++;
        }
        else{
            temp.push_back(arr2[j]);
            j++;
        }
    }

    //Part2: If 1st array had size > arr2 then this loop will store array elements as it is, as the array was sorted
    while(i<m){
        temp.push_back(arr1[i]);
        i++;
    }

    //Part2: Else 2nd array had size > arr1 then this loop will store array elements as it is, as the array was sorted
    while(j<n){
        temp.push_back(arr2[j]);
        j++;
    }
    arr1=temp; //Copying ans to arr1
    return arr1;
}
*/

// 2. Optimised Way
/*

//Approach 2

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    //As both the array are sorted so this approach only works till the j >= 0. because rest of the elements will be sorted already since the array is sorted.
    //Logic is same in both the approach

    while (j >= 0) {
        if (i >= 0 && arr1[i] > arr2[j]) {
            arr1[k--] = arr1[i--];
        } else {
            arr1[k--] = arr2[j--];
        }
    }
    return arr1;
}
*/