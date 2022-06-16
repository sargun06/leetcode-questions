class Solution {
public:
    
    void subset(vector<int>& temp, vector<vector<int>>& ans, vector<int>& nums, int i)
    {
        if(i==nums.size())
        {
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        subset(temp,ans,nums,i+1);
        temp.pop_back();
        while(i+1<nums.size() && nums[i]==nums[i+1])
            i++;
        subset(temp,ans,nums,i+1);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        subset(temp,ans,nums,0);
        return ans;
    }
};