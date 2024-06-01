/*Algorithm:
    -create two stacks,one for keeping the track of open parenthesis 
    and other for keeping track of *'s encountered.
    
    LOOP THROUGH THE STRING
    
    -whenever '(' is encountered push in paren stack
    -whenever '*' is encountered push in star stack
    -when ')' is encountered , two things are possible
        either it will be balanced by '(' ,if the paren stack is not empty
        if paren stack is empty then check for star stack
        if both of them are empty then return false.
    
    END OF LOOP
   
    -when iteration is done , check if paren stack is empty,
        -if empty , return true
        -if not empty then 3 senarios are possible
            -check if star stack is empty, if yes return false
            -check if paren.top()<star.top() if yes, then pop from star and paren
            -else return false

    
*/
class Solution {
public:
    bool checkValidString(string s) {
    
        stack<char> paren;
        stack<char> star;
    
    for(int i = 0 ; i < s.length();i++)
    {
            
            if(s[i] == '('){
                paren.push(i);
            }else if(s[i] == ')'){
                if(!paren.empty()){
                    paren.pop();
                }else if(!star.empty()){
                    star.pop();
                }else{
                    return false;
                }
            }else{ //s[i]=="*"
                star.push(i);
            }
        
    }
    
    while (!paren.empty())
    {
        if(star.empty()){
            return false;
        }else if(paren.top()<star.top()){
            paren.pop();
            star.pop();
        }else{//paren.top()<star.top()
            return false;
        }
    }
    return true;  
    }
};