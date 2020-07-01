class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        int m = dungeon.size();
        int k = dungeon[0].size();
        vector<vector<int>> soln(m,vector<int>(k));
        soln[m-1][k-1] = dungeon[m-1][k-1]>0?1:1-dungeon[m-1][k-1];
        
        
        for(int i=m-2;i>=0;--i){
            soln[i][k-1] = max(soln[i+1][k-1]-dungeon[i][k-1],1);
        }
        for(int i=k-2;i>=0;--i){
            soln[m-1][i] = max(soln[m-1][i+1]-dungeon[m-1][i],1);
        }
        for(int i=m-2;i>=0;--i){
            for(int j=k-2;j>=0;--j){
                soln[i][j] = max((min(soln[i+1][j],soln[i][j+1])-dungeon[i][j]),1);
            }
        }

        
        // for(int i=0;i<m;i++)
        // {
        //     for(int j=0;j<k;j++){
        //         cout<<soln[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        
        return soln[0][0];
        
    }
};