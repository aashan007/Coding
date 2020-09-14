class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        if(nums.size()==1){
            return nums[0];
        }
        if(nums.size()==2){
            return max(nums[0],nums[1]);
        }
        for(int i=2;i<nums.size();i++){
            int k=0;
            int j=i-2;
            int max=nums[i];
            int temp=0;
            
            while(j>=0 && k!=2){
                if((nums[j])>temp){
                    temp=nums[j];
                }
                j--;
                k++;
            }
            max=max+temp;
            nums[i]=max;
            
        }
        
        return max(nums[nums.size()-1],nums[nums.size()-2]);
        
    }
};