class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size()==0){
            return -1;
        }
        int i = 0;
        int j = nums.size()-1;
        while(i<=j){
            int mid = (i+j)/2;
            if(nums[mid]==target){
                return mid;
            }else if(nums[mid]>=nums[0]){
                if(target>=nums[0] && target<=nums[mid]){
                    j = mid -1;
                }else{
                    i = mid + 1;
                }
            }else{
                if(target>=nums[mid] && target<= nums[nums.size()-1]){
                    i = mid +1;
                }else{
                    j = mid -1;
                }
            }
        }
        return -1;
    }
};