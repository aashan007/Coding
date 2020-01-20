#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[7];
    for(int i=0;i<7;i++){
        cin>>a[i];
    }
    long long  total=0;
    int index=0;
    while(total<n){
        total=total+a[index];
        index = (index + 1 )%7;


    }
    if(index==0){
        index=7;
    }
    cout<<index;
}