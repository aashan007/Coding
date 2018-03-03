#include<bits/stdc++.h>

using namespace std;

void max_heapify(int * a,int i,int n){
  int left=2*i;
  int right=2*i+1;
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


void build_maxHeap(int * a,int n){
  for(int i=n/2;i>=1;i--){
    max_heapify(a,i,n);
    // for(int i=1;i<=n;i++){
    //   cout<<a[i]<<" ";
    // }
    // cout<<endl;
  }



}


void heap_sort(int * a,int i,int n){
  int heap_size=n;
  build_maxHeap(a,n);
  for(int i=n;i>=2;i--){
    swap(a[1],a[i]);
    heap_size--;
    max_heapify(a,1,heap_size);
  }
}


int main(){
  int n;
  cin>>n;
  int a[n+1];
  for(int i=1;i<=n;i++)
  cin>>a[i];
  heap_sort(a,1,n);
  for(int i=n;i>=1;i--){
    cout<<a[i]<<" ";
  }
  cout<<endl;
}
