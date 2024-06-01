class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int aptr = 0;
        int bptr = 0;
        int maxLength = 0;
        unordered_set<char> set;
        while(bptr<s.length()){
            if(set.count(s[bptr]) == 0){
                set.insert(s[bptr]);
                bptr++;
                if(set.size()>maxLength){
                    maxLength = set.size();
                }
            }else{
                set.erase(s[aptr]);
                aptr++;
            }
        }
        return maxLength;
    }
};