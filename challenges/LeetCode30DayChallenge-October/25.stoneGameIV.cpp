class Solution {
public:
    bool winnerSquareGame(int n) {
        vector<bool> a(100005);
        a[1]=true;
        a[2]=false;
        a[3]=true;
        vector<int> sq;
        sq.push_back(1);
        for(int i=4;i<=n;i++){
            int ss=sqrt(i);
            if(i==ss*ss){
                a[i]=true;
                sq.push_back(i);
                continue;
            }
            bool flag=0;
            for(int j=0;j<(int)sq.size();j++){
                if(a[i-sq[j]]==false){
                    a[i]=true;
                    flag=true;
                    break;
                }
            }
            if(flag==0){
                a[i]=false;
            }
        }
        
        return a[n];
        
    }
};