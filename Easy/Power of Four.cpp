/*
---LINK--- https://leetcode.com/problems/power-of-four/
*/
  bool isPowerOfFour(int n) {
        double a=n;
        while(a>4){
            a=a/4;
        }
        if(a==4 || a==1){
            return true;
        }
        return false;
    }
