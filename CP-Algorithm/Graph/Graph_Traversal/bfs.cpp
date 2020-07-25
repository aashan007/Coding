#include<bits/stdc++.h>

using namespace std;

vector<int> bfs(vector<vector<int>> &graph,vector<int> &visited,int u,int end){
    if(u==end){
        return {u};
    }
    queue<int> q;
    q.push(u);
    visited[u]=1;
    vector<int> result;
    while(!q.empty()){
        int temp = q.front();
        q.pop();
        result.push_back(temp);
        for(int i=0;i<graph[temp].size();i++){
            if(!visited[graph[temp][i]]){
                visited[graph[temp][i]]=true;
                q.push(graph[temp][i]);
            }
        
        }
    }


    return result;

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
    vector<int> res = bfs(graph,visited,0,V-1);

    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }

}