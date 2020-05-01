int maxProfit(vector<int>& prices) {
        int result=0;
        for(int i=0;i<prices.size();i++){
            int val=prices[i];
            int j=i;
            while(j>=0){
                if((val-prices[j])>result){
                    result=val-prices[j];
                }
                j--;
                
            }
        }
        return result;
        
        
        
        
    }