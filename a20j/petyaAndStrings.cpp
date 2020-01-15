#include<bits/stdc++.h>

using namespace std;

//convert everything to lower first
string returnToLower(string s){
    for(int i=0;i<s.size();i++){
        if(s[i]>=97){
            s[i]=s[i]-32;
        }
    }

    return s;
}


int main(){
    string s1,s2;
    cin>>s1>>s2;
    //bool flag=true;
    s1=returnToLower(s1);
    s2=returnToLower(s2);
    //cout<<s1<<" "<<s2<<endl;
    int flag=0;
    for(int i=0;i<s1.size();i++){
        if(s1[i]>s2[i]){
            flag=1;
            break;
        }
        else if(s1[i]<s2[i]){
            flag=-1;
            break;
        }
    }
    cout<<flag;

}