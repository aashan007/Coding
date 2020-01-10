#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int x0=0,y0=0,z0=0;
    while(t--){
        int t1,t2,t3;
        cin>>t1>>t2>>t3;
        x0+=t1;
        y0+=t2;
        z0+=t3;

    }
    if(!x0 && !y0 && !z0){
        cout<<"YES"<<endl;

    }
    else{
        cout<<"NO"<<endl;
    }
}