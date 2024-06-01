/*
Algorithm:
-no. of ways including coin(dp[coin][amount-coin] )
-no. of ways excluding the coin(p[coin-1][amount])
-total number of ways with including and excluding the coin

dp[coin][amount] = dp[coin][amount-coin] + dp[coin-1][amount]

*/

class Solution {
public:
    int change(int amount, vector<int>& coins) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        
        int n = coins.size();
        vector<vector<int>> dp(n+1,vector<int>(amount+1));
        //Fill 1st row with 0 because no amount (except 0) can be formed without any coin
        int i,j;
        for(i=1;i<=amount;++i)
            dp[0][i] = 0;
        //Fill 1st col by 1 (assuming amount 0 can always be formed)
        for(i=0;i<=n;++i)
            dp[i][0] = 1;
        
        //Fill DP-Table
        for(i=1;i<=n;++i)
        {
            for(j=1;j<=amount;++j)
            {
                if(j>=coins[i-1])
                    dp[i][j] = dp[i][j-coins[i-1]]+dp[i-1][j];
                else
                    dp[i][j] = dp[i-1][j];
            }
        }
        return dp[n][amount];

    }
};