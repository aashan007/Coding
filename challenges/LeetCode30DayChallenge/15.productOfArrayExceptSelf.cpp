    vector<int> productExceptSelf(vector<int>& nums) {
        vector <int>res;
        int pro=1;
        res.push_back(1);
        for(int i=1;i<nums.size();i++){
            pro=pro*nums[i-1];
            res.push_back(pro);
        }
        vector<int> right;
        right.push_back(1);
        pro=1;
        for(int i=nums.size()-1;i>0;i--){
            pro=pro*nums[i];
            right.push_back(pro);
        }
        for(int i=0;i<nums.size();i++){
            res[i]=res[i]*right[nums.size()-i-1];
        }
        
        return res;
        
    }