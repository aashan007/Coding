#include<bits/stdc++.h>
using namespace std;

int countTot(string s,int n){
    if(n<=1){
        return 0;
    }
    if(s[0]==s[1]){
        return 1+countTot(s.substr(1),n-1);

    }
    else{
        return countTot(s.substr(1),n-1);
    }

}


int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count = countTot(s,n);
    cout<<count;



}