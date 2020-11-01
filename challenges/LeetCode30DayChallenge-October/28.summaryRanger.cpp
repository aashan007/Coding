class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if(nums.size()==0){
            return {};
        }
        if(nums.size()==1){
            string temp = to_string(nums[0]);
            vector<string> res ;
            res.push_back(temp);
            return res;
        }
        int current= nums[0];
        int len = 1;
        int last_index=0;
        vector<string> res;
        string str = to_string(current);
        for(int i=1;i<nums.size();i++){
            if(current==nums[i]){
                continue;
            }
            if(current+1==nums[i]){
                current = nums[i];
                len++;
                continue;
            }
            else{
                if(len==1){
                    res.push_back(str);
                    str = to_string(nums[i]);
                    len=1;
                    current=nums[i];
                }
                else{
                    string temp = str+"->"+to_string(nums[i-1]);
                    res.push_back(temp);
                    str = to_string(nums[i]);
                    len=1;
                    current=nums[i];
                }
            }
        }
        
        if(len==1){
                    res.push_back(str);
                }
                else{
                    string temp = str+"->"+to_string(nums[nums.size()-1]);
                    res.push_back(temp);
                }
        
        return res;
    }
};