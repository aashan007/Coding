int binary_search(vector<int>&nums,int target,int start,int end){
      //  cout<<start<<" "<<end<<endl;
        if(start<end){
            
            int firstEle=nums[start];
            int mid=(start+end)/2;
           
            if(target==firstEle){
                return start;
            }
            
            if(target==nums[mid]){
                return mid;
            }
          //   cout<<start<<" "<<end<<" "<<target<<" "<<nums[mid]<<endl;
            if(target>firstEle && target>nums[mid]){
                if(firstEle>nums[mid]){
                    return binary_search(nums,target,start,mid);
                }
            else{
                return binary_search(nums,target,mid+1,end);
                }
            
            }
            else if(target<firstEle && target<nums[mid]){
                if(firstEle>nums[mid]){
                    return binary_search(nums,target,start,mid);
                }
            else{
                return binary_search(nums,target,mid+1,end);
                }
            }
            else if(target<firstEle && target>nums[mid]){
                return binary_search(nums,target,mid+1,end);
            }
            else{
                return binary_search(nums,target,start,mid);
            }
        }
        else{
            return -1;
        }
    }
    int search(vector<int>& nums, int target) {
        return binary_search(nums,target,0,nums.size());
        
    }