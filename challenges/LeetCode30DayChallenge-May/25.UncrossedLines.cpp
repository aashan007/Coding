int maxUncrossedLines(vector<int>& A, vector<int>& B) {
        vector<vector<int>> dp;
        for(int i=0;i<=A.size();i++){
            vector<int> temp;
            for(int j=0;j<=B.size();j++){
                temp.push_back(0);
            }
            dp.push_back(temp);
        }
        int result = 0;
        for(int i=1;i<=A.size();i++){
           
            for(int j=1;j<=B.size();j++){
                if(A[i-1]==B[j-1]){
                    int val = 1 + dp[i-1][j-1];
                    
                    dp[i][j] = max(dp[i][j-1],max(val,dp[i-1][j]));
                    
                }
                else{
                    dp[i][j] = max(dp[i][j-1],max(dp[i-1][j-1],dp[i-1][j]));
                }
                result = max(dp[i][j],result);
                
            }
        }
      //  result = dp[A.size()][B.size()];
        // for(int i=1;i<=A.size();i++){
        //      cout<<A[i-1]<<" "<<endl;
        //     for(int j=1;j<=B.size();j++){
        //         cout<<B[j-1]<<" : "<<dp[i][j]<<" ; ";
        //     }
        //     cout<<endl;
        // }
        
        
        
        
        return result;
        
    }