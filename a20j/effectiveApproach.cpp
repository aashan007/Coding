#include<bits/stdc++.h>
using namespace std;

int returnNum(vector <int> a,int temp){
    
        for(int i=0;i<a.size();i++){
            if(a[i]==temp){
                return i+1;
            }
        }

        return 0;
    
    
}

int main(){
    int n;
    cin>>n;
    vector<int> a;
    unordered_map<int,int> mp;
   // int *a=new int[n];
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        mp[temp]=i+1;
      //  a.push_back(temp);
    }
    long long q;
    cin>>q;
    long long countA=0;
    long long countB=0;
    while(q--){
        long long temp;
        cin>>temp;
       // int val=returnNum(a,temp);
        countA=countA + mp[temp];
        countB=countB + (n+1-mp[temp]);
       // cout<<returnNum(a,temp)<<" "<<(n+1-val)<<"\n";

    }
    cout<<countA<<" "<<countB;


   // delete a;
}