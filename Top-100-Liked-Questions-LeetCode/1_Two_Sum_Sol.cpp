class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mpp;
        vector<int> temp(2);
        int diff;
        for(int i = 0 ; i < nums.size() ; i++){
             diff = target - nums[i];
            if(mpp.find(diff)!=mpp.end()){
                temp[0] = i;
                temp[1] = mpp[diff];
            }
            mpp[nums[i]] = i;
        }
        return temp;
    }
};