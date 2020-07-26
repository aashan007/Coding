#include<bits/stdc++.h>
using namespace std;

int max(int a,int b){
        if(a>b){
            return a;
        }
        return b;
    }
    int maxProfit(vector<int>& prices) {
        long long result =0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]-prices[i-1]>0){
                result = result+prices[i]-prices[i-1];
            }
        }
    return result;
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
            return maxProfit(nums);
        }

}