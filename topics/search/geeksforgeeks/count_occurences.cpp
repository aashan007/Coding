#include<bits/stdc++.h>

using namespace std;

int first(int *a,int start,int end,int val,int n){
  if(end>=start){
    int mid=(start+end)/2;
    // cout<<mid<<" "<<start<<" "<<end<<endl;
    if((mid==0 || a[mid-1]<val) && a[mid]==val){
      return mid;
    }
    else if(a[mid]>val || a[mid-1]==val){
      return first(a,start,mid-1,val,n);
    }
    else{
      return first(a,mid+1,end,val,n);
    }
return -1;
  }
}
int last(int *a,int start,int end,int val,int n){
  if(end>=start){
    int mid=(start+end)/2;
    // cout<<mid<<" "<<start<<" "<<end<<endl;
    if((mid==0 || a[mid+1]>val) && a[mid]==val){
      return mid;
    }
    else if(a[mid]>val){
      return last(a,start,mid-1,val,n);
    }
    else{
      return last(a,mid+1,end,val,n);
    }
return -1;
  }
}

int count(int *a,int end,int val){

  int i;
  int j;

  i=first(a,0,end-1,val,end);

  if(i==-1){
    return i;
  }
  j=last(a,0,end-1,val,end);
// cout<<i<<" "<<j<<endl;
  return j-i+1;


}




int main(){
  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    int res=count(a,n,k);
    cout<<res<<endl;

  }
}
