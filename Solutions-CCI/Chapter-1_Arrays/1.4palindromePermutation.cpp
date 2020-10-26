#include<bits/stdc++.h>
#include<unordered_map>

using namespace std;


string palindrome(string st){
    unordered_map<char,int> mp;

    for(int i=0;i<st.size();i++){
        if(st[i]!=' '){
            mp[st[i]]++;
        }
    }
    int odd=0;
    for(auto it=mp.begin();it!=mp.end();++it){
        if(it->second%2==1){
            odd++;
        }
    }
    if(odd<=1){
        return "True";
    }
    else{
        return "False";
    }
}
int main(){
    
        string st;
        getline(cin,st);
        cout<<palindrome(st);
    
}