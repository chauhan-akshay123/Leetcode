/*
---LINK--- https://leetcode.com/problems/add-binary/
*/

    string addBinary(string a, string b) {
   string c = "";
        int carry = 0;
        while(a!="" && b!=""){
            int first = a.back() - '0';
            int second = b.back() - '0';
            a.pop_back(); 
            b.pop_back();
            int total = first + second + carry;
            carry = total/2;
            c += to_string(total%2);
        }
        
        while(a!=""){
            int first = a.back() - '0';
            a.pop_back();
            int total = first + carry;
            carry = total/2;
            c += to_string(total%2);
        }
        
        while(b!=""){
            int first = b.back() - '0';
            b.pop_back();
            int total = first + carry;
            carry = total/2;
            c += to_string(total%2);
        }
        
        if(carry) c+= to_string(carry);
        
        reverse(c.begin(), c.end());
        return c;
    }
