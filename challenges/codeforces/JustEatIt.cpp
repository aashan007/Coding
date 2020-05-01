#include<bits/stdc++.h>
using namespace std;

long long findMax(int * dp,int n,int * temp){
    if(n==dp.size()){
        long long sum=0;
        for(int i=0;i<dp.size();i++){
            if(temp[i]){
                sum=sum+dp[i];
            }
        }
        return sum;
        
    }

    temp[n]=1;

    temp[n]=0;
    
    //int result=max(dp[0],max(dp[0]+findMax(dp+1,n-1)))
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int *dp=new int[n];
        int *temp=new int[n];
        for(int i=0;i<n;i++){
            temp[i]=0;
        }
        for(int i=0;i<n;i++){
            cin>>dp[i];
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+dp[i];

        }
        int result=findMax(dp,n,temp);

    }
}