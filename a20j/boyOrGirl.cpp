#include<bits/stdc++.h>

using namespace std;

int main(){
    unordered_map<int,int> mp;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;

    }
    int res=mp.size();
    if(res%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
    
}