#include<bits/stdc++.h>
using namespace std;


int main(){
  int t;
  cin>>t;
  while(t--){
    long long n;
    cin>>n;
    long long total=0;


      for(int i=1;3*i<n ;i++)
      {
      total=total+(i*3);
      }
      for(int i=1;5*i<n ;i++)
      {
      total=total+(i*5);
      }
      for(int i=1;3*5*i<n ;i++)
      {
      total=total-(i*3*5);
      }
    
    cout<<total<<endl;
  }
}
