bool check(int ** dp,int N,int val,bool l){
        int flag=false;
        if(l){
            for(int i=0;i<N;i++){
                if(i!=val){
                    if(dp[i][val]==0){
                        return false;
                    }
                }
            }
            return true;
            
        }
        else{
            for(int i=0;i<N;i++){
                if(dp[val][i]==1){
                    return false;
                }
            }
            return true;
        }
    }
    int findJudge(int N, vector<vector<int>>& trust) {
        int ** dp=new int*[N];
        //[N][N];
        for(int i=0;i<N;i++){
            dp[i]=new int[N];
            for(int j=0;j<N;j++){
                dp[i][j]=0;
            }
        }
        for(int i=0;i<trust.size();i++){
            dp[trust[i][0]-1][trust[i][1]-1]=1;
        }
        for(int i=0;i<N;i++){
            if(check(dp,N,i,0)){
                if(check(dp,N,i,1)){
                    return i+1;
                }
            //return -1;

            }
        }
        return -1;
        
        
    }