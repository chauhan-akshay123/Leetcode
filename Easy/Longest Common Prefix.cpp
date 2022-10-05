/*
---LINK--- https://leetcode.com/problems/longest-common-prefix/
*/

 string longestCommonPrefix(vector<string>& strs) {
         int count = 0;
        
        while(true) {        
            if (count > strs[0].size())
                return strs[0].substr(0, count);
            
            char c = strs[0][count];
            
            for (auto it = strs.begin(); it != strs.end(); it++) {
                if (count > it->size())
                    return strs[0].substr(0, count);
                    
                if ((*it)[count] != c)
                    return strs[0].substr(0, count);
            }
            
            ++count;
        }
    }
