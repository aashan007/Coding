int findMaxLength(vector<int>& nums) {

        
        unordered_map<int,int> mp;
        mp[0]=-1;
        int sum=0;
        int max=0;
        int end=-1;
        for(int i=0;i<nums.size();i++){
            int temp;
            if(nums[i]){
                temp=1;
            }
            else{
                temp=-1;
            }
            sum+=temp;
            if(mp.count(sum)==0){
                mp[sum]=i;
            }
            else{
                int prev_i = mp[sum];
                if(max<i-prev_i){
                    max=i-prev_i;
                    end=i;
                }
            }
        }
        if(end!=-1){
            return max;
        }
        else{
            return 0;
        }
    }