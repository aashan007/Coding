#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    
    cin>>t;
    while(t--){
        int n;
        cout<<"number of pairs\n";
        cin>>n;
        int a[n][2];
        int b[n][2];
        int flag=0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<2;j++){
                cin>>a[i][j];


            }
            b[i][0]=a[i][1];
            b[i][1]=a[i][0];
            // cout<<a[i][0]<<" "<<a[i][1]<<" "<<b[i][0]<<" "<<b[i][1]<<" ";
        }
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                // cout<<b[i][j]<<" "<<a[i][j]<<endl;
                
                if(b[j][0]==a[i][0] && b[j][1]==a[i][1])
                    {
                        // cout<<"true";
                        flag=1;
                    }
                    
            }
            if(flag==1){
                cout<<a[i][0]<<" "<<a[i][1]<<" "<<b[i][0]<<" "<<b[i][1]<<endl;
                flag=0;
            }
        }

    }
}