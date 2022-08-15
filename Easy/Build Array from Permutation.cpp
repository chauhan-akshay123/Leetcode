/*
---LINK--- https://leetcode.com/problems/build-array-from-permutation/
*/
    vector<int> buildArray(vector<int>& nums) {
 vector<int> perm;
        for(int i=0; i<nums.size(); i++) {
            perm.push_back(nums[nums[i]]);
        }
        
        return perm;
    }
