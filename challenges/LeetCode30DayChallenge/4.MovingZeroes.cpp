#include<bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) {
        int j=0;
        int temp;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[j]=nums[i];
                j++;
            }
        }
        while(j<nums.size()){
            nums[j]=0;
            j++;
        }
        
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
            moveZeroes(nums);
             for(int i=0;i<n;i++){
                //int temp;
                //cin>>temp;
                //nums.push_back(temp);
                cout<<nums[i]<<" ";
            }
        }
    }