class Solution {
    void dfs(int d,int N,int K,vector<int> &result){
        if(N==0){
            result.push_back(d);
            return;
        }
        int last_digit = d%10;
        if(last_digit-K>=0) dfs(d*10+last_digit-K,N-1,K,result);
        if(K>0 && last_digit + K<10) dfs(d*10+last_digit+K,N-1,K,result);
        
    }
public:
    vector<int> numsSameConsecDiff(int N, int K) {
        vector<int> result;
        if(N==1){
            result.push_back(0);
        }
        for(int d=1;d<=9;++d){
            dfs(d,N-1,K,result);
        }
        return result;
    }
};