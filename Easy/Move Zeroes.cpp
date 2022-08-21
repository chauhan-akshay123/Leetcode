/*
---LINK--- https://leetcode.com/problems/move-zeroes/
*/
  void moveZeroes(vector<int>& nums) {
       for(int i=0,j=0; i<nums.size(); i++){
           if(nums[i]!=0){
              int temp = nums[i];
               nums[i]=nums[j];
               nums[j]=temp;
               j++;
           }
       }      
    }
