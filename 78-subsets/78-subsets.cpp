class Solution {
public:
    vector<vector<int>> result;

    void subset(vector<int>& nums, vector<int>& temp, vector<vector<int>>& result, int i)
    {
        if(i==nums.size())
        {
            result.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        subset(nums, temp, result, i+1);
        temp.pop_back();
        subset(nums, temp, result, i+1);
    }   
  
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        subset(nums, temp, result, 0);
        return result;
    }
};