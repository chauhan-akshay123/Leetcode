/*
---LINK--- https://leetcode.com/problems/repeated-substring-pattern/
*/
    bool repeatedSubstringPattern(string s) {
        int stringLength = s.length();
        // Testing for substrings that are larger than half the size of the original string is illogical.
        for(int divisor = 1; divisor <= s.length() / 2; divisor++)  
        {
            // Only check substrings that actually have a size to fit evenly into original string.
            // i.e. We only want a discrete number of substrings.
            if(stringLength % divisor != 0) { continue; }
            
            const char* charArr = s.c_str();
            
            // Total possible substrings.
            int totalPossibleParts = stringLength / divisor;
            int count = 1;
            // Keep going until a failed match or we counted over the total number of possible substrings.
            while(count < totalPossibleParts && (strncmp(charArr, charArr + count * divisor, divisor) == 0))
            {
                count++;
            }
            
            // A perfect match is made if we matched the same amount as the possible total we evaluated before.
            if(count == totalPossibleParts) 
            {           
                return true; 
            }   
        }
         
        // If previous loops did not return true earlier than this, no match was made.
        return false;
    }
