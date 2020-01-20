#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        a[i]=ceil((float)a[i]/m);
        

    }
    int maxIndex;
    int max=INT_MIN;
    for(int i=n-1;i>=0;i--){
        if(a[i]>max){
            max=a[i];
            maxIndex=i;
        }
    }
    cout<<maxIndex+1;
}