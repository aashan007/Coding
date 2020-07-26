int max(int a,int b){
        return (a>b)?a:b;
    }
    bool canJump(vector<int>& nums) {
        long long maxJump=-1;
        long long result=0;
        if(nums.size()==1){
            return true;
        }
        for(int i=0;i<nums.size()-1;i++){
            maxJump = max(maxJump-1,nums[i]);
         //   result = max( i+ maxJump,result);
            
            cout<<i<<" "<<nums[i]<<" "<<maxJump<<" "<<result<<endl;
            if(i+maxJump>=nums.size()-1){
                return true;
        }
            if(maxJump == 0){
                return false;
            }
            
        }
        if(result>=nums.size()){
            return true;
        }
        return false;
        
    }