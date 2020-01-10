#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    m=n;
    double avg=0;
    double temp;
    while(m--){
        cin>>temp;
        avg=avg+temp;
    }
    double result=(avg/n);
    cout<<result;
    //cout<<avg<<(avg/n*100.0)*100.0;
}