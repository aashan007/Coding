class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ones=0;
        int twos=0;
        int thrice=0;
        for(int n:nums){
            twos=twos | (ones&n);
            ones=ones^n;
            thrice=ones&twos;
            ones&=~thrice;
            twos&=~thrice;
            
        }
        return ones;
            
    }
};