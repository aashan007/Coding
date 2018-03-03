#include<bits/stdc++.h>

using namespace std;


int main(){
  int n,k,diff=INT_MAX,res;
  cin>>n>>k;
  int a[n],b[n];
for(int i=0;i<n;i++){
  cin>>a[i];
}

for(int i=0;i<n;i++){
  cin>>b[i];
}
int l=0;
int r=n-1;
while(l<n && r>=0){
  if(abs(a[l]+b[r]-k)<diff){
    diff=abs(a[l]+b[r]-k);
    res=a[l]+b[r];
  }

  if(a[l]+b[r]<k){
    l++;
  }
  else{
    r--;
  }
}
cout<<res<<endl;
}
