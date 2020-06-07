 int change(int amount, vector<int>& coins) {
        vector<int> dp(amount+1,0);
        dp[0]=1;
         // for(int i=0;i<=amount;i++){
         //        cout<<dp[i]<<" ";
         //    }
            // cout<<endl;
        for(int j=0;j<coins.size();j++){
            for(int i=0;i<=amount;i++){
                if(i-coins[j]<0){
                    continue;
                }
                else{
                    dp[i]=dp[i]+dp[i-coins[j]];
                }
            }
            // for(int i=0;i<=amount;i++){
            //     cout<<dp[i]<<" ";
            // }
            // cout<<endl;
        }
        
        return  dp[amount];
        
        
    }