#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        unordered_map<int,int> mp;
        int n;
        cin>>n;
        int temp;
        for(int i=0;i<n;i++){
            cin>>temp;
            mp[temp]=1;
        }
        queue<int> q;
        int min1=n+1;
        int max1=-1;
        //unordered_map<int,int>:: iterator it;
        for(auto it=mp.begin();it!=mp.end();++it){
            int count=0;
           // cout<<it->first<<" "<<it->second<<endl;
            if(it->second==1){
               // count++;
                q.push(it->first);
                it->second=0;

                while(!q.empty()){
                    count++;
                    int val = q.front();
                    q.pop();
                    if(mp.count(val+1)>0 && mp[val+1]){
                        q.push(val+1);
                        mp[val+1]=0;
                    }
                    if(mp.count(val+2)>0 && mp[val+2]){
                        q.push(val+2);
                        mp[val+2]=0;
                    }
                    if(mp.count(val-2)>0 && mp[val-2]){
                        q.push(val-2);
                        mp[val-2]=0;
                    }
                    if(mp.count(val-1)>0 && mp[val-1]){
                        q.push(val-1);
                        mp[val-1]=0;
                    }
                 //   cout<<mp[val+1]<<" "<<mp[val+2]<<endl;


                }
            }
            if(count!=0){
                min1=min(min1,count);
                max1=max(max1,count);
            }

        }
        cout<<min1<<" "<<max1<<endl;

    }
}