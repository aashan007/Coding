class Solution {
public:
    int hIndex(vector<int>& citations) {
        vector <int> bucket(citations.size()+1,0);
        for(int i=0;i<citations.size();i++){
            if(citations[i]>=citations.size()){
                bucket[citations.size()]++;
            }
            else{
                bucket[citations[i]]++;
            }
        }
        int hIndex=0;
        int recurSum=0;
        for(int j=citations.size();j>=0;j--){
            recurSum+=bucket[j];
            if(j<=recurSum){
                hIndex=j;
                break;
            }
        }
        
        // for(int i=0;i<=citations.size();i++){
        //     cout<<bucket[i]<<" ";
        // }
        return hIndex;
        
    }
};