class Solution {
    vector<vector<int>> result;
public:
    void dfs(int start,int sum,int depth,vector<int> st,set<int> val){
        if(depth == 0){
            if(sum==0){
                result.push_back(st);
            }
            return;
        }
        if(sum<0){
            return;
        }
        
        for(int i=start+1;i<=9;i++){
            st.push_back(i);
            dfs(i,sum-i,depth-1,st,val);
            st.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        set<int> val;
        for(int i=1;i<=10-i;i++){
            vector<int> st;
            st.push_back(i);
            dfs(i,n-i,k-1,st,val);
        }
        return result;
        
    }
};