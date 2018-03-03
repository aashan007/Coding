#include<bits/stdc++.h>

using namespace std;

void max_heap(int * a,int i,int n){
  int left=2*i;
  int right=2*i+1;
  int largest;
  if(left<=n && a[left]>a[i]){
    largest=left;
  }
  else{
    largest=i;
  }

  if(right<=n && a[right]>a[i]){
    largest=right;
  }
  if(largest!=i){
    swap(a[i],a[largest]);
    max_heap(a,largest,n);
  }

}

int main(){
  int n;
  cin>>n;
  int a[n+1];
  for(int i=1;i<=n;i++)
  cin>>a[i];
  max_heap(a,1,n);
  for(int i=1;i<=n;i++)
  cout<<a[i]<<endl;
}
