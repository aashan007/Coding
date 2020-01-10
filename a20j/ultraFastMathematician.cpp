#include<bits/stdc++.h>
using namespace std;

string result(string m,string n){
    int sizeM=m.size();
    int sizeN=n.size();
    for(int i=0;i<sizeM;i++){
        if(m[i]=='1' && n[i]=='1'){
            m[i]='0';
        }
        else{
            if(m[i]=='1' || n[i]=='1'){
                m[i]='1';
            }
            else{
                m[i]='0';
            }
        }
    }
    return m;
    

}
int main(){
    string m,n,res;
    cin>>m>>n;
    //cout<<m<<n;
    cout<<result(m,n);
    
}