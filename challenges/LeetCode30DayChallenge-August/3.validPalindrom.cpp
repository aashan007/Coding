class Solution {
public:
    bool checkAlphaNumeric(char &ch){
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
            if(ch>='A' && ch<='Z'){
                ch = ch+32;
            }
            return true;
        } 
        return false;
    }
    bool isPalindrome(string s) {
        int start=0;
        int end = s.size()-1;
        while(start<end){
            if(!checkAlphaNumeric(s[start])){
                start++;
                continue;
            }
            if(!checkAlphaNumeric(s[end])){
                end--;
                continue;
            }
       //     cout<<s[start]<<" "<<s[end]<<" "<<start<<" "<<end<<endl;
            if(s[start] != s[end]){
                return false;
            }
            start++;
            end--;
        }
        
        
        
        return true;
        
    }
};