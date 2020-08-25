class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        vector<int> cumSum(366,0);
        int sizeD=days.size();
        int k=0;
        for(int i=1;i<=365;i++){
            if(days[k] == i){
                    cumSum[i]+=1;
               
                k++;
            }
             
             cumSum[i]+=cumSum[i-1];
            // cout<<days[k-1]<<" "<<k-1<<" "<<i<<" "<<cumSum[i]<<endl;
            if(k>=sizeD){
                // cout<<"Hit Here"<<endl;
                break;
            }
            
        }
        // cout<<"Test"<<endl;
        // for(int i=0;i<30;i++){
        //     cout<<cumSum[i]<<" ";
        // }
        // cout<<endl;
        int lastDay = days[sizeD-1];
        vector<int> dp(lastDay+1,0);
        int cost = 0;
        for(int i=1;i<=lastDay;i++){
            if(cumSum[i]-cumSum[i-1]){
                int minVal = INT_MAX;
                if(i>=30)
                     minVal = min(dp[i-30]+costs[2],minVal);
                else
                    minVal = costs[2];
                if(i>6)
                     minVal = min(dp[i-7]+costs[1],minVal);
                else
                    minVal = costs[1];
                minVal = min(dp[i-1]+costs[0],minVal);
                dp[i]=minVal;
            }
            else
                dp[i] = dp[i-1];
        }
        

        
         return dp[lastDay];
    }
};