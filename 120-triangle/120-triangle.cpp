class Solution {
public:
    int cal(int i, int j, vector<vector<int>>& triangle, vector<vector<int>>& dp, int n)
    {
        if(i==n)
            return triangle[i][j];
        if(dp[i][j]!=-1)
            return dp[i][j];
        int d= triangle[i][j]+ cal(i+1,j,triangle,dp,n);
        int dg= triangle[i][j]+ cal(i+1,j+1,triangle,dp,n);
        return dp[i][j]=min(d,dg);
    }
    
    int minimumTotal(vector<vector<int>>& triangle) {
        int n= triangle.size()-1;
        vector<vector<int>> dp(n,vector<int> (n,-1));
        return cal(0,0,triangle,dp,n);
    }
};