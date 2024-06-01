//Method 1:- Using hashmap
  class Solution {
  public:
      int majorityElement(vector<int>& nums) {
	  
          int n=nums.size(),res;
		  //Map to store the frequency of all elements
          map<int,int> mp;
          for(int i=0;i<n;i++){
             mp[nums[i]]++;
         }
		
         for(int i=0;i<n;i++){
               if(mp[nums[i]]>(n/2)){
                   res=nums[i];
              }
         }
         return res;
       }
 };
 
 //Method 2:- Sorting
 //nlogn time, constant space
   class Solution {
   public:
       int majorityElement(vector<int>& nums) {
           sort(nums.begin(), nums.end());
           return nums[nums.size()/2];
       }
   };
   
 //Method 3:- Efficient Tricky Increment-decrement
 //moore's volting algo
 //constant time space
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int most=nums[0],count=1;;
        for(int i=1;i<nums.size();i++){
            if(count==0){
               most=nums[i];
               count=1;
            }
            else if(nums[i]==most){
               count++;
            }
            
            else{
                count--;
            }
        }
        return most;
    }
};