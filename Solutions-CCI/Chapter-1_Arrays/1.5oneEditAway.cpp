#include<bits/stdc++.h>
using namespace std;

bool checkOneEdit(string st1,string st2,int edit){
    if(st1.size()==0 && st2.size()==0 && edit<=1){
        return true;
    }
    if(edit>1 || st1.size()==0 || st2.size()==0){
        return false;
    }
    if(st1[0]==st2[0]){
        return checkOneEdit(st1.substr(1),st2.substr(1),edit);
    }
    else{
        return checkOneEdit(st1.substr(1),st2,edit+1) || checkOneEdit(st1.substr(1),st2.substr(1),edit+1);

    }

}


int main(){
    int t;
    cin>>t;
    while(t--){
        string st1,st2;
        cin>>st1>>st2;
        cout<<checkOneEdit(st1,st2,0);
    }
}