/*
---LINK--- https://leetcode.com/problems/missing-number/
*/
  int missingNumber(vector<int>& nums) {
        int sum = 0,n=nums.size();
        for(int i=0; i<n; i++){
            sum=sum+nums[i];
        }
        int sumi = n*(n+1)/2;
        return (sumi-sum);
    }
