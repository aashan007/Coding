#include<iostream>

using namespace std;

int main(){
  int s,m,n;
  cin>>s>>m>>n;
  int a[m],b[n];
  for(int i=0;i<m;i++){
    cin>>a[i];

  }
  for(int i=0;i<n;i++){
    cin>>b[i];

  }
  int max=0,sum=0,flag=false;

  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      sum=a[i]+b[j];
      
      if(sum<=s){
        if(sum>=max){
        max=sum;}
        flag=true;

      }
    }
  }
  if(flag==true){
    cout<<max;
  }
  else{
    cout<<-1;
  }
}
