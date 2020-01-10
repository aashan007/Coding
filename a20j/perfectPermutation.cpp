#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n%2==1){
        cout<<-1;

    }
    else{
        int a[n];
        for(int i=0;i<n;i=i+2){
            a[i+1]=i+1;
            a[i]=i+2;
        }

        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }

    }

}