#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        int a[26];
        for(int i=0;i<26;i++){
            a[i]=0;
        }
        for(int i=0;i<s.size();i++){
            char c=s[i];
            a[s[i]-'a']++;

        }
        while(q--){
            int temp;
            cin>>temp;
            int count=0;
            for(int i=0;i<26;i++){
                if(a[i]>temp){
                    count+=a[i]-temp;
                }
            }
            cout<<count<<endl;
        }
    }
}