#include<bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin>>n;
  int * prices=new int[n];
  for(int i=0;i<n;i++){
    cin>>prices[i];

  }
  int total=0;
  int currenIndex=prices[0];
  int currentPrice;
  int previousPrice;
  int flag=0;
  currentPrice=prices[0];
  previousPrice=prices[0];

  for(int i=1;i<n;i++){
    currentPrice=prices[i];
    // cout<<"previousPrice "<<previousPrice<<" currentPrice "<<currentPrice<<" total "<<total<<endl;
    if(previousPrice<currentPrice ){
      total=total+(currentPrice-previousPrice);
      previousPrice=currentPrice;



    }
    else{
      previousPrice=currentPrice;
    }





  }
  cout<<total<<endl;
}
