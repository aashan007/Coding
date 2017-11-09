#include <iostream>

using namespace std;

int main(){
  int a[6][6];

  int sum=0;

  for(int i=0;i<6;i++){
    for(int j=0;j<6;j++){
      cin>>a[i][j];

    }

  }
  sum=a[0][0]+a[0][1]+a[0][2]+a[1][1]+a[2][0]+a[2][1]+a[2][2];
  for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){


      temp=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];

      if(temp>sum){
        sum=temp;
      }
    }
  }
  cout<<sum;




}
