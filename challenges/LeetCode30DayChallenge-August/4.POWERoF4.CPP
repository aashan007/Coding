class Solution {
public:
    bool isPowerOfFour(int num) {
        if(num==1){
            return true;
        }
        int count = 0;
        while(num){
            if(num&1 || (num>>1)&1){
                return false;
            }
            num = num>>2;
            if(num==1){
                return true;
            }

        }
        
        return false;
        
        
    }
};