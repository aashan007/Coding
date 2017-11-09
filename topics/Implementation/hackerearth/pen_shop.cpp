#include <iostream>
#include <string>

using namespace std;

int main(){
  string b;
  int p=0;
  string str2="p++";
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>b;
    if(b.compare("p++")==0 || b.compare("++p")==0){
      ++p;
      a[i]=p;

    }
    else if(b.compare("p--")==0 || b.compare("--p")==0){
      p--;
      a[i]=p;

    }
    else{
      if(b.compare("p=0")==0)
      p=0;
      a[i]=p;

    }

  }
  for(int i=0;i<n;i++){
    cout<<a[i]<<endl;
  }
}
