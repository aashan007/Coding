int singleNonDuplicate(vector<int>& nums) {
        int num=nums[0];
        for(int i=1;i<nums.size();i++){
            num = num ^ nums[i];
        }
        
        
        return num;
        
    }

/*
best Solution

    int singleNonDuplicate(vector<int>& nums) {
	int start=0, end = nums.size()-1, mid;
	while( start < end ) {
		mid = start + (end-start)/2;
		if( nums[mid] == nums[mid ^ 1] )
			start = mid + 1;
		else
			end = mid;
	}
	return nums[start];
}


*/