/*
https://leetcode.com/problems/matrix-diagonal-sum/
*/
 int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size(),sum=0;
        for(int i=0; i<n; i++){
            sum = sum+mat[i][i]+mat[i][n-i-1];
        }
        if(n%2!=0){
            sum=sum-mat[n/2][n/2];
        }
        return sum;
    }
