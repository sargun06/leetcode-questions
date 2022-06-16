class Solution {
public:
    
    void combination(int n, int k, vector<vector<int>> & ans, vector<int>& temp, int i)
    {
        if(temp.size()==k)
        {
            ans.push_back(temp);
            return;
        }
        if(i>n)
            return;
        temp.push_back(i);
        combination(n,k,ans,temp,i+1);
        temp.pop_back();
        combination(n,k,ans,temp,i+1);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> temp;
        combination(n,k,ans,temp,1);
        return ans;
    }
};