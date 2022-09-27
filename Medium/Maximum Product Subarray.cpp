/*
---LINK--- https://leetcode.com/problems/maximum-subarray/
*/

  int maxSubArray(vector<int>& nums) {
        int currSum=0,maxSum=INT_MIN;
        for(int i=0; i<nums.size(); i++){
           currSum+=nums[i];
            if(currSum>maxSum){
                maxSum=currSum;
            }
            if(currSum<0){
                currSum=0;
            }
        }
        return maxSum;
    }
