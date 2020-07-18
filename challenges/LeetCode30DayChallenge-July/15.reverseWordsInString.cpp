class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        string result ="";
        while(i<s.size()){
            
            while(i<s.size() && s[i]==' ')
                i++;
            if(i>=s.size()){
                break;
            }
            int j=i+1;
            while(j<s.size() && s[j]!=' ')
                j++;
            if(result.empty())
                result = s.substr(i,j-i);
            else
                result = s.substr(i,j-i)+ " " + result;
            i=j+1;
    }
        return result;
    }
};