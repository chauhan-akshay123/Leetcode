/*
---LINK--- https://leetcode.com/problems/largest-odd-number-in-string/
*/
  string largestOddNumber(string num) {
        int n=num.size();
        bool flag = false;
        int index;
        for(int i=n;i>=0; i--){
            if((num[i]-'0')%2!=0){
               flag=true;
               index=i;
               break;
            }
        }
        if(flag){
        return num.substr(0,index+1);
        }
        else{
            return "";
        }
    }
