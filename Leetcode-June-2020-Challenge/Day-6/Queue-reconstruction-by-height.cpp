/*Algorithm
the idea is to first sort the queue(decresing) by height(h) and the sort it 
incresingly by number of persons(k).
*/


class Solution {
    static bool comp(const vector<int> a,const vector<int> b){
        return (a[0]>b[0] || (a[0]==b[0] && a[1]<b[1]));
    }
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        vector<vector<int>> res;
        
        sort(people.begin(),people.end(),comp);
        for(auto c:people){
            res.insert(res.begin()+c[1],c);
        }
    return res;
    }
};