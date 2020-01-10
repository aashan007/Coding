#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[26]={0};
    int b[26]={0};
    string s1,s2,s3;
    cin>>s1>>s2>>s3;

    for(int i=0;i<s1.size();i++){
        a[s1[i]-'A']++;
    }
    for(int i=0;i<s2.size();i++){
        a[s2[i]-'A']++;
    }

    for(int i=0;i<s3.size();i++){
        b[s3[i]-'A']++;
    }
    bool flag=true;
    // for(int i=0;i<26;i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    // for(int i=0;i<26;i++){
    //     cout<<b[i]<<" ";
    // }
    for(int i=0;i<26;i++){
        // cout<<a[i]<<" "<<b[i]<<endl;
         if(a[i]!=b[i]){
            flag=false;
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