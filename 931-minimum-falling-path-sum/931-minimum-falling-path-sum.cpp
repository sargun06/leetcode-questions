class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<int> dp=matrix[0];
        vector<int>curr(n,-1);
        for(int i=1; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                int ld= INT_MAX, rd= INT_MAX;
                if(j>0)
                    ld=matrix[i][j]+dp[j-1];
                int d=matrix[i][j]+dp[j];
                if(j<n-1)
                    rd=matrix[i][j]+dp[j+1];
                curr[j]=min(ld,min(d,rd));
            }
            dp=curr;
        }
        return *min_element(dp.begin(),dp.end());
    }
};