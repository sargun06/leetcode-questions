class Solution {
public:
    
    void perm(vector<vector<int>>& ans, vector<int>& nums, int i)
    {
        if(i==nums.size())
        {
            ans.push_back(nums);
            return;
        }
        unordered_set<int> m;
        for(int j=i;j<nums.size();j++)
        {
            if(m.find(nums[j])!=m.end())
                continue;
            m.insert(nums[j]);
            swap(nums[i],nums[j]);
            perm(ans,nums,i+1);
            swap(nums[i],nums[j]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        perm(ans,nums,0);
        return ans;
    }
};