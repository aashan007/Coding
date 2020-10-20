class Solution {
public:
    
    int checker(vector<int> &nums,int start,int end){
        int n=end-start+1;
        
        int currMax = 0;
        vector<int> dp(n);
        dp[0] = nums[start];
        dp[1] = max(nums[start],nums[start+1]);
     //   currMax = dp[1];
        for(int i=start+2;i<=end;i++){
            dp[i-start] = max(dp[i-start-1],nums[i]+dp[i-start-2]);
            
        }
        
        return dp[end-start];
        
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        if(nums.size()==2){
            return max(nums[0],nums[1]);
        }
        int n = nums.size();
        int a = checker(nums,0,n-2);
        int b = checker(nums,1,n-1);
        
     
        
        return max(a,b);
        
    }
};