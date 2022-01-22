class Solution {
public:
    
    int robbery(vector<int>& dp, vector<int> nums, int i, int n)
    {
        if(i>n)
            return 0;
        if(dp[i]!=-1) return dp[i];
        int rob= nums[i]+robbery(dp,nums,i+2,n);
        int no_rob= 0+robbery(dp,nums,i+1,n);
        return dp[i]=max(rob,no_rob);       
    }
    
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return nums[0];
        vector<int> dp(nums.size(),-1);
        int ans1=robbery(dp,nums,0,n-2);
        fill(dp.begin(), dp.end(), -1);
        int ans2=robbery(dp,nums,1,n-1);
        return max(ans1,ans2);
    }
};