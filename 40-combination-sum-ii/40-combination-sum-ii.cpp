class Solution {
public:
    vector<vector<int>> result;
void combsum(vector<int>& candidates, vector<int> temp, int target, int idx)
{
    if(target==0)
    {
        result.push_back(temp);
            return;
    }
    
    for(int i=idx; i<candidates.size(); i++)
    {
        if(i>idx && candidates[i]==candidates[i-1])
            continue;
        if(candidates[i]>target)
                        break;

        
            temp.push_back(candidates[i]);
            combsum(candidates, temp, target-candidates[i], i+1);
            temp.pop_back();
       
    }

}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> temp;
        sort(candidates.begin(), candidates.end());
        combsum(candidates,temp, target, 0);
        return result;
    }
};