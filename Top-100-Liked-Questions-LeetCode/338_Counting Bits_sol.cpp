class Solution {
public:
   void solve(vector<int> &ans, int i){
        int count = 0;
        while(i){
            count += i%2;
            i/=2;
        }
        ans.push_back(count);
    }
    
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i = 0; i<=n; i++){
            solve(ans, i);
        }
        return ans;
    }
};

