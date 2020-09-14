class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        int current_max=nums[0];
        int current_min=nums[0];
        int final_max=nums[0];
        
        for(int i=1;i<nums.size();i++){
            int temp = current_max;
            current_max=max(max(temp*nums[i],current_min*nums[i]),nums[i]);
            current_min = min(min(temp*nums[i],current_min*nums[i]),nums[i]);
            if(current_max>final_max){
                final_max=current_max;
            }
        }
        return final_max;
    }
};