/*
---LINK---https://leetcode.com/problems/single-number/
*/
   int singleNumber(vector<int>& nums) {
    unordered_map<int,int> m;
        int ans;
        for(int i=0; i<nums.size(); i++){
           m[nums[i]]++;
           
    }     
    for(auto x : m){
        if(x.second==1){
           ans=x.first;
            break;
        }
    }
     return ans;   
    }
