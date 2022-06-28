class Solution {
public:
    void part(string s, vector<string>& path, vector<vector<string>>& ans, int idx)
    {
        if(idx==s.size())
        {
            ans.push_back(path);
            return;
        }
        for(int i=idx; i<s.size(); i++)
        {
            if(isPalin(s,idx,i))
            {
                path.push_back(s.substr(idx,i-idx+1));
                part(s,path,ans,i+1);
                path.pop_back();
            }
        }
    }
    bool isPalin(string s, int start, int end)
    {
        while(start<=end)
        {
            if(s[start++]!=s[end--])
               return false;
        }
        return true;
    }
                              
    vector<vector<string>> partition(string s) {
        vector<string> path;
        vector<vector<string>> ans;
        part(s,path,ans,0);
        return ans;
    }
};