#include <iostream>
using namespace std;

int is_attacked(int n,int x,int y,int a[n][n]){
    for(int i=0;i<n;i++){
        if(a[x][i]==1){
            return true;
        }
    }
    for(int i=0;i<n;i++){
        if(a[i][y]==1){
            return true;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i+j)==(x+y)){
                return true;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i-j)==(x-y)){
                return true;
            }
        }
    }
    return false;
}

int n_queen(int n,int a[n][n]){
    if(n==0){
        return true;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(is_attacked(n,i,j,a[n][n])){
                
            }
            a[i][j]=1;
            if(n_queen(n-1,a)){
                return true;
            }
            a[i][j]=0;
        }
    }
    return false;
}



int main()
{
    int n;
    cin>>n;
    int a[n][n];
    n_queen(n,a[n][n]);
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
