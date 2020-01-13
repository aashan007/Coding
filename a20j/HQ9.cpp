#include<bits/stdc++.h>
using namespace std;


int main(){
    string s;
    cin>>s;
    bool flag=false;
    for(int i=0;i<s.size();i++){
        //cout<<s[i]<<" ";
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9' || s[i]=='+'){
            flag=true;
            break;
        } 
    }
    if(flag){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
