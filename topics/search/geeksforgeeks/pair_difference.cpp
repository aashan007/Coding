#include<bits/stdc++.h>

using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];

    sort(a,a+n);

    // for(int i=0;i<n;i++)
    // cout<<a[i]<<" ";
    int l=0;
    int r=n-1;
    int first,second;
    int flag=-1;
    for(int i=0;i<n-1;i++){
      for(int j=i+1;j<n;j++){
        if(abs(a[i]-a[j])==k){
          flag=0;
          break;
        }
      }
    }
    // while(l<n && r>=0){
    //   cout<<"l "<<l<<"r "<<r<<endl;
    //   if(abs(a[l]-a[r])==k){
    //     first=a[l];
    //     second=a[r];
    //     flag=0;
    //     break;
    //   }
    //   if(abs(a[l]-a[r])<k){
    //     l++;
    //   }
    //   else{
    //     r--;
    //   }
    // }
    if(flag==-1){
      cout<<-1<<endl;
    }
    else{
      cout<<1<<endl;
    }

  }
}
