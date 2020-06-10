 int binarySearch(vector<int> &nums,int target,int start,int end){
        if(start<=end){
            int mid = start+ (end-start)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[mid]<target){
                return binarySearch(nums,target,mid+1,end);
            }
            return binarySearch(nums,target,start,mid-1);
        }
        return start;
    }
    int searchInsert(vector<int>& nums, int target) {
        
        int index = binarySearch(nums,target,0, nums.size()-1);
        
        
        return index;
        
    }