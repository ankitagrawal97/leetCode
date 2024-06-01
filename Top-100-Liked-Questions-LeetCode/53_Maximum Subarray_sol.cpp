class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum = nums[0];
        int best = nums[0];
        for(int i = 1 ; i< nums.size() ; i++){
            maxsum = max(nums[i],maxsum+nums[i]);
            best = max(best,maxsum);
        }
        return best;
    }
};