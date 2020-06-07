bool compare(const vector<int> &v1,const vector<int> &p2){
        return v1[0]>p2[0] || (v1[0]==p2[0] && v1[1]<p2[1]);
    }
class Solution {
public:
    
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        vector<vector<int>> res;

        sort(people.begin(),people.end(),compare);
        
        for(vector<int> &it: people){
            res.insert(res.begin()+it[1],it);
        }

        
        
        
        return res;
        
    }
};