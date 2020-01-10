#include<bits/stdc++.h>
using namespace std;


int main(){
    map<string,int> mp;
    mp["."]=0;
    mp["-."]=1;
    mp["--"]=2;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='.'){
            cout<<mp["."];
        }
        else if(s[i]=='-' && s[i+1]=='.'){
                cout<<mp["-."];
                i++;
            }
            else{
                cout<<mp["--"];
                i++;
            }
        }
    }
