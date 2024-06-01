/* Algorithm

# Have a variable reachable, that will store the highest index that can be reached at any given point in the loop

# we start with i=0 and reachable = 0

# The largest i+nums[i] value that we know so far is the reachable.

# This value must always be greater than i. Because if its not, It means that we've encountered zero somewhere. 
any_index+ its_value = any_index only when its_value is zero. If the reachable is stuck at that point, i will 
become greater than reachable at some point in the future. At the moment, we know we can't reach the last index, 
so return False

# If the loop is done, then i was always behind rechable and loop is done only when i == nums[last_index] so we 
can go to last_index or even more than last_index depending on the value of reachable.

===========================================================================================================*/

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int reach = 0;
        int len = nums.size();
        
    for(int i = 0 ; i< len;i++){
        if(i>reach){
            return false;
        }
        reach = max(reach,nums[i]+i);
        }
      return true;  
    }
};