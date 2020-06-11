void sortColors(vector<int>& nums) {
        int i = 0;
        int k = 0;
        int j = nums.size()-1;
        while(i<j && k<=j && k>=0){
             if(nums[k]==1){
                 k++;
             }
             else if(nums[k]==0){
                 int temp = nums[k];
                 nums[k] = nums[i];
                 nums[i] = temp;
                 i++;
                 k=i;
             }
             else{
                 int temp =nums[k];
                 nums[k] = nums[j];
                 nums[j] = temp;
                 j--;
             }
        }
        
    }