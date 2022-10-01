class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
     int n = nums.size();
        vector<int> res;
        int pos = 0,neg = 0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                if(nums[pos]>0)
                    res.push_back(nums[pos++]);
                else{
                    while(nums[pos]<0) pos++;
                    res.push_back(nums[pos++]);
                }
            }
            else{
                if(nums[neg]<0)
                    res.push_back(nums[neg++]);
                else{
                    while(nums[neg]>0) neg++;
                    res.push_back(nums[neg++]);
                }
            }
        }
        return res;
    }
};
