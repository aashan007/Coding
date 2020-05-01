#include<bits/stdc++.h>
using namespace std;

int countElements(vector<int>& arr) {
        unordered_set<int> st;
        int count=0;
        for(int i=0;i<arr.size();i++){
            st.insert(arr[i]);
        }
        for(int i=0;i<arr.size();i++){
            if(st.count(arr[i]+1)>0){
                count++;
            }
        }
        return count;
        
    }

int main(){
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            vector<int> nums;
            for(int i=0;i<n;i++){
                int temp;
                cin>>temp;
                nums.push_back(temp);
            }
            cout<<countElements(nums);
        }
    }