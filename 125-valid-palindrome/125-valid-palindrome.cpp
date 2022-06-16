class Solution {
public:
    
    bool isPalindrome(string s) {
        string st;
        for(int i=0;i<s.size();i++)
        {
            if(isalnum(s[i]))
                st.push_back(tolower(s[i]));
        }       
        string st2=st;
        reverse(st.begin(), st.end());

        return (st==st2);
    }
};