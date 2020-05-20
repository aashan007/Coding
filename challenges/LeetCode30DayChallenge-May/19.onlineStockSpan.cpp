class StockSpanner {
vector <int> val;
vector <int> dp;
    int index;
public:
    StockSpanner() {
        index=0;
    }
    
    int next(int price) {
        val.push_back(price);
        if(val.size()==1){
            dp.push_back(1);
            index++;
            return 1;
        }
         else{
             int temp = 1;
             int tempIndex=val.size()-2;
             cout<<tempIndex<<endl;
             while(price>=val[tempIndex] && tempIndex>=0){
                 temp = temp + dp[tempIndex];
               //  cout<<price<<" "<<val[tempIndex]<<" "<<tempIndex<<" "<<dp[tempIndex]<<" "<<temp<<endl;
                 tempIndex = tempIndex - dp[tempIndex];
                 if(tempIndex<0){
                     break;
                 }
                // cout<<price<<" "<<val[tempIndex]<<" "<<tempIndex<<" "<<dp[tempIndex]<<" "<<temp<<endl;
             }
             dp.push_back(temp);
            
             index++;
             return temp;
         }
        return 1;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */