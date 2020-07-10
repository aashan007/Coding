class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        if(nums.size()<3){
            return {};
        }
        int n = nums.size();
      
        sort(nums.begin(),nums.end());

        vector <vector<int>> result;
        for(int i=0;i<nums.size()-2;i++){
            int val = -1 * nums[i];
            if(i == 0 || nums[i]!=nums[i-1]){
                int j=i+1,k =n-1;
                while(j<k){
                    int sum = nums[i] + nums[j] + nums[k];
                    if(sum==0){
                        result.push_back({nums[i],nums[j],nums[k]});
                        while(j<k && nums[j]==nums[j+1]) j++;
                        while(j<k && nums[k] == nums[k-1]) k--;
                        j++;k--; 
                    }
                    else if (sum> 0) k--;
                    else j++;
                }
            }
           

                
                
                
            }
        
        return result;
            
            
//            mp[nums[i]]++;
        }
        
        
    
};class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        if(nums.size()<3){
            return {};
        }
        int n = nums.size();
      
        sort(nums.begin(),nums.end());

        vector <vector<int>> result;
        for(int i=0;i<nums.size()-2;i++){
            int val = -1 * nums[i];
            if(i == 0 || nums[i]!=nums[i-1]){
                int j=i+1,k =n-1;
                while(j<k){
                    int sum = nums[i] + nums[j] + nums[k];
                    if(sum==0){
                        result.push_back({nums[i],nums[j],nums[k]});
                        while(j<k && nums[j]==nums[j+1]) j++;
                        while(j<k && nums[k] == nums[k-1]) k--;
                        j++;k--; 
                    }
                    else if (sum> 0) k--;
                    else j++;
                }
            }
           

                
                
                
            }
        
        return result;
            
            
//            mp[nums[i]]++;
        }
        
        
    
};