/*
Problem statement: Find Pair Sum.
You are given an integer array 'ARR' of size 'N' and an integer 'S'. Your task is to return the list of all pairs of elements such that each sum of elements of each pair equals 'S'.

Note:
Explain
Each pair should be sorted i.e the first value should be less than or equals to the second value. 

Return the list of pairs sorted in non-decreasing order of their first value. In case if two pairs have the same first value, the pair with a smaller second value should come first.
*/

/* //Uncomment for the function.
#include <bits/stdc++.h>
vector<vector<int>> pairSum(vector<int> &arr, int s){

   vector<vector<int>> ans; //To return the required answer...

   sort(arr.begin(),arr.end()); //Using this it won't require sorting list at the end while returning ans.

   //Here I am using single loop with variable i and j.
   int i = 0;
   int j = i + 1;

   while(i<(arr.size()-1)&&j<arr.size()){

      //Checking whether the sum of pair element equals to S or not. if yes then push to the ans.
      if(arr[i]+arr[j]==s){
         vector<int> temp;
         temp.push_back(arr[i]);
         temp.push_back(arr[j]);
         // temp.push_back(max(arr[i],arr[j]));
         // temp.push_back(max(arr[i],arr[j]));
         ans.push_back(temp);
         j++;
      }
      else{
         j++; //This helps to go to end of the Array when there are duplicates pairs present.
      }
      //If j goes beyond size of array, it initializes i with next element means to index 1 if it was on 0th index
      //And j initialized as next element of i. means j = i + 1;
      if(j>=arr.size()){
         i++;
         j=i+1;
      }
   }
   // sort(ans.begin(),ans.end()); // Since array is sorted at staring this won't require.

   return ans; //Final answer...
}
*/