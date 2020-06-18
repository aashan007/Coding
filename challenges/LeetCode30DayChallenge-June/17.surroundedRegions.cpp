void dfs(vector<vector<char>>& board,int i,int j){
        if(i<0 || i>=board.size() || j<0 || j>=board[0].size()){
            return;
        }
        if(board[i][j]=='O'){
            board[i][j]='A';
            dfs(board,i+1,j);
            dfs(board,i-1,j);
            dfs(board,i,j-1);
            dfs(board,i,j+1);
            
        }
        
    }
    void solve(vector<vector<char>>& board) {
        
        if (board.size()==0){
            return;
        }

        int iStart=0;
        int jStart=0;
        int iEnd= board.size()-1;
        int JEnd=board[0].size()-1;
        for(int i=0;i<=iEnd;i++){
            for(int j=0;j<=JEnd;j++){
                if(board[i][j]=='O' && (i==iStart || i==iEnd || j==jStart || j==JEnd)){
                    if(board[i][j]='O')
                     dfs(board,i,j);
                }
               
            }
        }
        for(int i=0;i<=iEnd;i++){
            for(int j=0;j<=JEnd;j++){
                if(board[i][j]=='O'){
                    board[i][j]='X';
                }
                else if(board[i][j]=='A'){
                    board[i][j]='O';
                }
            }
        }
        
    }