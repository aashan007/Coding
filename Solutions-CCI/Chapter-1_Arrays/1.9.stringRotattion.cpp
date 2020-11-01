#include<bits/stdc++.h>

using namespace std;


string isSubstring(string s1,string s2){
    if(s1.size()==0 && s2.size()==0){
        return "True";
    }
    if(s1.size()==0 || s2.size()==0){
        return "False";
    }
    s2=s2+s2;
    int leftPtr = 0;
    int s2Ptr = 0;
    int n=s1.size();
    while(leftPtr<n && s2Ptr<s2.size()){
        if(s1[leftPtr]==s2[s2Ptr]){
            leftPtr++;
            
        }
        else{
            leftPtr = 0;
        }
        s2Ptr++;

    }
    if(leftPtr==n){
        return "True";
    }
    else{
        return "False";
    }

}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    cout<<isSubstring(s1,s2);
}