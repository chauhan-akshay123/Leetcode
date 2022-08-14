/*
---LINK--- https://leetcode.com/problems/number-of-1-bits/
*/
/*

Write a function that takes an unsigned integer and returns the number of '1' bits it has (also known as the Hamming weight).

Example 1:

Input: n = 00000000000000000000000000001011
Output: 3
Explanation: The input binary string 00000000000000000000000000001011 has a total of three '1' bits.

Example 2:

Input: n = 00000000000000000000000010000000
Output: 1
Explanation: The input binary string 00000000000000000000000010000000 has a total of one '1' bit.

*/

class Solution {
public:
    int hammingWeight(uint32_t n) {
      int count=0;
        for(int i=0; i<32;i++){
            if((n&(1<<i))!=0){
                count++;
            }
        }
        return count;
    }
};
