#include <iostream>
using namespace std;

int  main(){
  int n,k;
  cin>>n>>k;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];

  }
  int value;
  cin>>value;
  int sum_actual=0;
  int sum_charged=0;
  for(int i=0;i<n;i++){
    if(i==k){
      sum_charged=sum_charged+a[i];
      continue;
    }
    sum_charged=sum_charged+a[i];
    sum_actual=sum_actual+a[i];
  }
  
  if(sum_actual/2==value){
    cout<<"Bon Appetit"<<endl;
  }
  else{
    sum_actual=sum_charged-sum_actual;
    cout<<sum_actual/2;
  }
}
