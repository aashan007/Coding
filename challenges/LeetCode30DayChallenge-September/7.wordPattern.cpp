
class Solution {
public:
    bool wordPattern(string pattern, string str) {
        vector<string> val;
        unordered_map<string,char> mp;
        unordered_map<char,string> mp1;
        string w="";
        for(auto i:str){
        if(i==' '){
           val.push_back(w);
           w="";
        }
        else{
           w+=i;
        }
    }
        if(w.size()!=0){
            val.push_back(w);
        }
        
        if(pattern.size()!=val.size()){
            return false;
        }
        
        for(int i=0;i<val.size();i++){
          //  cout<<pattern[i]<<" ";
            if(mp.count(val[i])>0){
                
                if(mp[val[i]]!=pattern[i]){
                    return false;
                }
            }
                else{
              //      cout<<2<<endl;
                    if(mp1.count(pattern[i])>0){
                        if(val[i]!=mp1[pattern[i]])
                            return false;
                    }
                    mp[val[i]] = pattern[i];
                    mp1[pattern[i]]=val[i];
                    
                }
            
        }
        return true;
    }
};