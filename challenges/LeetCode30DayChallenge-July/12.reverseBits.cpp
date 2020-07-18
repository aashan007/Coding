class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t result =0;
        int it=0;
        while(it<32){
            result = result<<1;
            int res = n&1;
            if(res){
                result =result+1;
            }
          
 //           cout<<n<<endl;
            n=n>>1;
            it++;
        }
        
        
        
        return result;
        
    }
};