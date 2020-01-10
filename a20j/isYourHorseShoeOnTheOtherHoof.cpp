#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<long,int> mp;
    long a[4];
    int p=3;
    for(int i=0;i<4;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    // for(int i=0;i<4;i++){
    //     cout<<i<<" "<<a[i]<<endl;

    // }
    cout<<(4-mp.size());


}