class Solution {
    int sum=0;
    vector<int> prefixSum;
public:
    Solution(vector<int>& w) {
        for(int i=0;i<w.size();i++){
            sum+=w[i];
            prefixSum.push_back(sum);
        }
    }
    
    int pickIndex() {
        int num = rand()%sum;
        int i=0;
        for(;i<prefixSum.size();i++){
            if(num<prefixSum[i]){
                break;
            }
        }
        return i;
        
    }
};