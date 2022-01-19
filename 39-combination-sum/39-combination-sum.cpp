class Solution {
public:
    vector<vector<int>> result;
    void combsum(vector<int>& candidates, vector<int> temp, int target, int idx)
    {
        if(idx==candidates.size())
        {
            if(target==0)
            {
                result.push_back(temp);
            }
            return;

        }
        if(candidates[idx]<=target)
        {
            temp.push_back(candidates[idx]);
            combsum(candidates, temp, target-candidates[idx], idx);
            temp.pop_back();
        }
                    combsum(candidates, temp, target, idx+1);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        combsum(candidates,temp, target, 0);
        return result;
    }
};