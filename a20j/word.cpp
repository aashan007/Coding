#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<s.size();i++){
        if(s[i]<97){
            count++;
        }

    }
    //cout<<count<<" "<<s.size()-count;
    if(count>(s.size()-count)){
        for(int i=0;i<s.size();i++){
        if(s[i]>=97){
            s[i]=s[i]-32;
        }

    }


    }
    else{
        for(int i=0;i<s.size();i++){
        if(s[i]<97){
            s[i]=s[i]+32;
        }

    }
    }
    cout<<s;
}