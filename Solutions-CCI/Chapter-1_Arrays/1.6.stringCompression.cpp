#include<bits/stdc++.h>
#include<string>
using namespace std;


string compressedString(string st){
    if(st.size()==0){
        return "";
    }
    string result="";
    int i = 0;
    int j = 0;
    while(st[j]==st[i]){
        j++;
    }

    if((j-i) > 1){
        result+=st[i]+to_string(j-i)+ compressedString(st.substr(j));
    }
    else{
        result+=st[i]+compressedString(st.substr(j));
    }

    return result;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string st;
        cin>>st;
        cout<<compressedString(st);
    }
}