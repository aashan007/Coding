#include<bits/stdc++.h>
using namespace std;
bool checkTrue(int n){
    int a[10];
    for(int i=0;i<10;i++){
        a[i]=0;
    }
    int count=0;
    while(n){
        a[n%10]++;
        n=n/10;
        count++;
       // Bea    cout<<n<<endl;
    }
    bool flag=true;
    for(int i=0;i<10;i++){
        if(a[i]>=2){
            flag=false;
            break;
        }
    }
    if(count!=4){
        flag=false;
    }
    return flag;
}


int main(){
    int n;
    cin>>n;
    //int a[10];
    int i=n+1;
    for(;i<=10000;i++){
        //cout<<i<<endl;
        if(checkTrue(i)){
            cout<<i;
            break;
        }
    }
}