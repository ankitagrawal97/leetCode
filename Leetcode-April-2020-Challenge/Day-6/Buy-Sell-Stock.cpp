/*Algorithm:
use valley peak approach..
add profits only when the graph is increasing.
profit = present value - previous value
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        int profit = 0;
        int len = prices.size();
        
        for(int i = 1;i<len;i++){
            if(prices[i-1]<prices[i]){
                profit = profit + (prices[i]-prices[i-1]);
            }
        }
        return profit;
    }
};