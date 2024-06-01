class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len = nums.size();
        int left[len]; //for storing left prefix product
        int right[len]; //for storing right prefix product
        int prod = 1;
        for(int i = 0 ; i < len;i++){ 
            prod = prod * nums[i];
            left[i] = prod;
        }
        prod = 1;
        for(int j = len-1;j>=0;j--){
            prod = prod * nums[j];
            right[j] = prod;
        }
        for(int i = 0;i<len;i++){
            if(i==0){
                nums[i] = right[i+1]; //boundary condition for first element
            }else if(i==len-1){
                nums[i]=left[len-2]; //boundary condition for last element
            }else{
                nums[i] = left[i-1]*right[i+1]; //value at any index is the prod of left prefix val times right prefix val
            }
        }
        return nums;
    }
};