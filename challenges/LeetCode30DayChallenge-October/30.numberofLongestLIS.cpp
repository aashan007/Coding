class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        if(nums.size()==0) return 0;
        
        int n=nums.size();
        vector<int> length(n,1);
        vector<int> count(n,1);
        int maxlen=1;
        
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j]){
                if(length[j]+1>length[i]){
                    length[i]=length[j]+1;
                    count[i]=count[j];
                }
                else if(length[j]+1==length[i]){
                    count[i]+=count[j];
                }
                    
                }
            }
            maxlen = max(maxlen,length[i]);
        }
        int result=0;
        for(int i=0;i<n;i++){
            if(length[i]==maxlen){
                result+=count[i];
            }
        }
        return result;
        
    }
};