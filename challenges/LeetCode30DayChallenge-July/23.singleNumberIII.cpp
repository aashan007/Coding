class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int sum=0;
        for(int n:nums)
            sum^=n;
        
        int lowbit = sum &(-sum);
        vector<int> res {0,0};
        for(int n:nums){
            if(n&lowbit)
                res[0]^=n;
            else
                res[1]^=n;
        }
        
        return res;
    }
};