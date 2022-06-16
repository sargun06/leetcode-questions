class Solution {
public:
    
    vector<char> reverse(int l, int r, vector<char>& s)
    {
        if(l>=r)
            return s;
        char temp= s[r];
        s[r]=s[l];
        s[l]=temp;
        return reverse(l+1,r-1,s);
    }
    void reverseString(vector<char>& s) {
        s=reverse(0,s.size()-1,s);
        for(int i=0;i<s.size();i++)
        cout<<s[i];
    }
};