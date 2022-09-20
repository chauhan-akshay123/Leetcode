/*
---LINK--- https://leetcode.com/problems/subarray-sum-equals-k/
*/
   int subarraySum(vector<int>& nums, int k) {
     unordered_map<int,int> m;
     int n=nums.size();   
     int count=0;
     int sum=0;
     for(int i=0; i<n; i++){
         sum=sum+nums[i];
         if(sum==k){
             count++;
         }
         if(m.find(sum-k)!=m.end()){
            count=m[sum-k]+count;
         }
         if(m.find(sum)!=m.end()){
           m[sum]++;
         }
         else{
             m[sum]=1;
         }
     }   
        return count;
    }
