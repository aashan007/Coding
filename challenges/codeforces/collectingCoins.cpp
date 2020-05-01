#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    long long total = a+b+c+d;
    if( (total%3==0) && (total/3)>=a && (total/3)>=b && (total/3)>=c){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }


    }

}