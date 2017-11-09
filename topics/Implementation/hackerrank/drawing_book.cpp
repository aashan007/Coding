#include<iostream>
using namespace std;

int main(){
  int n,q;
  cin>>n;
  cin>>q;
  if(n%2==0){
    if(q<=n/2){
      cout<<q/2;
    }
    else{
      cout<<((n/2)-(q/2));
    }
  }
    else{
      if(q<(n/2)+1){
        cout<<q/2;

      }
      else{
        cout<<((n/2)-(q/2));
      }
    }
  }
