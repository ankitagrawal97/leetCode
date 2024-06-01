/*Time Complexity is O(1)
    Space Complexity O(N)
    */

/*class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int len = nums.size();
        unordered_set<int> myset;
        int ans;
        for(int i = 0; i < len ; i++){
        if(myset.find(nums[i])!=myset.end()){
            ans = nums[i];
        }
            myset.insert(nums[i]);
        }
        return ans;
    }
};*/
/*=============Method 2========*/
/*Time Complexity is O(N)
    Space Complexity O(1)
    */
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int s=nums[0];
        int f=nums[nums[0]];
        while(s!=f) { // To find the collision point
            s=nums[s];
            f=nums[nums[f]];
        }
        f=0;
        while(s!=f) {
            s=nums[s]; //both the pointers move one step at a time. 
            f=nums[f];
        }
        return s;
        
    }
};