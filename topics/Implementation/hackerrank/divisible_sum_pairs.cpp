#include<iostream>
using namespace std;

int main(){
  int n,k;
  int count=0;
  cin>>n>>k;
  int a[n];
  for(int i=0;i<n;i++){
      cin>>a[i];
  }
  for(int i=0;i<n-1;i++)
  {
    for(int j=i+1;j<n;j++){
      int n;
      n=a[i]+a[j];
      if(n%k==0){
        count++;
      }
    }
  }
  cout<<count;
}
