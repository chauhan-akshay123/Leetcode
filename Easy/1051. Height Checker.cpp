/*
---LINK--- https://leetcode.com/problems/height-checker/
*/

    int heightChecker(vector<int>& heights) {
        int n=heights.size(),count=0;
        vector<int> aux(n);
        for(int i=0; i<n; i++){
            aux[i]=heights[i];
        }
        sort(aux.begin(),aux.end());
        for(int j=0; j<n; j++){
            if(aux[j]!=heights[j]){
                count++;
            }
        }
        return count;
    }
