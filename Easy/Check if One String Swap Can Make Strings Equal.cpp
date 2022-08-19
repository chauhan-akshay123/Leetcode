/*
---LINK--- https://leetcode.com/problems/check-if-one-string-swap-can-make-strings-equal/
*/
    bool areAlmostEqual(string s1, string s2) {
         if(s1==s2) return true;
        int i=0,j=0;
        for(i=0;i<s1.length();i++)
        {
            if(s1[i]!=s2[i])
            {
                break;
            }
        }
        for(j=s1.length()-1;j>=0;j--)
        {
            if(s1[j]!=s2[j])
            {
                break;
            }
        }
        swap(s1[i],s1[j]);
        return s1==s2;
    }
