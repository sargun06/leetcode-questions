class Solution {
public:
   
    int minimumTotal(vector<vector<int>>& triangle) {
        int n= triangle.size()-1;
        vector<int> dp=triangle[n];
        for(int i=n-1; i>=0; i--)
        {
            for(int j=0; j<triangle[i].size(); j++)
            {
                dp[j]=triangle[i][j]+ min(dp[j+1], dp[j]);
            }
        }
        return dp[0];
    }
};