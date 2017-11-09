#include <iostream>
#include <algorithm>

using namespace std;


int main(){
  long long int n,i;
  int m;
  cin>>n;
  int birds[n];
  int a[7];
  for(int j=0;j<7;j++){
    a[j]=0;
  }
  for( i=0;i<n;i++){
    cin>>birds[i];
    m=birds[i];
    a[m]++;

  }
  for(int i=0;i<7;i++){

  }
  n=*max_element(a,a+7);
  for(int i=0;i<7;i++){
  
    if(a[i]==n){
      cout<<i;
      break;
    }
  }



}
