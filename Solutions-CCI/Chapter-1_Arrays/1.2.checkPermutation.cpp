#include<bits/stdc++.h>
#include <unordered_map>

using namespace std;

int main(){
    string str1,str2;
    cin>>str1>>str2;
    unordered_map<char,int> mp;
    if(str1.size()!=str2.size()){
        cout<<"Not a permutation";
    }
    else{
         for(int i=0;i<str1.size();i++){
             mp[str1[i]]++;
             mp[str2[i]]--;
    }
    int flag =0;
    for(auto it = mp.begin();it!=mp.end();it++){
        if(it->second!=0){
            flag=1;
            break;
        }

    }
    if(flag){
        cout<<"Not a permutation";
    }
    else{
        cout<<"Permutation";
    }
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());


    if(str1==str2){
        cout<<endl<<"Permutation"<<endl;

    }
    else{
        cout<<" Not a permutation";
    }

    }
   
}