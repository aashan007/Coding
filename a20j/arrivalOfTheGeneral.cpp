#include<bits/stdc++.h>
using namespace std;

int findMin(int *a,int n){
    int min=INT_MAX;
    int index;
    for(int i=n-1;i>=0;i--){
        if(min>a[i] ){
            //cout<<a[i]<<" ";
            min=a[i];
            index=i;
        }
        //cout<<min<<" "<<a[i]<<endl;
    }
    //cout<<endl;
    return index;
}
int max=-1;
int findMax(int *a,int n){
    int max=INT_MIN;
    int index;
    for(int i=0;i<n;i++){
        if(max<a[i] ){
            //cout<<"count "<<max<<" "<<a[i]<<" ";
            max=a[i];
            index=i;
        }
    }
    return index;
}

int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int findMinI=findMin(a,n);
    int findMaxJ=findMax(a,n);
   // cout<<findMinI<<" "<<findMaxJ<<endl;
    if(findMinI>findMaxJ){
        cout<<(n-1-findMinI + findMaxJ);
    }
    else{
        cout<<(n-1-findMinI + findMaxJ)-1;
    }
}