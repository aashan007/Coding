class Solution {
public:
    void ktimes(vector<int> &prices,vector<int> &profit){
        int b2 = INT_MAX;
        int p2=0;
        for(int i=0;i<prices.size();i++){
            b2 = min(b2,prices[i]-profit[i]);
            p2= max(p2,prices[i]-b2);
            profit[i]=p2;
        }
    }
    int maxProfit(int k, vector<int>& prices) {
        if(k==0 || prices.size()==0) return 0;
         if(k>=prices.size()/2){
        //     //part2;
             int p =0;
            for(int i=1;i<prices.size();i++){
                if(prices[i]>prices[i-1]){
                    p = p+prices[i]-prices[i-1];
                }
            }
            return p;
         }
        //part 1;
        int Min=prices[0],p=0;
        vector<int> profit(prices.size(),0);
        for(int i=0;i<prices.size();i++){
            Min = min(Min,prices[i]);
            p = max(p,prices[i]-Min);
            profit[i]=p;
        }
      
        
        for(int i=1;i<k;i++){
            //part3;
            ktimes(prices,profit);
        }
          int ans=0;
        for(int i=0;i<profit.size();i++){
            ans = max(profit[i],ans);
        }
        return ans;
    }
};