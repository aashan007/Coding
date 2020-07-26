int maximalSquare(vector<vector<char>>& matrix) {
        if(matrix.size()==0){
            return 0;
        }
        int m = matrix.size();
        
        int n= matrix[0].size();
        int **dp=new int *[m+1];
        for(int i=0;i<=m;i++){
            dp[i]= new int[n+1];
        }
        cout<<m<<" "<<n<<endl;
        // for(int i=0;i<=m;i++){
        //     dp[i][0]=0;
        // }
        for(int j=0;j<=m;j++){
            dp[j][0]=0;

        
        for(int j=0;j<=n;j++){
            dp[0][j]=0;
      //      cout<<j<<" "<<dp[0][j]<<endl;
        }

        int maxRes=0;
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(matrix[i-1][j-1]=='1'){
                dp[i][j] = (matrix[i-1][j-1] -'0') + min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]));
                maxRes = max(maxRes,dp[i][j]);
                }
                else{
                    dp[i][j]=0;
                }
            }
        }

        return maxRes*maxRes;
    }