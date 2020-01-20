#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a=0;
    int m=n;
    while(n){
        int temp;
        cin>>temp;
        a=a+temp;
        n-=1;

    }
    int count=0;
    for(int i=1;i<6;i++){
        if((a+i)%(m+1)!=1){
            count++;
        }

    }
    cout<<count;
}