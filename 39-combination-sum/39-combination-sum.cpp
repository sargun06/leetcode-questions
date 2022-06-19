class Solution {
public:
    
    void combine(vector<int>& candidates, int target, vector<vector<int>>& ans, int i, vector<int>& temp)
    {
        if(target<0)
            return;
        if(i==candidates.size())
        {
            if(target==0)
            {
                ans.push_back(temp);
            }
            return;
        }
        
        temp.push_back(candidates[i]);
        combine(candidates, target-candidates[i], ans, i,temp);
        temp.pop_back();
        combine(candidates, target, ans, i+1,temp);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        combine(candidates,target,ans,0,temp);
        return ans;
    }
};