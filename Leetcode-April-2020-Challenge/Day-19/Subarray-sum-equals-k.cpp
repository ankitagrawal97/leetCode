/* Algorithm

the problem is same as that of day 17
instead of finding length we simply put a counter when ever we encounter a subarray of the 
given sum value.

*/

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        //For fast I/O in C++
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        int n = nums.size();
        if(n==0)
            return 0;
        
        unordered_map<int,int> mymap;   //Key = PrefixSUM, Value = Count of PrefixSUM.
        int currSUM = 0;
        int i = 0;
        int count = 0;
        
        while(i<n)
        {
            currSUM += nums[i];
            
            if(currSUM == k)    //found a new subArray with SUM = k
                count += 1;
            
            if(mymap.find(currSUM-k)!=mymap.end())
                count += mymap[currSUM-k];
            
            mymap[currSUM] += 1;
            i += 1;
        }
        return count;
    }
};