class Solution {
public:
    vector<vector<int>> result;
    set<vector<int>> val;
    void subset(vector<int>& nums, vector<int>& temp, int i)
    {
        if(nums.size()==i)
        {
            if(val.find(temp)== val.end())
            {
                val.insert(temp);
                result.push_back(temp);
            }
            return;
            
        }
        temp.push_back(nums[i]);
        subset(nums, temp, i+1);
        temp.pop_back();
        subset(nums, temp, i+1);

    }


    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> temp;
        sort(nums.begin(), nums.end());
        subset(nums, temp, 0);
        return result;
    }
};