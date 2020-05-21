
    int countSquares(vector<vector<int>>& matrix) {
        int count=0;
        vector<vector<int>> dp;
        int m = matrix.size();
        int n = matrix[0].size();
        for(int i=0;i<=m;i++){
            vector<int> temp;
            for(int j=0;j<=n;j++){
                temp.push_back(0);
            }
            dp.push_back(temp);
            
        }
        
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(matrix[i-1][j-1])
                    dp[i][j]=matrix[i-1][j-1]+min(dp[i-1][j],min(dp[i-1][j-1],dp[i][j-1]));
                count = count+dp[i][j];
            }
            
        }
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }
        return count;
        
        
        
    }