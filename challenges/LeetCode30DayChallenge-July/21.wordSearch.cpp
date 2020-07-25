class Solution {
public:
    bool dfs(vector<vector<char>> &board,vector<vector <int>> &visited,int i,int j,string &word,int k){
        if(word.size()-1==k){
            return true;
            
        }
        visited[i][j]=true;
        if(i>0 && !visited[i-1][j] && board[i-1][j]== word[k+1] && dfs(board,visited,i-1,j,word,k+1)){
            return true;
        }
        if(j>0 && !visited[i][j-1] && board[i][j-1]== word[k+1] && dfs(board,visited,i,j-1,word,k+1)){
            return true;
        }
        if(i<board.size()-1 && !visited[i+1][j] && board[i+1][j]== word[k+1]&& dfs(board,visited,i+1,j,word,k+1)){
            return true;
        }
        if(j<board[0].size()-1 && !visited[i][j+1] && board[i][j+1]== word[k+1] && dfs(board,visited,i,j+1,word,k+1)){
            return true;
        }


     //   cout<<word[0]<<" "<<i<<" "<<j<<endl;

        // else{
        //     visited[i][j]=0;
        //     return;
        // }
        
        visited[i][j] = 0;
        return false;


    }
    bool exist(vector<vector<char>>& board, string word) {
        int M = board.size();
        int N = board[0].size();
        vector<vector<int>> visited(M,vector<int>(N,0));
        bool flag=false;
        int k=0;
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                if(board[i][j]==word[0] && dfs(board,visited,i,j,word,k))
                  return true;
            }
        }
        
        
        return false;
        
        
        
    }
};