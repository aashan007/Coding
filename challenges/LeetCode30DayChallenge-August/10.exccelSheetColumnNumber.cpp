class Solution {
public:
    int power26(int n){
        if(n==0){
            return 1;
        }
        return 26*power26(n-1);
    }
    int titleToNumber(string s) {
        int size = s.size();
        int result=0;
        for(int i=0;i<size;i++){
            int num = size-i-1;
            int val = (s[i]-'A');
            int temp =  ((val+1)*power26(num));
            result+=temp;
        }
        
        return result;
        
    }
};