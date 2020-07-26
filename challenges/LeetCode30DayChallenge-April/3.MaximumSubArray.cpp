#include<bits/stdc++.h>
using namespace std;
int maxSubArray(vector<int>& nums) {
        long long res=-2147483647;
        for(int i=0;i<nums.size();i++){
            int val=nums[i];
            int j=i;
            int temp=0;
            
            while(j>=0){
                temp=temp+nums[j];
                if(val<temp){
                    val=temp;
                }
                
                j--;
            }
            if(res<val){
                res=val;
            }
            
        }
        
        return res;
        
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

            return maxSubArray(nums);
        }
    }

