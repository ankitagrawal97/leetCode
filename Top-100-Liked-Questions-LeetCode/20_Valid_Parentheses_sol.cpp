class Solution {
public:
    bool isValid(string s) {
        stack<char> stac;
        for (char c : s){
            switch(c){
                case '(':stac.push(c);break;
                case '{':stac.push(c);break;
                case '[': stac.push(c);break;
                case ')':{
                    if(stac.empty() || stac.top()!='('){
                        return false;
                    }else{
                        stac.pop();
                    }
                    break;
                }
                case '}':{
                    if(stac.empty() || stac.top()!='{'){
                        return false;
                    }else{
                        stac.pop();
                    }
                    break;
                }
                case ']':{
                    if(stac.empty() || stac.top()!='['){
                        return false;
                    }else{
                        stac.pop();
                    }
                    break;
                }
                default:;                           
            }
        }
        
        return stac.empty();
    }
};