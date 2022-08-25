/*
---LINK--- https://leetcode.com/problems/implement-strstr/
*/
// Approach-1
 int strStr(string haystack, string needle) {
        // using inbuilt function in STL
        if(needle==""){
            return 0;
        }
        int found = haystack.find(needle);
        if(found!=string::npos){
            return found;
        }
        return -1;
    }
