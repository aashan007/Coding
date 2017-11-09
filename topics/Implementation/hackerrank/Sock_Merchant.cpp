#include <iostream>
#include <unordered_map>
#include<vector>
using namespace std;

int main(){
  unordered_map<int,int>u;
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
    u[a[i]]=0;
    }
    for(int i=0;i<n;i++){
      u[a[i]]++;

    }
    vector <int> b;
    for ( const auto &myPair : u ) {


        b.push_back(myPair.first);
    }
    int count=0;
    for(int i=0;i<b.size();i++){
      count=count+u[b[i]]/2;

    }
    cout<<count;

}
