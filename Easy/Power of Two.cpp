/*
---LINK--- https://leetcode.com/problems/power-of-two/
*/
// Approach-1
    bool isPowerOfTwo(int n) {
       if(n==0) return false;
       while(n%2==0) n=n/2;
       return n==1;
    }
// Approach-2
 bool isPowerOfTwo(int n) {
      if(n<1 || (n>1 && n%2==1)) return false;
      else if(n==1) return true;
      return isPowerOfTwo(n/2);
    }
