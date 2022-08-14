/*
---LINK--- https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
*/
/*
Given an integer number n, return the difference between the product of its digits and the sum of its digits.
 

Example 1:

Input: n = 234
Output: 15 
Explanation: 
Product of digits = 2 * 3 * 4 = 24 
Sum of digits = 2 + 3 + 4 = 9 
Result = 24 - 9 = 15
*/

class Solution {
public:
   inline int product(int n){
        int prod=1;
        while(n>0){
            int rem=n%10;
            n=n/10;
            prod=prod*rem;
        }
        return prod;
    }
   inline int sum(int n){
          int sum=0;
         while(n>0){
             int rem=n%10;
             n=n/10;
             sum=sum+rem;
         }
       return sum;
    }
   inline int subtractProductAndSum(int n) {
          return (product(n)-sum(n));
    }
};
