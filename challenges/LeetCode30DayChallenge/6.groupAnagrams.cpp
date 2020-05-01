#include<bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector <vector<string>> result;
        unordered_map<string, vector <string> > mp;
        for(int i=0;i<strs.size();i++){
            string temp= strs[i];
            //cout<<sort(strs[i].begin(),strs[i].end());
            sort(temp.begin(),temp.end());
            cout<<temp;
            
            //    mp[temp].push_back(strs[i]);
            
            mp[temp].push_back(strs[i]);
            
        }
        //map<string,vector<string>>:: iterator it;
        //it = mp.begin();
        for(auto it=mp.begin();it!=mp.end();it++){
            result.push_back(it->second);
        }
        
        
        
        return result;
    }

    int main(){
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            vector<string> nums;
            for(int i=0;i<n;i++){
                string temp;
                cin>>temp;
                nums.push_back(temp);
            }
            vector<vector<string>> res = groupAnagrams(nums);

            for(int i=0;i<nums.size();i++){
                for(int j=0;j<nums[0].size();j++){
                    cout<<res[i][j]<<" ";
                }
                cout<<endl;
            }
        }
    }