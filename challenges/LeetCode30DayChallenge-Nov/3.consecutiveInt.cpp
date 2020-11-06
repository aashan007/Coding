class Solution {
public:
    int maxPower(string s) {
        if(s.size()==1){
            return 1;
        }
        int result=0;
        int counter = 1;
        char ch=s[0];
        for(int i=1;i<s.size();i++){
            if(ch==s[i]){
                counter++;
            }
            else{
                ch=s[i];
                result=max(result,counter);
                counter = 1;
            }
        }
        result=max(result,counter);
        
        return result;
    }
};