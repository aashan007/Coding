vector<int> findAnagrams(string s, string p) {
        vector<int> result;
        if(s.size()==0){
            return result;
        }
        int * dp=new int[26];
        for(int i=0;i<26;i++){
            dp[i]=0;
        }
        for(int i=0;i<p.size();i++){
            dp[p[i]-'a']++;
        }
        int left=0;
        int right=0;
        int count=p.size();
        // for(int i=0;i<26;i++){
        //     cout<<i<<" "<<dp[i]<<endl;
        // }
        while(right<s.size()){
            if(dp[s[right++]-'a']-->=1){
                count--;
            }
            if(count==0){
                result.push_back(left);
            }
            if(right-left==p.size() && dp[s[left++]-'a']++>=0){
                count++;
            }
        }
        return result;
    }