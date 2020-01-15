#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int count=0;
    int a,b,c;
    cin>>n;
    
    while(n--){
        cin>>a>>b>>c;
        if((a+b+c)>=2){
            count++;
        }
    }
    cout<<count;
}