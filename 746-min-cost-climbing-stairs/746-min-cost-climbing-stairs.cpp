class Solution {
public:
    
    int recursion(vector<int>& cost, vector<int>& dp, int idx)
    {
        
        if(idx==0 || idx==1)
            return cost[idx];
        if(dp[idx]!=-1)
            return dp[idx];
        int left= recursion(cost, dp, idx-1)+ cost[idx];
        int right= INT_MAX;
        if(idx>1)
        {
            right= recursion(cost, dp, idx-2)+ cost[idx];
        }
        dp[idx]=min(left, right);
        return dp[idx];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int> dp(n+1, -1);
        return min(recursion(cost, dp, n-1),recursion(cost, dp, n-2));
    }
};