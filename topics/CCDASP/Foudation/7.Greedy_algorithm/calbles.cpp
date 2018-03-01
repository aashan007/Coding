#include<bits/stdc++.h>

using namespace std;


int main(){
  int n,k;
  cin>>n>>k;
 map<int,int> kk;
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
   map <int, int> :: iterator itr;

for(int i=1;i<n;i++){
  int val=a[i]-a[i-1];
  kk.insert(make_pair(val,1));
}
int f=0;
for (itr = kk.begin(); f<k; ++itr)
    {
        cout  <<  '\t' << itr->first
              << '\n';
              f=f+1;
    }




}
