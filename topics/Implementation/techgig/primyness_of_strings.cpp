#include<bits/stdc++.h>

using namespace std;

int subsequence(string s,string output[]){

  if(s.size()==0){
    output[0]="";
    return 1;
  }
  string smallString=s.substr(1);
  int smallOutputsize=subsequence(smallString,output);
  for(int i=0;i<smallOutputsize;i++){
    output[i+smallOutputsize]=s[0]+output[i];
  }


  return 2*smallOutputsize;


}

int makeSieve(int n,string * output,int res){

  bool isPrime[n+1];
  for(int i=0;i<=n;i++){
    isPrime[i]=true;
  }
  isPrime[0]=false;
  isPrime[1]=false;

  for(int i=2;i*i<=n;i++){
    if(isPrime[i]==true){
      for(int j=i*i;j<=n;j+=i){
        isPrime[j]=false;
      }
    }

  }
int count=0;
  for(int i=0;i<res;i++){
      int temp;
    istringstream ( output[i] ) >> temp;
    // string f=output[i];
// cout<<temp<<" "<<isPrime[temp]<<" "<<endl;
    if(isPrime[temp]==true){
      count++;
    }
  }
  return count;
}




int main(){
  string s;
  cin>>s;
  string* output=new string[1000];


  int res=subsequence(s,output);
  // for(int i=0;i<res;i++){
  //   cout<<output[i]<<endl;
  // }
  int N=stoi(s);
  int count=makeSieve(N,output,res);
  cout<<count<<endl;




delete []output;

  return 0;
}
