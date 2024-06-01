/*
Algorithm:
-maintian two pointers 
-l and r both pointing at starting of the array,
-increase r pointer when it sees 0 
-swap the contents of l and r when r sees a non zero value and increase the value of both l and r.

*/class Solution {
public:
void swap(int *a,int *b){
    int temp = *a;
    *a = *b; 
    *b = temp;
}
    void moveZeroes(vector<int>& nums) {
        int l = 0;
        int r =0;
        if(nums.size()==0 || nums.size()==1){
            return;
        }
        while(r<nums.size()){
            if(nums[r]==0){
                ++r;
            }else{
                swap(&nums[l],&nums[r]);
                ++l;
                ++r;
            }
        }
        
    }
};