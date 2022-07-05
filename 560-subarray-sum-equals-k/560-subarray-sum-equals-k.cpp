class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans=0,sum=0;
        unordered_map<int,int> mp;
        mp[sum]=1;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            int find=sum-k;
            if(mp.find(find)!=mp.end())
            {
                ans+=mp[find];
            }
            mp[sum]++;
        }
        return ans;
    }
};