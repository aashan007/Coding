class Solution {
public:
    
    int wiggleMaxLength(vector<int>& nums) {
        if(nums.size()<=2){
            if(nums.size()==2 && nums[0] == nums[1])
                return 1;
            return nums.size();
        }
        int count = 1;
        int left = true;
        int right = false;
        int j = 1;
        while((j <nums.size() ) && (nums[j-1] == nums[j])){
            j++;
        }
        if( (j< nums.size()) && (nums[j-1]<nums[j])){
            count++;
            left =  false;
            right = true;
        }
      
        else if (j<nums.size() && (nums[j-1] > nums[j])){
            count++;
            right = false;
            left = true;
        }
        
        for(int i=j+1;i<nums.size();i++)
        {
            if( nums[i]>nums[i-1] && !right){
               right = true;
               left = false;
               count++;
            }
            else if(nums[i]<nums[i-1] && !left){
                right = false;
                left = true;
                count++;
            }
            
            
        }
        
        
        return count;
        
    }
};