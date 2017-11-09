#include<iostream>
#include<string>
using namespace std;

int main(){
  int n;
  cin>>n;
  string a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int q;
  cin>>q;
  string b[q];
  int count[q];
  for(int i=0;i<q;i++){
    count[i]=0;
  }
  for(int i=0;i<q;i++){
    cin>>b[i];
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<q;j++){
    if(a[i]==b[j]){
      count[j]++;
    }
    }

  }
  for(int i=0;i<q;i++){
    cout<<count[i]<<endl;
  }
}
