class Solution {
public:
    int hammingDistance(int x, int y) 
    {
        vector<int> X(32, 0);
        vector<int> Y(32, 0);
        int i=0;
        while(x>0)
        {
            X[i] = x%2;
            i++;
            x /= 2;
        }
        i=0;
        while(y>0)
        {
            Y[i] = y%2;
            i++;
            y /= 2;
        }
        int ans=0;
        for(int i=0; i<32; i++)
        {
            if(X[i]!=Y[i]) ans++;
        }
        return ans;
    }
};