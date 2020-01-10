#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    char s[n];
    cin>>s;
    while(t--){
        for(int i=0;i<n-1;i++){
            char ch;
            if(s[i]=='B' && s[i+1]=='G'){
                ch=s[i];
                s[i]=s[i+1];
                s[i+1]=ch;
                i++;
            }
        }
    }

    cout<<s<<endl;

}