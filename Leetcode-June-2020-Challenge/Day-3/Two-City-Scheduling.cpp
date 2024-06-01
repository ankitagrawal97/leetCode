/*
In order to reduce expenses the costs vector is sorted (dec) on the basis of difference of its two elements.
Assuming N candidates the first n/2 candidates are sent to city A i.e Sum = cost to go to city A, the rest of n/2 are sent to
city B i.e. sum = cost to go to city B.
*/


class Solution {
      static bool comparator(const vector<int>& a, const vector<int>& b){
	return a[1]-a[0] > b[1]-b[0];
	}
    
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
       ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        int sum = 0;
        int row = costs.size();
        sort(costs.begin(),costs.end(),comparator);
        for (int i = 0; i < row; ++i) {
        if(i>=row/2){
            sum += costs[i][1];
            
        }else{
            sum += costs[i][0];
        }
         }
  return sum;
        
  }       
};