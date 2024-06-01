/*Algorithm:
-iterate through the vector and convert all the 0s into -1;
 
 Now the problem reduces to find a subarray of max len with sum of elements equal to k(here k = 0);

 for finding the maxlen:-
    
    1. Create a hash table H and store sum and its ending index as key-value pairs.

    2. Declare a variable maxLen = 0, which will store the maximum length of subarray whose sum is k.

    3. Iterate through the array and for every A[i], calculate the sum from 0 to i.

    4. If sum turns out to be 0, then update maxLen to i, if (maxLen < i).

    5. Check if that sum-k is present in the hash table or not.

    If exist, then update the maxLen if ( i - H[sum-k]> maxLen ) to i - H[sum-k].
    If not, insert it in hashmap, H[sum] = i.

    6. Return maxLen.

*/


class Solution {
public:
    int maxlenwithsumk(vector<int> &nums,int k){
        int sum = 0;
        int maxLen = 0;
        unordered_map<int,int> mymap;
        
        for(int i = 0; i<nums.size();i++){
            sum = sum + nums[i];
            if(sum==k){
                if(maxLen<i){
                    maxLen = i+1;
                }
            }else if(mymap.find(sum-k)!=mymap.end()){
                if(maxLen< i-mymap[sum-k]){
                    maxLen = i - mymap[sum-k];
                }
            }else{
                mymap[sum] = i;
            }
        }
        return maxLen;
    }
    int findMaxLength(vector<int>& nums) {
        for(int i = 0 ; i < nums.size(); i++){
            if(nums[i]==0){
                nums[i]=-1;
            }
        }
        int k = 0;
        
        return maxlenwithsumk(nums,k);
    }
};