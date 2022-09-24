/*
---LINK--- https://leetcode.com/problems/two-sum/
*/
   int n=nums.size(),sum=0;
        vector<int> ans;
        for(int i=0; i<n; i++){
           for(int j=i+1; j<n; j++){
               sum=nums[i]+nums[j];
               if(sum==target){
                 ans.push_back(i);
                 ans.push_back(j);  
               }
           }
        }
        return ans;
    }
