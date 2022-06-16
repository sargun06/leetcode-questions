class Solution {
public:
    
    void subsets2(int l, vector<vector<int>>& ans, vector<int>& nums, vector<int> temp) 
    {
        if(l==nums.size())
        {
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[l]);
        subsets2(l+1,ans,nums,temp);
        temp.pop_back();
        subsets2(l+1,ans,nums,temp);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
            vector<vector<int>> ans;
            vector<int> temp;
        subsets2(0,ans,nums,temp);
       return ans;
    }
};