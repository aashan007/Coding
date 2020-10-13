class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> freq(26,0);
        for(char ch:s) freq[ch-'a']++;
        
        vector<char> result;
        vector<bool> visited(26,false);
        
        for(char ch:s){
            if(!visited[ch- 'a']){
                visited[ch- 'a']=true;
                if((result.size()>0) &&(ch<result[result.size()-1])){
                    char lastChar = result[result.size()-1];
                    while((result.size()>0) && (ch<lastChar) && (freq[lastChar-'a']>0)){
                        visited[lastChar-'a']=false;
                        result.pop_back();
                        if(result.size()>0) lastChar =result[result.size()-1];
                    }
                }
                   result.push_back(ch);
            }
            freq[ch-'a']--;
        }
        return string(result.begin(),result.end());
    }
};