#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53};
    int m,n;
    cin>>m>>n;
    bool flag=1;
    for(int i=0;i<16;i++){
        if(a[i]==m && a[i+1]==n){
            cout<<"YES";
            flag=0;
            break;
        }
       
    }
     if(flag){
            cout<<"NO";
        }

}