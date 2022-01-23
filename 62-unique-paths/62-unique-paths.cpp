//     int dfs(vector<vector<int>>& dp, int i, int j) {
//         if(i >= size(dp)   || j >= size(dp[0]))   return 0;     // out of bounds - invalid
//         if(i == size(dp)-1 && j == size(dp[0])-1) return 1;     // reached end - valid path
//         if(dp[i][j]) return dp[i][j];                           // directly return if already calculated
//         return dp[i][j] = dfs(dp, i+1, j) + dfs(dp, i, j+1);    // store the result in dp[i][j] and then return
//     }
// };

class Solution {
public:
    
    int paths (int i, int j, vector<vector<int>>& dp)
    {
        if(i==0 && j==0)
            return 1;
        if(i<0 || j<0)
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        return dp[i][j]=paths(i,j-1,dp)+paths(i-1,j,dp);
    }
        
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return paths(m-1,n-1,dp);
    }
};