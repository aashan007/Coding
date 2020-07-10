class Solution {
public:
    
    int cou(vector<vector<int>>& grid,int i,int j){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() ){
            return 1;
        }
        if(grid[i][j]==0){
            return 1;
        }
        return 0;
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        if(grid.size()==0){
            return 0;
        }
        int count =0;
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                    if(grid[i][j])
                        count = count + cou(grid,i-1,j) + cou(grid,i+1,j) + cou(grid,i,j-1) + cou(grid,i,j+1);  
               //     cout<<i<<" "<<j<<" "<<count<<endl;
            }
        }
        
        return count;
        
    }
};