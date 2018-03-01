#include<bits/stdc++.h>
using namespace std;

int recursive(int * num,int n,int m,int ** output){
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }
    if(m==0){
        return 0;
    }
    if(output[n][m]>-1){
        return output[n][m];
    }
    int first=recursive(num,n-num[0],m,output);
    int second=recursive(num+1,n,m-1,output);
    output[n][m]=first+second;

    return first+second;


    
    


}


int main(){
    int n,m;
    cin>>n>>m;
    int *num=new int[m];
    for(int i=0;i<m;i++){
        cin>>num[i];
    }
    int **output=new int*[n+1];
    for(int i=0;i<n+1;i++){
        output[i]=new int[m+1];
        for(int j=0;j<m+1;j++){
            output[i][j]=-1;
        }
    }
   

for(int i=0;i<n;i++)
for(int j=0;j<m;j++)

    
     int result=recursive(num,n,m,output);

     cout<<result;

}