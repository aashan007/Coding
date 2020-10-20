class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> tmp;
        set<string> st;
        if(s.size()<=10){
            return tmp;
        }
//         for(int i=0;i<s.size()-10;i++){
//             string sub = s.substr(i,10);
//             for(int j=i+1;j<=s.size()-10;j++){
//                 string temp = s.substr(j,10);
//                 if(sub==temp){
//                     st.insert(sub);
//                     break;
//                 }
//             }
//         }
        
       vector<string> result;
        unordered_map<string,int> mp;
        for(int i=0;i<=s.size()-10;i++){
            mp[s.substr(i,10)]++;
        }
       // unordered_map<string,int>::iterator it;
        for(auto it=mp.begin();it!=mp.end();++it){
            if(it->second>1){
                result.push_back(it->first);
            }
        }
        
        
        return result;
        
    }
};