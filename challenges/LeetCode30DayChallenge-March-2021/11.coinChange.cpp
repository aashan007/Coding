class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if(amount==0){
            return 0;
        }
        long long* dp = new long long [amount+1];
        
        for(int i=0;i<=amount;i++){
            dp[i]=INT_MAX;
        }
        int result = 0;
        sort(coins.begin(),coins.end());
        
        for(int i=0;i<coins.size();i++){
            if(coins[i]<=amount){
                dp[coins[i]] = 1;
            }
        }
        
        for(int i=1;i<=amount;i++){
            
            for(int j:coins){
                if(i-j>=0){
                    dp[i] = min(1 + dp[i-j],dp[i]);
                }
            }
        }
        
        
        if(dp[amount] == INT_MAX){
            return -1;
        }
        
        result = dp[amount];
        delete []dp;
        
        return result;
    }
};