#include<bits/stdc++.h>


using namespace std;

int binary_search(int *a,int start,int end){
  while(start<=end){
      int mid=(start+end)/2;
      // cout<<start<<" "<<end<<" "<<mid<<endl;
      if(a[mid]==mid+1){

        return mid+1;
      }
      if(a[mid]>mid+1){
      return binary_search(a,start,mid-1);
    }
    else{
      return binary_search(a,mid+1,end);
}


  }
  return -1;


}


int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    int res=binary_search(a,0,n);

    cout<<res<<endl;
  }
}
