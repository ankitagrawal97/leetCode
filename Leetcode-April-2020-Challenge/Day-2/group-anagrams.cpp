/*Algorithm

-iterate through each string in the given list and sort each string.
-make a map with sorted string as key and their corresponding original strings as value.
-if the sorted string matches key then push it into the corresponding value list else create a new key. 
-Finally, return all the value list.*/

/*=====Solution====*/

vector<vector<string>> findanagrams(vector<string> &str)
{
    
    int len = str.size();
    //used unordered map to reduce time complexity.()
    unordered_map<string,vector<string>> mymap;
    
    string temp;

    for (int i = 0; i < len; i++)
    {
        temp = str[i];
        sort(str[i].begin(),str[i].end());
        mymap[str[i]].push_back(temp);

    }
    
    vector<vector<string>> res;
    
    for (auto c:mymap)
    {
        res.push_back(c.second);
    }
    
    return res;

}