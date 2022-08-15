/*
---LINK--- https://leetcode.com/problems/running-sum-of-1d-array/
*/
 vector<int> runningSum(vector<int>& nums) {
           int sum = 0;
        vector<int> sums;     
        for(int i = 0; i < nums.size(); i++) {
           sum = sum + nums[i];
            sums.push_back(sum);
        }
        return sums;
    }
