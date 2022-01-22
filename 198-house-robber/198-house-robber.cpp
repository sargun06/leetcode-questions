class Solution {
public:
    
    int robbery(vector<int>& nums, int i, vector<int>& dp)
    {
        if(i>=nums.size()) return 0;
        if(dp[i]!=-1) return dp[i];
        int chori= nums[i]+robbery(nums, i+2, dp);
        int not_chori= 0+robbery(nums, i+1, dp);
        return dp[i]=max(chori,not_chori); 
    }
        
    int rob(vector<int>& nums) 
    {
        vector<int> dp(nums.size()+1,-1);
        int k= robbery(nums,0,dp);
        return k;
    }
};