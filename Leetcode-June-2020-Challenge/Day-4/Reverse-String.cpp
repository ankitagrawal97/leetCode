class Solution {
    void swap(char &a,char&b){
        char temp;
        temp = a;
        a = b;
        b = temp;
    }
public:
    void reverseString(vector<char>& s) {
        int l = 0;
        int len = s.size();
        int r = len -1;
        
        while(l<r){
            swap(s[l],s[r]);
            l++;
            r--;
        }
    }
};