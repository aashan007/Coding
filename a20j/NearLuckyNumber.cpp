#include<bits/stdc++.h>
using namespace std;


int countDig(long long n){
    int res=0;
    while(n){
        int temp=n%10;
        if(temp==7 || temp==4){
            res++;
        }
        n=n/10;
    }
    return res;
}
int main(){
    long long n;
    cin>>n;
    int countDigit=countDig(n);
    if(countDigit==4 || countDigit==7){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

}