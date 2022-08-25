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
// Approach-2
  int strStr(string haystack, string needle) {
        for(int i=0; i<haystack.length(); i++){
            int j=0;
            for(; haystack[i+j]==needle[j] && j<needle.length(); j++);
             if(j==needle.length()){
                 return i;
             }
            }
        return -1;
        }
