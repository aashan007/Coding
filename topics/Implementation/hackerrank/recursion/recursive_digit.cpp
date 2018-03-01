#include<bits/stdc++.h>
using namespace std;

int digitSum(string n,int k,int sum){
  if(n.empty()){
    // cout<<"empty"<<endl;
    return sum;
  }
  string s=n.substr(0,1);
  int a=stoi(s);
  // sum=sum+stoi(n[0]);
  sum=sum+a;
  if(sum>9){
    int a=sum/10;
    int b=sum%10;
    sum=a+b;
  }
  n=n.substr(1,n.size());
  // cout<<"s "<<s<<" a "<<a<<" sum "<<sum<<" n "<<n<<endl;
  return digitSum(n,k,sum);


}


int main(){
  string n;

  int k;
  cin>>n>>k;
  string n1=n;
  for(int i=0;2*i<k;i++){
    n1+=n;
  }
  int sum=0;
  int result=digitSum(n1,k,sum);
   cout<<result<<endl;

}
