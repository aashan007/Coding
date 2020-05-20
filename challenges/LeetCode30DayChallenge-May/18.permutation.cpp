bool checkInclusion(string s1, string s2) {
        if(s2.size()==0){
            return false;
        }
        int * dp=new int[26];
        for(int i=0;i<26;i++){
            dp[i]=0;
        }
        for(int i=0;i<s1.size();i++){
            dp[s1[i]-'a']++;
        }
        int left=0;
        int right=0;
        int count=s1.size();
        // for(int i=0;i<26;i++){
        //     cout<<i<<" "<<dp[i]<<endl;
        // }
        while(right<s2.size()){
            if(dp[s2[right++]-'a']-->=1){
                count--;
            }
            if(count==0){
                return true;
            }
            if(right-left==s1.size() && dp[s2[left++]-'a']++>=0){
                count++;
            }
        }
        return false;
        
    }