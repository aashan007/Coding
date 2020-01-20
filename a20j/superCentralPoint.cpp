#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[2][n];
    for(int i=0;i<n;i++){
        cin>>a[0][i];
        cin>>a[1][i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        int b[4];
        b[0]=0,b[1]=0,b[2]=0,b[3]=0;
        for(int j=0;j<n;j++){
            
            
            if((a[0][i]>a[0][j]) && (a[1][i]==a[1][j]) && !b[0]){
                b[0]=1;
            }
            else if((a[0][i]<a[0][j]) && (a[1][i]==a[1][j]) && !b[1]){
                b[1]=1;
            }
            else if((a[0][i]==a[0][j]) && (a[1][i]>a[1][j]) && !b[2]){
                b[2]=1;
            }
            else if((a[0][i]==a[0][j]) && (a[1][i]<a[1][j]) && !b[3]){
                b[3]=1;
            }

        }
        if(b[0] && b[1] && b[2] && b[3]){
            count++;
        }
    }
    cout<<count;
}