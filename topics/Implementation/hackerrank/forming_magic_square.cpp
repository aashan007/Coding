#include<iostream>
#include<math>

using namespace std;

int main(){
  int a[3][3];
  int sum=0;
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cin>>a[i][j];
    }
  }
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){

      if(i+j<=2){
        if(i==j){
        if(a[i][j]==5){
          continue;
        }
        sum=sum+abs(a[i][j]-5);

      }
      if(a[i][j]==4){
      if(a[abs(2-i)][abs(2-j)]==6){
        continue;
      }
      else{
        sum=sum+abs(a[i][j]-6)
      }
      }




    }

    }
  }
}
