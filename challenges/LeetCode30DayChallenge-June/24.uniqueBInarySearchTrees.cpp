class Solution {
public:
    int numTrees(int n) {
        int dp[n+1];
        dp[0]=1;
        if(n==1){
            return 1;
        }
        if(n==2){
            return 2;
        }
        if(n==3){
            return 5;
        }
        dp[1]=1;
        dp[2]=2;
        dp[3]=5;
        
        for(int i=4;i<=n;i++){
            int total=0;
            int k=1;
            while(k<=i){
                int l=k-1;
                int r=i-k;
                
                total = total + (dp[l] * dp[r]);
                k++;
            }
            
            
            dp[i]=total;
            
        }
        return dp[n];
        
    }
};