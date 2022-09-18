/*
---LINK--- 
*/
  bool isPowerOfThree(int n) {
      if (n == 1)
            return true;
        if (n <= 0 || n % 3 != 0)
            return false;
        return isPowerOfThree(double(n) / 3);
    }
