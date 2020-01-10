#include<bits/stdc++.h>
using namespace std;
int main(){
 
    string s;
    cin>>s;
    int a[4];
    for(int i=0;i<4;i++){
        a[i]=0;
    }
    int count=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            a[1]++;
            count++;
        }
        if(s[i]=='2'){
            a[2]++;
            count++;
        }
        if(s[i]=='3'){
            a[3]++;
            count++;
        }
    }
    count--;
    // for(int i=0;i<4;i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    for(int i=1;i<4;i++){
        while(a[i]--){
            cout<<i;
            if(count--){
                cout<<"+";
            }
        }

    }

}