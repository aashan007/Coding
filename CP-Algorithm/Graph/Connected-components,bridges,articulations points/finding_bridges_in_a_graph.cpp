#include<bits/stdc++.h>

using namespace std;

int counter =0;
vector<int> tim;
vector<int> low;

void dfs(vector<vector<int>> &graph,vector<int> &visited,int u,int p=0){
    if(visited[u]){
        return;
    }
    tim[u] = counter;
    low[u] = counter;
    counter++;
    visited[u]=1;
    for(int v:graph[u]){
        if(!visited[v]){
            dfs(graph,visited,v,u);
        }
    }

    for(int t:graph[u]){
        if(t!=p){
            low[u]= min(low[u],low[t]);
        }
    }
    if(low[p]<low[u]){
        cout<<" This is a bridge which if we break will result in a component"<<endl;
        cout<<p<<" "<<u<<endl;
    }
}


int main(){
    int V=0,E=0;
    /* undirected graph */
    cout<<"Enter the number vertices\n";
    cin>>V;
    vector<vector<int>> graph(V,vector<int>());
    tim = vector<int>(V,-1);
    low = vector<int>(V,-1);


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
                dfs(graph,visited,i);
        }
    for(int i=0;i<V;i++){
        cout<<i<< "tim : "<<tim[i]<<endl;
        cout<<i << "low : "<<low[i]<<endl;
    }


}
/*

input

7
2
1
4
2
2
3
2
1
3
2
1
2
2
5
6
2
4
6
2
4
5

*/


