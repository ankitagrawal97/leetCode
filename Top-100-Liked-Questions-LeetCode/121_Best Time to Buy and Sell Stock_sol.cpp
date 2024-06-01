class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = INT_MAX;
        int maxProf = 0;
        for(auto i : prices){
            if(i < min ){
                min = i;
            }else if (i - min > maxProf){
                maxProf = i - min;
            }
        }
        return maxProf;
    }
};