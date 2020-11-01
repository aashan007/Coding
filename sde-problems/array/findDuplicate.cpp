class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int val=0;
        for(int i=1;i<nums.size();i++){
            val^=i;
        }
        for(int i=0;i<nums.size();i++){
            val^=nums[i];
        }
        
        return val;
        
    }
};