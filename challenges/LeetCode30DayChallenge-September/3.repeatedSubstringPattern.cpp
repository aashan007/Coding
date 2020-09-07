class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int len = s.size();
        for(int i=len/2;i>=1;i--){
            if(len%i==0){
                int num_times = len/i;
                string sub = s.substr(0,i);
                string res = "";
                for(int j=0;j<num_times;j++){
                    res = res+sub;
                }
                if(res==s){
                    return true;
                }
            }
        }
        return false;
    }
};