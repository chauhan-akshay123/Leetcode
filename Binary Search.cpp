/*
---LINK--- https://leetcode.com/problems/binary-search/
*/
int search(vector<int>& nums, int target) {
        int i=0,j=nums.size()-1;
        while(i<=j){
            int mid=(i+j)/2;
            if(nums[mid]<target){
               i=mid+1; 
            }
            else if(nums[mid]>target){
                j=mid-1;
            }
            else{
                return mid;
            }
        }
        return -1;
        
    }
