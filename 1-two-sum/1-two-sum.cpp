class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        int result=0, a=0;
        for(int i=0; i<nums.size(); i++)
        {
            auto ans= m.find(target-nums[i]);
            if(ans!= m.end())
            {
                result= ans->second;
                a=i;
            }
            else
                m.insert({nums[i],i});               
        }
        return {result, a};
    }
};