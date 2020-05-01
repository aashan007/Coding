#include<bits/stdc++.h>
using namespace std;
int main(){
    long n;
    cin>>n;
    unordered_map<char,int> mp;
    string s;
    int countL=0,countR=0;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='L'){
            countL++;
        }
        else{
            countR++;
        }
    }

    cout<<countR+countL+1;
}