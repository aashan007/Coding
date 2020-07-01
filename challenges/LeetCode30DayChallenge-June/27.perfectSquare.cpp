class Solution {
public:
    int numSquares(int n) {
        vector<int> dp(n+1,0);
        for(int i=1;i<=n;i++){
            
            int curr = INT_MAX;
            for(int j=1;j*j<=i;j++){
                int k=j*j;
                
                curr = min(curr,dp[i-k]);
            }
            dp[i] = 1+curr;
        }
        
        // for(int i=0;i<=n;i++){
        //     cout<<dp[i]<<" ";
        // }
        
        
        return dp[n];
        
    }
};