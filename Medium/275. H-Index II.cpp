/*
---LINK--- https://leetcode.com/problems/h-index-ii/
*/
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        int index=0;
        while(index<n && n-index > citations[index]){
            index++;
        }
        return n-index;
    }
