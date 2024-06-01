/*Algorithm
-if a number is happy it results in 1 otherwise it enters in a loop.
-use a set to store the sums of digits of numbers , updating the num to sum simulatneously
-if sum = 1 , return true
-if the sum of digits is already present in the set then return false
*/


class Solution {
public:
   bool isHappy(int n) {
     set<int> myset;
        int sum ;
        int rem;
        
        while(1)
        {
            sum = 0;
            while(n)
            {
                rem = n%10;
                sum += rem*rem;
                n /=10;
            }
            if(sum==1)
                return true;
            else if(myset.find(sum)!=myset.end())
                return false;
            
            myset.insert(sum);
            n = sum;
        }
        return false;
   }
};