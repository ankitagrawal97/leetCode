class Solution {
public:
    int firstoccurance(vector<int>& nums, int target){
        int ans = -1;
        int l = 0 ; 
        int r = nums.size() - 1;
        while(l <= r){

        int mid = l+(r-l)/2;
            if(nums[mid]==target){
                ans = mid;
                r = mid - 1;
            }else if(nums[mid]>target){
                r = mid - 1;
            }else if(nums[mid]<target){
                l = mid+1;
            }
            
        }
        return ans;
    }
    int lastoccurance(vector<int>& nums, int target){
        int ans = -1;
        int l = 0 ; 
        int r = nums.size() - 1;
        while(l <= r){

        int mid = l+(r-l)/2;
            if(nums[mid]==target){
                ans = mid;
                l = mid + 1;
            }else if(nums[mid]>target){
                r = mid - 1;
            }else if(nums[mid]<target){
                l = mid+1;
            }
            
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        ans.push_back(firstoccurance(nums,target));
        
        ans.push_back(lastoccurance(nums,target));
        return ans;
    }
};