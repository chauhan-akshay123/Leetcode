/*
---LINK--- https://leetcode.com/problems/jewels-and-stones/
*/
    int numJewelsInStones(string jewels, string stones) {
        int count=0,n=stones.length();
        for(int i=0; i<jewels.length(); i++){
            for(int j=0; j<n; j++){
                if(jewels[i]==stones[j]){
                    count++;
                }
            }
        }
        return count;
    }
