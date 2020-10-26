//isUnique

//Implement an algorithm to determine if a string has all unique characters.
//What if you cannot yse additional data structures

#include<bits/stdc++.h>

using namespace std;

int mp[256];


 
int main(){
    for(int i=0;i<256;i++){
    mp[i]=0;
}
    string str;
    cin>>str;
    int result1 = true,result2=true;
    for(int i=0;i<str.size();i++){
        mp[str[i]]++;
        if(mp[str[i]]>1){
            result1 = false;
            break;
        }
    }
    sort(str.begin(),str.end());
    for(int i=1;i<str.size();i++){
        if(str[i]==str[i-1]){
            result2=false;
            break;
        }
    }
    cout<<result1<<""<<result2<<endl;
}
