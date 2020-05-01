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
    vector <int> s;
    int n;
    cin>>n;
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        s.push_back(temp);
    }
    int result = maxSubArray(s);
    cout<<result;



}
