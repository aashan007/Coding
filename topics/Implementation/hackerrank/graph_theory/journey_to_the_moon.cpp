#include<bits/stdc++.h>
using namespace std;
long long num=0;
void dfs(long long** edges,long n,long sv,bool* visited){
    visited[sv]=true;
    num++;
    for(long long j=0;j<n;j++){
        long long next=edges[sv][j];
        if(j==sv){

            continue;
        }
        if(next){
            if(!visited[j]){

            // cout<<num<<endl;

             dfs(edges,n,j,visited);
        }
        else{
            continue;
        }
        }
    }


}

long long connected_component(long long **edges,long long n,long long e){

    bool *visited=new bool[n+1];
    for(long long i=0;i<n+1;i++){
        visited[i]=false;
    }
    vector <long long> num_total;
    for(long long i=0;i<n+1;i++){
        if(!visited[i]){


            dfs(edges,n+1,i,visited);

            num_total.push_back(num);
            num=0;
        }
    }
    long long total=0;
    long long value=num_total.size()-1;
    for(long long i=0;i<num_total.size();i++){
      total=total+value;
      value=value-1;
    }
    return total;



    // return min(croad_cost,clib_cost);



}



int main(){


        long long v,e;
        cin>>v>>e;
        long long **edges=new long long*[v+1];
        for(long long i=0;i<=v;i++){
            edges[i]=new long long[v+1];
            for(long long j=0;j<=v;j++){
                edges[i][j]=0;
            }
        }
        for(long long i=0;i<e;i++){
            long long  f,s;
            cin>>f>>s;
            edges[f][s]=1;
            edges[s][f]=1;

        }
          long long result=connected_component(edges,v,e);

          cout<<result<<endl;





        //output
        // for(int i=1;i<=v;i++){
        //     for(int j=1;j<=v;j++){
        //         cout<<edges[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }


}
