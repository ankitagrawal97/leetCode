class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        //for fast io operation
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        int rows = grid.size();
        if(rows==0)
            return 0;
        int cols = grid[0].size();
        vector<vector<int>> dp(rows,vector<int>(cols,0));
        int i,j;
        //first element of the dp table is same as that of the grid
        dp[0][0] = grid[0][0];  
        //filling the first row
        for(i=1;i<cols;++i)
            dp[0][i] = dp[0][i-1] + grid[0][i];
        
        //filling the first column
        for(i=1;i<rows;++i)
            dp[i][0] = dp[i-1][0] + grid[i][0];
        
        //filling the rest of the value
        for(i=1;i<rows;++i)
        {
            for(j=1;j<cols;++j)
                dp[i][j] = grid[i][j] + min(dp[i-1][j],dp[i][j-1]);
        }
        //returning the last value
        return dp[rows-1][cols-1];
    }
};