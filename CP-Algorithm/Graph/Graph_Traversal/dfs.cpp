#include<bits/stdc++.h>

using namespace std;

void dfs(vector<vector<int>> &graph,vector<int> &visited,int u){
    if(visited[u]){
        return;
    }
    cout<<u<<" ";
    visited[u]=1;
    for(int v:graph[u]){
        if(!visited[v]){
            dfs(graph,visited,v);
        }
    }
}


int main(){
    int V=0,E=0;
    /* undirected graph */
    cout<<"Enter the number vertices\n";
    cin>>V;
    vector<vector<int>> graph(V,vector<int>());

    for(int i=0;i<V;i++){
        cout<<"vertice : "<<i<<" \n"<<"Enter no. the edges";
        cin>>E;
        while(E--){
            int temp = 0;
            cin>>temp;
            graph[i].push_back(temp);
            graph[temp].push_back(i);
        }

    }
    vector<int> visited(V,0);
    for(int i=0;i<V;i++)
        if(!visited[i])
            dfs(graph,visited,0);

    // for(int i=0;i<res.size();i++){
    //     cout<<res[i]<<" ";
    // }

}