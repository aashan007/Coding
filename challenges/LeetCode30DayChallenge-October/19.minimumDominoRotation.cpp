class Solution {
public:
    int helper(vector<int> &A,vector<int> &B,int val){
        int count = 0;
        
        for(int i=0;i<A.size();i++){
            if(A[i]!=val)
                if(B[i]==val){
                    count++;
                }
                else{
                    return 30000;
                }
        }
        return count;
    }
    int minDominoRotations(vector<int>& A, vector<int>& B) {
        int top_a = helper(A,B,A[0]); 
        int bot_a = helper(B,A,A[0]);
        int top_b = helper(A,B,B[0]);
        int bot_b = helper(B,A,B[0]);
        
        int m = min(top_a,min(bot_a,min(top_b,bot_b)));
      //  cout<<m<<endl;
        return m==30000?-1:m;
        
    }
};