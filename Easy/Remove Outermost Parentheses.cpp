/*
---LINK--- https://leetcode.com/problems/remove-outermost-parentheses/
*/
   string removeOuterParentheses(string s) {
        string ans;
        stack<char> st;
        for(int i=0; i<s.size(); i++){
            char sb = s[i];
            if(sb=='('){
              if(st.size()>0){
                ans.push_back(sb);  
              }
              st.push(sb);  
            }
            else{
                st.pop();
                if(st.size()>0){
                   ans.push_back(sb); 
                }
            }
        }
        return ans;
    }
