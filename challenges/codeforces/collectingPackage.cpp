#include<bits/stdc++.h>
using namespace std;

string returnRes(int * a,int *b,int t){
    if(t){
        return "";
    }
    for(int i=0;i<)
}


int main(){
    int n;
    cin>>n;
    while(n--){
        int t;
        cin>>t;
        int a[t],b[t];
        
        for(int i=0;i<t;i++){
            cin>>a[i]>>b[i];
        }
        for(int i=0;i<t;i++){
            for(int j=i+1;j<t;j++){
                if(a[i]>a[j]){
                    int temp1=a[i];
                    int temp2=b[j];
                    a[i]=a[j];
                    b[i]=b[j];
                    a[j]=temp1;
                    b[j]=temp2;
                }
            }
        }
        
        string str = returnRes(a,b,t);
        for(int i=0;i<t;i++){
            cout<<a[i]<<" "<<b[i]<<endl;
        }
    }
}

//MEX Maxmising