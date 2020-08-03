class Solution {
public:
    vector<string> wordbreaker(string s,vector<string> &wordDict,unordered_map<string,vector<string>> &mp){
        
        if(mp.find(s)!=mp.end()){
         //   cout<<s<<" "<<mp[s].size()<< " "<<endl;
            return mp[s];
        }
        
        vector<string> result;
        if(s.size() == 0){
            result.push_back("");
            return result;
        }
        
        for(string word:wordDict){
            if (s.rfind(word, 0) == 0) {
                vector<string> substring = wordbreaker(s.substr(word.size()),wordDict,mp);
                for (string str:substring){
                    string optionalSpace = str.size()==0?"": " ";
                    result.push_back(word + optionalSpace + str);
                }    
            }
            
        }
        mp[s] = result;
        return result;
    }
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        unordered_map<string,vector<string>> mp;
        return wordbreaker(s,wordDict,mp);
        
    }
};