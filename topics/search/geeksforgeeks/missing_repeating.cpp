#include<bits/stdc++.h>

using namespace std;


int main(){
  int t;
  cin>>t;
  while(t--){
    int n,repeated=0,notpresent=0;
    cin>>n;
    int a[n];
    int visited[n+1];
    memset(visited,0,n);
    for(int i=0;i<=n;i++){
      visited[i]=0;
    }

    for(int i=0;i<n;i++){
      cin>>a[i];
    }


    for(int i=0;i<n;i++){
      visited[a[i]]++;
    }
    for(int i=1;i<=n;i++){
      if(visited[i]==2){
        repeated=i;
      }
      if(visited[i]==0){
        notpresent=i;
      }
      // cout<<i<<""<<visited[i]<<endl;
    }
cout<<repeated<<" "<<notpresent<<endl;

  }

}
