/*
---LINK--- https://leetcode.com/problems/array-partition/
*/
 int arrayPairSum(vector<int>& nums) {
       int sum=0,n=nums.size();
       sort(nums.begin(),nums.end());
       for(int i=0; i<n; i=i+2){
           sum=sum+nums[i];
       } 
        return sum;
    }
