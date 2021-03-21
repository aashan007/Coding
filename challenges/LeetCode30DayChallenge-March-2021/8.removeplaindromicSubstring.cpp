class Solution {
public:
    bool checkPalindrome(string s){
    int n = s.size()-1;
        int i=0;
        while(i<=n){
            if(s[i] == s[n]){
                i++;
                n--;
            }
            else{
                return false;
            }
        }
        return true;
    }
    int removePalindromeSub(string s) {
        if(s.size()==0){
            return 0;
        }
        if(checkPalindrome(s)){
            return 1;
        }
        
        return 2;
        
        
    }
};