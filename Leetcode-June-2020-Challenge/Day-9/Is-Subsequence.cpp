class Solution {
public:
   bool isSubsequence(string s, string t) {
        int i = 0;
        int j = 0;
        int lens = s.length();
       vector<int> visited(lens,0);
        
    
        
        while(i<s.length() && j<t.length()){
            if(s.at(i)==t.at(j)){
            visited[i] = 1;
            i++;
            j++;
            }else{
                j++;
            }   
            
        }
        for(int k = 0; k<s.length();k++)
        {
            if(visited[k]==0){
                return false;
                break;
            }
        }
        return true;
    }
};