/*
---LINK--- https://leetcode.com/problems/valid-palindrome/
*/
    bool isPalindrome(string s) {
     transform(s.begin(), s.end(), s.begin(), ::tolower);
        string str;
        for(int i=0; i<s.size(); i++){
            if(s[i]>='a' && s[i]<='z' || isdigit(s[i])){
                str+=s[i];
            }
        }
        int start=0; int e=str.size()-1;
        while(start<=e){
            if(str[start++]!=str[e--]){
                return false;
            }
        }
        return true;
    }
