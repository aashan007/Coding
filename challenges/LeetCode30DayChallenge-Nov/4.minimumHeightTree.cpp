class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        vector<int>  arr;
        if(n<=0){
            return arr;
        }
        if(n==1){
            arr.push_back(0);
            return arr;
            
        }
        vector<int> degree(n,0);
        vector< vector<int> > adj(n,vector<int>());
        
        for(int i=0;i<edges.size();i++){
            degree[edges[i][0]]++;
            degree[edges[i][1]]++;
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
            
        }
        
        queue<int> q;
        
        for(int i=0;i<n;i++){
            if(degree[i]==1){
                q.push(i);
            }
        }
        
        while(n>2){
            int size=q.size();
            n-=size;
            
            while (size-->0){
                int v = q.front();
                q.pop();
                for(int i:adj[v]){
                    degree[i]--;
                    if(degree[i]==1)
                        q.push(i);
                }
            }
        }
        while(!q.empty()){
            int val = q.front();
            arr.push_back(val);
            q.pop();
        }
        
        return arr;
        
        
        
    }
};