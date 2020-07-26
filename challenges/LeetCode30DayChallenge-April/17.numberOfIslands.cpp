void island(vector<vector<char>>&grid,vector<vector<int>> &dp,int i,int j,int m,int n){
        if(i<0 || j<0 || i>=m || j>=n || dp[i][j] || grid[i][j]=='0'){
            return;
        }
      //  cout<<i<<" "<<j<<" "<<grid[i][j]<<endl;
        dp[i][j]=1;
        if(grid[i][j]=='1'){
            island(grid,dp,i-1,j,m,n);
            island(grid,dp,i,j+1,m,n);
            island(grid,dp,i+1,j,m,n);
            island(grid,dp,i,j-1,m,n);
            
            
        }
        else{
            return ;
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        vector<vector<int>> dp;
        for(int i=0;i<grid.size();i++){
            vector<int> temp;
            for(int j=0;j<grid[0].size();j++){
                temp.push_back(0);
                //dp[i][j]=0;
            }
            dp.push_back(temp);
        }
        int count=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                
                if(!dp[i][j] && grid[i][j]=='1'){
                  //  cout<<"test"<<" "<<i<<" "<<j<<" "<<grid[i][j]<<endl;
                    island(grid,dp,i,j,grid.size(),grid[0].size());
                    count++;
                }
                
            }
        }
        return count;
    }