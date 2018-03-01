#include<bits/stdc++.h>
using namespace std;

int power_sum(int x,int n,int *num,int limit){
  // cout<<"X "<<x<<" N "<<n<<" count "<<limit<<" num "<<num[0]<<endl;
  if(x<0){
    // cout<<"x less than 0"<<endl;
    return 0;

  }
  if(x==0){
    // cout<<"x is equal to 0"<<endl;
    return 1;

  }
  if(limit==0){
    // cout<<"limit is equal to zero"<<endl;
    return 0;
  }
  int pro=1;
  for(int i=0;i<n;i++){
    pro=pro*num[0];
  }
  // cout<<"pro"<<pro<<endl;
  int first=power_sum(x-pro,n,num+1,limit-1);
  int second=power_sum(x,n,num+1,limit-1);
  return first+second;

}


int main(){
  int X,N;
  cin>>X>>N;
  int * num=new int[X];
  int count=0;
  for(int i=1;i*i<=X;i++){
    num[i]=i;
    count++;
  }
  // cout<<"X "<<X<<" N"<<N<<" count "<<count<<endl;

int result;
   result=power_sum(X,N,num+1,count);
  cout<<result<<endl;
}
