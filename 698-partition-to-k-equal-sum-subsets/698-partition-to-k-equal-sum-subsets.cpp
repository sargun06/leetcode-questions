class Solution {
public:
    
    bool part(vector<int>& nums, int k, vector<bool>& vis, int sum, int bucksum,int idx)
    {
        if(k==0) return true;
        if(bucksum==sum)
            return part(nums,k-1,vis,sum,0,0);
        if(bucksum>sum) return false;
        for(int i=idx;i<nums.size();i++)
        {
            if(vis[i])
                continue;
            vis[i]=true;
            if(part(nums,k,vis,sum,bucksum+nums[i],i+1)) return true;
            vis[i]=false;
            if(bucksum==0) break;
            }
        return false;
    }
    
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        vector<bool> vis(nums.size(),false);
        int sum=0;
        for(auto i:nums)
        {
            sum+=i;
        }
        if (nums.size() < k || sum % k) return false;
        sort(nums.begin(), nums.end(), greater<int>());
        return part(nums,k,vis,(sum/k),0,0);
    }
};