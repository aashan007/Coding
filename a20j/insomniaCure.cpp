#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,l,m,n;
    cin>>k>>l>>m>>n;
    int size;
    cin>>size;
    int * a=new int[size+1];
    for(int i=1;i<=size;i++){
        a[i]=0;
    }
    int i=k;
    while(i<=size){
        a[i]++;
        i=i+k;
        
    }
    i=l;
    while(i<=size){
        a[i]++;
        i=i+l;
        
    }
    i=m;
    while(i<=size){
        a[i]++;
        i=i+m;
        
    }
    i=n;
    while(i<=size){
        a[i]++;
        i=i+n;
        
    }
    int count=0;
    for(int i=1;i<=size;i++){
       // cout<<a[i]<<" ";
        if(a[i]==0){
            count++;
        }
    }

   // cout<<endl;
    cout<<size-count;

    

    delete a;
}