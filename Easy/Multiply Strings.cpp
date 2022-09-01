/*
---LINK--- https://leetcode.com/problems/multiply-strings/
*/
    string multiply(string num1, string num2) {
        string ans;
        int carry = 0, index, multiply, step = 0;
        
        for (int i = num2.size() - 1; i >= 0; i--)
        {
            index = step++;
            for (int j = num1.size() - 1; j >= 0; j--)
            {
                if (index == ans.size()) ans.push_back('0');
                
                multiply = (num1[j] - '0') * (num2[i] - '0') + carry + (ans[index] - '0');
                
                ans[index++] = (multiply % 10) + '0';
                
                carry = multiply / 10;
            }
            
            if (carry)
                ans.push_back(carry + '0'), carry /= 10;
        }
        while (ans.back() == '0' && ans.size() > 1) // avoiding leading zeros
            ans.pop_back();
        
        reverse(ans.begin(), ans.end());    
        return ans;   
    }
