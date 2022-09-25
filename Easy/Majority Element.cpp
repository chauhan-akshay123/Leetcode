/*
---LINK--- https://leetcode.com/problems/majority-element/
*/
  int majorityElement(vector<int>& nums) {
        map<int,int> m;
        int n=nums.size(),ans=0;
        for(int i=0; i<n; i++){
           m[nums[i]]++;
           if(m[nums[i]]>n/2){
              ans=nums[i];
              break;
           } 
        }     
        return ans;
    }
