/*
---LINK--- https://leetcode.com/problems/count-integers-with-even-digit-sum/
*/
    int countEven(int num) {
       int count=0;
       for(int i=1; i<=num; i++){
           if(i<9 && i%2==0){
               count++;
           }
           else if(i>9){
               int sum=0;
               int n=i;
               while(n!=0){
                   sum=sum+n%10;
                   n=n/10;
               }
                if(sum%2==0){
                       count++;
                   }
           }
       }
        return count;
    }
