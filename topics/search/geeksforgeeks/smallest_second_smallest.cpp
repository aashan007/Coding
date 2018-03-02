#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--){
    int n,flag=0 ;
    int smallestFirst=INT_MAX;
    int secondSmallest=INT_MAX;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }

    for(int i=0;i<n;i++){
      if(smallestFirst>a[i]){
        smallestFirst=a[i];
      }
    }
    for(int i=0;i<n;i++){
      if(secondSmallest>a[i]){
        if(a[i]!=smallestFirst){
          secondSmallest=a[i];
          flag=1;
        }

      }
    }
    if(!flag){
      cout<<-1<<endl;
    }
    else{
      cout<<smallestFirst<<" "<<secondSmallest<<endl;
    }
  }
}
