#include<bits/stdc++.h>

using namespace std;

void dfs(vector<vector<int>> &graph,vector<int> &visited,int u,vector<int> &temp){
    if(visited[u]){
        return;
    }
    temp.push_back(u);
    visited[u]=1;
    for(int v:graph[u]){
        if(!visited[v]){
            dfs(graph,visited,v,temp);
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
    vector<vector<int>> result;
    vector<int> visited(V,0);
    for(int i=0;i<V;i++)
        {
            vector<int> temp;
             if(!visited[i])
                dfs(graph,visited,i,temp);
             if(temp.size()>0)
                result.push_back(temp);

        }
    for(int i=0;i<result.size();i++){
        cout<<"Component : "<<i<<endl;
        for(int j=0; j<result[i].size();j++){
            cout<<result[i][j]<<" ";
        }

        cout<<endl;
    }       



}