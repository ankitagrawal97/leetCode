class Solution {
public:
    void swap(int &a,int &b){
        int temp = a;
        a = b;
        b = temp;
    }
    void moveZeroes(vector<int>& nums) {
        if(nums.size()<=1){
            return;
        }
        int i = 0;
        int j = 0;
        while(j<nums.size()){
            if(nums[j] == 0){
                j++;
            }else{
                swap(nums[i],nums[j]);
                i++;
                j++;
            }
        }
        
        
    }
};