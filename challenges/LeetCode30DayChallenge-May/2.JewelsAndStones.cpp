int numJewelsInStones(string J, string S) {
        unordered_map<char,int> mp;
        for(int i=0;i<S.size();i++){
            mp[S[i]]++;
        }
        int count =0;
        for(int i=0;i<J.size();i++){
            if(mp.count(J[i])>0){
                count = count + mp[J[i]];
            }
        }
        //cout<<count<<endl;
        return count;
    }