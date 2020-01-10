#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>a[i][j];
        }
    }
    int res=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(a[i][j]){
                res=abs(i-2)+abs(j-2);
                break;
            }
        }
        if(res){
            break;
        }
    }
    cout<<res<<endl;
}