   vector<int> getConcatenation(vector<int>& nums) {
      int n = nums.size();
      vector<int> ans(n*2,0);
        for(int i=0; i<nums.size(); i++){
            ans[i]=nums[i];
            ans[i+n]=nums[i];
        }
        return ans;
    }
