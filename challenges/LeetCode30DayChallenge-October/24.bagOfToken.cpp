class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int P) {
        sort(tokens.begin(),tokens.end());
        int maxPoints=0;
        int points=0;
        int i=0;
        int j=tokens.size()-1;
        while(i<=j){
            if(P>=tokens[i]){
                points++;
                P-=tokens[i++];
                maxPoints=max(maxPoints,points);
                
            }
            else if(points>0){
                points--;
                P+=tokens[j--];
                
            }
            else{
                return maxPoints;
            }
        }
        
        return maxPoints;
        
    }
};