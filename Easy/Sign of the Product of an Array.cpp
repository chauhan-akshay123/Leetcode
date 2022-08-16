/*
---LINK--- https://leetcode.com/problems/sign-of-the-product-of-an-array/
*/
 int arraySign(vector<int>& nums) {
      int cnt=0;
        for(auto i:nums){
            if(i==0) return 0;
            if(i<0) cnt++;
        }
        if(cnt%2==0) return 1;
        return -1;
    }
