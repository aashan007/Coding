#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
 int main(){
     int k;
     int a[]={4,3,6,4,6,5};
     cin>>k;
     sort(a,a+6);
     for(int i=0;i<5;i++){
         for(int j=1;j<6;j++){
             if(a[j]-a[i]==k){
                 cout<<a[i]<<" "<<a[j]<<endl;
             }
             else if(a[j]-a[i]>k){
                 break;
             }
         }
     }
 }