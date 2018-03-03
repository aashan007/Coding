#include<bits/stdc++.h>

using namespace std;


void max_heapify(int *a,int i,int n){
  int left=2*i;
  int right=left+1;
  int largest;
  if(left<=n && a[left]>a[i]){
    largest=left;
  }
  else{
    largest=i;
  }

  if(right<=n && a[right]>a[largest]){
    largest=right;
  }

  if(largest!=i){
    swap(a[i],a[largest]);
    max_heapify(a,largest,n);
  }
}


void build_heap(int *a,int n){

  for(int i=n/2;i>=1;i--){
    max_heapify(a,i,n);
  }
}

int extract_num(int *a,int n){
  if(n==0){
    return -1;
  }
  int max=a[1];
  a[1]=a[n];
  n--;
  max_heapify(a,1,n);
  return max;
}

int main(){
  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    int a[n+1];
    for(int i=1;i<=n;i++)
    cin>>a[i];
    build_heap(a,n);
    for(int i=0;i<k;i++){
      int val=extract_num(a,n-i);
      cout<<val<<" "<<endl;
    }


  }
}
