/*
---LINK--- https://leetcode.com/problems/final-value-of-variable-after-performing-operations/
*/

    int finalValueAfterOperations(vector<string>& operations) {
          int x=0;
        for(int i=0;i<operations.size();i++)
        {
            if(operations[i][1]=='-')
            {
                x=x-1;
            }
            else
            {
                x=x+1;
            }
        }
        return x;
    }
