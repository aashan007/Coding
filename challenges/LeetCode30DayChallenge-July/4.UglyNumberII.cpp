class Solution {
public:
    int nthUglyNumber(int n) {
        
        if(n==0){
            return 0;
        }
        vector<int> num;
        num.push_back(1);
        int i=0;
        int j=0;
        int k=0;
        while(num.size()<=n){
            int temp1 =num[i]*2;
            int temp2 =num[j]*3;
            int temp3 =num[k]*5;
            int minNum = min(temp1,min(temp2,temp3));
            cout<<minNum<<" ";
            num.push_back(minNum);
            
            if(minNum==temp1){
                i++;
            }
            if(minNum==temp2){
                j++;
            }
            if(minNum==temp3){
                k++;
            }
        }
        
        
        return num[n-1];
    }
};