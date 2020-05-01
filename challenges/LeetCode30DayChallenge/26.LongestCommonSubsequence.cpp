int longestCommonSubsequence(string text1, string text2) {
        int ** dp = new int*[text1.size()+1];
        for(int i=0;i<text1.size()+1;i++){
            dp[i] = new int[text2.size()+1];
        }
        for(int i=0;i<text1.size()+1;i++){
            for(int j=0;j<text2.size()+1;j++){
                dp[i][j]=0;
            }
        }
      //  int max=0;
        if(text1.size()==0 || text2.size()==0){
            return 0;
        }

        for(int i=1;i<=text1.size();i++){
            for(int j=1;j<=text2.size();j++){
                if(text1[i-1]==text2[j-1]){
                   // cout<<1+max(dp[i-1][j],dp[i][j-1])<<endl;
                    dp[i][j] = 1 + (dp[i-1][j-1]);
                }
                else{
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        // for(int i=1;i<text1.size()+1;i++){
        //     for(int j=1;j<text2.size()+1;j++){
        //         cout<<i<<" "<<j<<" : "<<dp[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        int result = dp[text1.size()][text2.size()];
        return result;
        
    }