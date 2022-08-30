/*
---LINK--- https://leetcode.com/problems/add-to-array-form-of-integer/
*/

    vector<int> addToArrayForm(vector<int>& num, int k) {
        int i = num.size()-1;
int sum=0,carry=0;
        while(i>=0&&k!=0)
    {
        sum=num[i]+(k%10)+carry;
        num[i]=sum%10;
        carry=sum/10;
        k=k/10;
        i--;     
    }
    if(i>=0)
    {
        while(i>=0)
        {
        sum=num[i]+carry;
        num[i]=sum%10;
        carry=sum/10;
        i--; 
        }
        
    }
    if(k!=0)
    {
        while(k!=0)
        {
        sum=(k%10)+carry;
        num.insert(num.begin(),sum%10);
        carry=sum/10;
        k=k/10;
        }
    }
    if(carry!=0)
    {
        num.insert(num.begin(),carry);
    }
    return num;
    }
