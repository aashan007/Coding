int firstUniqChar(string s) {
        unordered_map<char,int> mp;
        queue<char> Q;
        for(int i=0;i<s.size();i++){
            if(mp.count(s[i])==0){
                mp[s[i]]=i;
                Q.push(s[i]);
            }
            else{
                if(mp[s[i]]<s.size()){
                    mp[s[i]]+=s.size();
                }
                
            }
        }
        for(auto it=mp.begin();it!=mp.end();++it){
            cout<<it->first<<" "<<it->second<<endl;
        }
        while(!Q.empty()){
            char ch = Q.front();
            Q.pop();
            if(mp[ch]<s.size()){
                return mp[ch];
            }
        }
        return -1;
    }