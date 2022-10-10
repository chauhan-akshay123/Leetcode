/*
---LINK---  https://leetcode.com/problems/h-index/
*/
 int hIndex(vector<int>& citations) {
    int n = citations.size();
    sort(citations.begin(),citations.end());    
    int index = 0;
    while(index<n && n-index > citations[index]){
        index++;
    }
    return n-index;    
    }
