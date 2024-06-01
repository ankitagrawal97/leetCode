/*Algorithm:
basically reconstruct the string and compare them
*/

class Solution {
public:
    vector<char> genstring(string str){
            vector<char> s;
            for(int i = 0 ; i< str.length();i++){
            if(str[i]=='#'){
                if(s.size()!=0){
                    s.pop_back();
                }
            }else{
                s.push_back(str[i]);
            }
        }
        return s;
    }
    bool backspaceCompare(string S, string T) {
        vector<char> s = genstring(S);
        vector<char> t = genstring(T);
       
        if(s.size()!=t.size()){
        return false;
        }else{
            for(int k = 0 ; k<s.size();k++){
                if(s[k]!=t[k]){
                return false;
                }
            
            }
        }
    return true;
    }
};