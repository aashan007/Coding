#include<bits/stdc++.h>

using namespace std;
int main(){

    int n;
    cin>>n;
    int m=n;
    int count0=0,count1=0;
    while(n--){
        int l,r;
        cin>>l>>r;
        if(l==0){
            count0++;
        }
        if(!r){
            count1++;
        }

    }
    int result=min(count0,m-count0)+min(count1,m-count1);
    cout<<result;
}