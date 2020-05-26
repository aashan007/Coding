#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> temp;
        vector<int>exact;
        for(int i=0;i<n;i++){
            int temp1;
            cin>>temp1;
            temp.push_back(temp1);
            exact.push_back(temp1);
        }
        sort(exact.begin(),exact.end());
        
    }
}