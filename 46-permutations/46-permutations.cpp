class Solution {
public:
    vector<vector<int>> result;
    void soln(vector<int>& nums, int idx)
    {
        if(idx==nums.size())
        {
            result.push_back(nums);
            return;
        }
        for(int i=idx; i<nums.size(); i++)
        {
                swap(nums[i], nums[idx]);
                soln(nums, idx+1);
                swap(nums[i], nums[idx]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        soln(nums, 0);
        return result;
    }
};