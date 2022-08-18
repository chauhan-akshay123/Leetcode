/*
---LINK--- https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/
*/
 vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        int max = *max_element(candies.begin(),candies.end());
        vector<bool> ans(n);
        for(int i=0; i<n; i++){
            if(candies[i]+extraCandies>=max){
                ans[i]=true;
            }
            else{
                ans[i]=false;
            }
        }
        return ans;
    }
