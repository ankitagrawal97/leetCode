/*Algorithm:

-Create a p0 pointer at the beginning of the array and a p2 pointer at the end of the array.
-Create a curr pointer that starts at the beginning of the array and iterates through each element.
-If the element at arr[curr] is a 2, then swap arr[curr] and arr[p2] and decrease the p2 pointer by 1.
-If the element at arr[curr] is a 0, then swap arr[curr] and arr[p0] and increase the p0 and curr pointers by 1.
-If the element at arr[curr] is a 1, don’t swap anything and just increase the curr pointer by 1.
-Step 3, step 4 and step 5 will repeat until curr ≤ p2

*/

class Solution {
public:
    void sortColors(vector<int>& nums) {
      int p0=0;
        int curr = 0;
        int p2 = nums.size()-1;
        while(curr<=p2){
            if(nums[curr]==0){
                nums[curr]=nums[p0];
                nums[p0]=0;
                p0++;
                curr++;
            }else if(nums[curr]==2){
                nums[curr] = nums[p2];
                nums[p2] = 2;
                p2--;
            }else{
                curr++;
            }
        }
    }
};