class Solution {
public:
    void subset(vector<int>nums,vector<int> res,vector<vector<int>>& result){
        if(nums.size()==0){
            result.push_back(res);
            return;
        }
        int val=nums[0];
        nums.erase(nums.begin());
        res.push_back(val);
        subset(nums,res,result);
       res.pop_back();
        subset(nums,res,result);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> res;
        subset(nums,res,result);
        return result;
        
        
    }
};