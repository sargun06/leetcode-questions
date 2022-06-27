class Solution {
public:
    void combine(vector<vector<int>>& ans, int k, int n, vector<int>& temp, int idx)
    {   
        if(n<0)
            return;
        if(k==0)
        {
            if(n==0)
            {
                ans.push_back(temp);
            }
            return;
        }
        if(idx==10) return;

            temp.push_back(idx);
            combine(ans,k-1,n-idx,temp,idx+1);
            temp.pop_back();
        
        combine(ans,k,n,temp,idx+1);
    
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> temp;
        combine(ans,k,n,temp,1);
        return ans;
    }
};