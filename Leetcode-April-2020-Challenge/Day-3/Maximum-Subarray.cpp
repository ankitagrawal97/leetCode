class Solution {
    
public:
    int maxSubArray(vector<int>& nums) {
        int sum = nums[0];
        int best = nums[0];
        int len = nums.size();
        
        for(int i = 1;i < len; i++){
            sum = max(nums[i]+sum,nums[i]);
            best = max(sum,best);
        }
        
    return best;
    }
};